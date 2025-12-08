#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include "DeLorean.h"

void memoryCruise(void* mainAdress) 
{
    //AI generated comment of this human generated chaos : 'The function is role-playing a time-travelling car while committing war crimes against the stack.'
    const char* beeScript = "According to all known laws of aviations, there is no way a void pointer should be able to fly past this array. The pointer, of course, does anyway.";
    size_t normalData[] = {41,42,43,44,45,46,47,48};
    size_t mundaneData[] = {68,67,66,65,64,63,62,61};
    char movieScript[][200] = {
                            {"Doc : Marty ! We need to go back in time and fix this !"},
                            {"Doc : The DeLorean crossed the forward stack boundaries !" "It's now venturing into uncharted territory !"},//longer than 100 chars -> gets shortened if char 100
                            {"Doc : If we don't stop this, a Time paradox could destroy the universe, or worse !"},
                            {"Doc : Undefined Behavior could Segfault the flux capacitor, Marty !"},
                            {"Marty : Man, that's heavy."}
                        };
    void* DeLorean[] = {(void*)(__UINTPTR_TYPE__)memoryCruise, mainAdress, (void*)beeScript, movieScript, normalData, mundaneData, DeLorean};
    int transmissionGearCount = sizeof(DeLorean)/sizeof(DeLorean[1]);
    
    int z = 256;
    int gear = 0, dir = 0, go = 1;
    int* dashBoard[] = {&transmissionGearCount, &gear, &dir};
    {
    char w[2]; 
    char selector[2];
    //funnily enough, this needs to be 2-byte long in order to read 1 byte correctly from scanf. Else the terminating \0 is written in the next memory slot. 
    //Which in testing happened to be selector[0]. Where I put the R/D selection of the user. Which is then confirmed by reading the \n into w. Which overrides selector[0] with the \0 to terminate thee successfully read \n it scanf'd right afterwards.
    //which is ironically fitting as a way to jam the ignition of a litteral stack off-roader DeLorean
    printf("\n\nWelcome aboard the Stack DeLorean ! Which pointer (0-%d) should we follow ? ", *dashBoard[0]-1);
    if (!(
        (scanf("%d%1[\n]", dashBoard[1], w)==2) 
        && ((*dashBoard[1] >= 0) && (*dashBoard[1] < *dashBoard[0]))
        )) 
        {
        printf("%d_%d_,_%d_%d_,_%d_%d\n",*dashBoard[1], *dashBoard[0],selector[0], selector[1], w[0], w[1]);
        if (*dashBoard[1] >= *dashBoard[0]) 
        {
            printf("Can you NOT ? Reading past array bounds is SUPER ILLEGAL ! Let's just take the last valid pointer...\n"); 
            *dashBoard[1] = *dashBoard[0]-1;
        } 
        else go = 0;
        } 
    
    
    printf("Forward or Reverse ? [R/D] : ");
    if (!(scanf("%1[RD]%1[\n]", selector, w)==2)) {go = 0;}
    else switch (selector[0])
        {
            case 'R': 
                *dashBoard[2] = -1; break;
            case 'D':
                *dashBoard[2] = 1; break;
            default :
                go = 0; break;
        } 
    }
    
    
    for (int i=0; 
        (dir*i < z) && go; 
        i = i + dir) 
    {
        void* PeLorean =(   (char*)DeLorean[gear]   )+i; 
        if((dir*i)%64==0) 
        {
            char ransackedChars[80] = {0};
            for (int y=0; y<64; y++) 
                {
                    ransackedChars[y] = *((char*)PeLorean + y);
                    if (ransackedChars[y] == 0) ransackedChars[y] = '_';
                    else if(ransackedChars[y] == 10) ransackedChars[y] = '~';
                    else if(ransackedChars[y] == 13) ransackedChars[y] = '<';
                    else if(ransackedChars[y] > 8 && ransackedChars[y] < 15) ransackedChars[y] = '#';
                    else if(ransackedChars[y] == 92) ransackedChars[y] = '/';
                }
            printf("%p", PeLorean);
            printf("<-starting at- p[%d][%5d] -reads 64 bytes-> : ", gear, i);
            printf("\"%-63s\"", ransackedChars);
        }
        if (((i*dir) == (z-1)) && 1)
        {
            printf("Keep going ? [enter]");
            char w = 0;
            z = (scanf("%1[\n]", &w)==1) ? z+511 : z ;
        }
    }
}

