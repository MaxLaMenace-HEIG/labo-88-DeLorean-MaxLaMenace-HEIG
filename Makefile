#
# MUA 1D Makefile
# gregory.medwed@heig-vd.ch
# Octobre 2025
#

EXEC = DeLorean

# Debug
CFLAGS  = -g -Wall -Wextra -Wpedantic
# Release
#CFLAGS  = -O3 -Wall -Wextra -Wpedantic

INCDIR = -I./

#LIBDIRS = -L/usr/lib/x86_64-linux-gnu/

LIBS = -lm

LDFLAGS= $(LIBDIRS) $(LIBS)

#------------------------------------------------------------------------------
all: $(EXEC)

help:
	@echo 'all         or "make", start compilation.'
	@echo 'clean       Delete automatically created files.'

$(EXEC):
	$(CC) $(CFLAGS) main.c DeLorean.c -o $(EXEC) $(LDFLAGS)

clean:
	rm -f ./*.o
	rm -f $(EXEC)

.PHONY: all