int handKeyOver(int* dashBoard[])
{   
    char w[2]; 
    char selector[2];
    //funnily enough, this needs to be 2-byte long in order to read 1 byte correctly from scanf. Else the terminating \0 is written in the next memory slot. 
    //Which in testing happened to be selector[0]. Where I put the R/D selection of the user. Which is then confirmed by reading the \n into w. Which overrides selector[0] with the \0 to terminate thee successfully read \n it scanf'd right afterwards.
    //which is ironically fitting as a way to jam the ignition of a litteral stack off-roader DeLorean
    printf("\nDashboard engine lights : %p %p %p %p", (void*)dashBoard[0], (void*)dashBoard[1], (void*)dashBoard[2], (void*)dashBoard[3]);
    printf("\nignition slots : %p %p", w, selector);
    printf("\n%d_%d_,_%d_%d_,_%d_%d\n",*dashBoard[1], *dashBoard[0],selector[0], selector[1], w[0], w[1]);

    printf("\n\nWelcome aboard the Stack DeLorean ! Which pointer (0-%d) should we follow ? ", *dashBoard[0]-1);
    if (!(
        (scanf("%d%1[\n]", dashBoard[1], w)==2) 
        && ((*dashBoard[1] >= 0) && (*dashBoard[1] < *dashBoard[0]))
        )) 
        {
        printf("%d_%d_,_%d_%d_,_%d_%d\n",*dashBoard[1], *dashBoard[0],selector[0], selector[1], w[0], w[1]);
        if (*dashBoard[1] >= *dashBoard[0]) 
        {
            printf("Can you NOT ? Reading past array bounds is SUPER ILLEGAL ! Let's just take the last valid pointer...\n"); 
            *dashBoard[1] = *dashBoard[0]-1;
        } 
        else return 0;
        } 
    
    
    printf("Forward or Reverse ? [R/D] : ");
    if (!(scanf("%1[RD]%1[\n]", selector, w)==2)) {return 0;}
    else switch (selector[0])
        {
            case 'R': 
                *dashBoard[2] = -1; break;
            case 'D':
                *dashBoard[2] = 1; break;
            default :
                return 0; break;
        } 

    printf("Select dashboard data gauges (S = chars, X = HEX, Y = both ) [S/X/Y] : ");
    if (!(scanf("%1[SXY]%1[\n]", selector, w)==2)) {return 0;}
    else switch (selector[0])
        {
            case 'S': 
                *dashBoard[3] = 0; return 1; break;
            case 'X':
                *dashBoard[3] = 1; return 1; break;
            case 'Y':
                *dashBoard[3] = 2; return 1; break;
            default :
                return 0; break;
        } 
}




void engineRev(void** stackVehicle, int gearCount)
{
    int z = 128;
    for (int i=0, k=0; i<z; i++) 
    {       char adrEnd[50] = {0};
            sprintf(adrEnd, "%15s", "lol");
           if (0) 
            {
                printf("...%lx <-at- p[%d][%d] -reads-> : %8d_'%c'\t",
                ((size_t)&(((char*)stackVehicle[k])[i]))%(16*16*16*16), 
                k,i, 
                (int)((char*)stackVehicle[k])[i], 
                ((char*)stackVehicle[k])[i]
                );
            } else
            {
                if (i==0) printf("...%p <-at- p[%d][%d] -reads-> :\n\t", 
                    (void*)&((((size_t*)stackVehicle[k])[i])),
                    k,i );
                printf("%c",((char*)stackVehicle[k])[i]);
                
            }
    if (i == (z-2) && k<(gearCount)) {i=-1; k++; printf("\n");}
    }
}