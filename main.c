/**
 * @brief A plutonium-fueled void-pointer-casting function that drives down the stack ransacking it like it's a german highway
 * @author Maxence Rosselet maxence.rosselet-christ@heig-vd.ch
 *
 * @note COMPILE: make clean && make
 * @note COMPILE: gcc -g -Wall -Wextra -Wpedantic -o mua1d main.c -lm
 */


 /**
  * SLIDE 22 COURS 5 SAISIE DE VALEURS
  * Précision sur le fonctionnement de scanf()
– Lorsque l’utilisateur presse la touche « Entrée », tout le texte tapé est placé
dans une zone de mémoire appelée tampon ou buffer.
– Ensuite, scanf() recherche les champs demandés dans cette mémoire tampon.
Le scanf() suivant
– Recherche les champs demandés dans la mémoire tampon.
– Si la mémoire tampon est vide, scanf() gère à nouveau la saisie par
l’utilisateur.
  */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <DeLorean.c>

#define VERBOSE 0

void eightyEightUBPH();

int main(void)
{
    eightyEightUBPH();
    return 0;
}

void eightyEightUBPH() 
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
    void* DeLorean[] = {eightyEightUBPH, main, beeScript, movieScript, normalData, mundaneData, DeLorean};
    int transmissionGearCount = sizeof(DeLorean)/sizeof(DeLorean[1]);
    engineRev(DeLorean, transmissionGearCount-1);

    int z = 256;
    int gear = 0, dir = 0, hud = 0, go = 1;
    int* carCtrls[] = {&transmissionGearCount, &gear, &dir, &hud};
    go = handKeyOver(carCtrls);
    if (!go) printf("\nNo lol. That's too far EVEN for me. \n");
    
    
    for (int i=0; 
        (dir*i < z) && (go); 
        i = i + dir) 
    {
        const int getCharFromMemory_METHOD = 1;
        const int brief_mode = 1;
        char ransackedChars[80] = {0};
        char* CeLorean = &(    (   (char*)DeLorean[gear]   )[i]  )  ; 
        void* PeLorean =       (   (char*)DeLorean[gear]   )+i      ; 
        //CeLorean is a pointer to the adress ( & ) of the i_th character ( [i] ) of the imaginary char string ( (char*) ) starting at the adress stored in DeLorean[gear]
        //PeLorean treats DeLorean[gear] as the adress of a character chain (char*) and offsets the adress by i chars (=bytes). 
        //Both should contain the same adress, their type aside.
        
//!EXECUTES EVERY 64 BYTES
        if((dir*i)%64==0) 
            {   
/**
 * TODO SCANS COMING 64 BYTES INTO BUFFER AND SANITIZES INPUT (reads "forward in stack" regardless of direction)
 */
                for (int y=0; y<64; y++) 
                {   
                    
                    ////sscanf(((char*)DeLorean[gear]) + dir*(i+y), "%1c",&ransackedChars[y]);
                    ////right, reading the character directly is more efficient lol
                    switch 
                    (getCharFromMemory_METHOD) 
                    {
                        case 0:
                            ransackedChars[y] = CeLorean[y];
                            break;
                        case 1:
                            ransackedChars[y] = *((char*)PeLorean + y);
                            break;
                    }
                    if (ransackedChars[y] == 0) ransackedChars[y] = '_';
                    else if(ransackedChars[y] == 10) ransackedChars[y] = '~';
                    else if(ransackedChars[y] == 13) ransackedChars[y] = '<';
                    else if(ransackedChars[y] > 8 && ransackedChars[y] < 15) ransackedChars[y] = '#';
                    else if(ransackedChars[y] == 92) ransackedChars[y] = '/';
                } 

/**
 * TODO PRINTS ADRESS DEPENDING ON PRINTING TYPE (overly complex for no reason, needs overhaul)
 */

                switch (brief_mode)
                {
        //*prints full pointer values and full text legend. Might be too wide for both hex and string on a single line.
                case 0: switch 
                (getCharFromMemory_METHOD) 
                    {
                        case 0:
                            printf("%p", (void*)&(CeLorean[0])); 
                            printf("<-starting at- p[%d][%5d] -reads 64 bytes-> : ", gear, i);
                            break;
                        case 1:
                            printf("%p", PeLorean);
                            printf("<-starting at- p[%d][%5d] -reads 64 bytes-> : ", gear, i);
                            break;
                        default :
                            printf("%p <-starting at- p[%d][%5d] -reads 64 bytes-> : ", (void*)&(((char*)DeLorean[gear])[i]), 
                            gear, i*dir
                            );
                    }
        //*truncates pointer values and full text legend. Might be too wide for both hex and string on a single line.
                case 1: switch 
                (getCharFromMemory_METHOD) 
                    {
                        case 0:
                            printf("%zx.%zx", 
                                ((size_t)&(CeLorean[0])) / (16*16*16*16) / (16*16*16*16) / 256, 
                                ((size_t)&(CeLorean[0])) % (16*16*16*16)
                                ); 
                            printf("<- p[%d][%d] -%%64c->:", gear, i);
                            break;
                        case 1:
                            printf("%zx.%zx", 
                                ((size_t)PeLorean) / (16*16*16*16) / (16*16*16*16) / 256, 
                                ((size_t)PeLorean) % (16*16*16*16)
                                ); 
                            printf("<- p[%d][%d] %%64c->:", gear, i);
                            break;
                    }
                }

/**
 * TODO PRINTS HEX AND STRING VALUES DEPENDING ON PICKED METHOD (the "how to select the adress" method will end up as a COMPARE here and as EXAMPLES in a set function, lol)
 */

                ////size_t* whyBother = ((char*)DeLorean[gear]) + dir*(i);
                size_t* whyBother = 
                (getCharFromMemory_METHOD)
                    ? (size_t*)PeLorean
                    : (size_t*)&(CeLorean[0])
                    ;

                if (hud != 1) 
                    printf("\"%-63s\"", ransackedChars);
                if (hud != 0) 
                {
                    for (int h=0; h<8; h++) printf(" %16zX ", *(whyBother+h));
                }
                printf("\n");
            }

//! end of 64-byte periodic execution !

/**
 * TODO USER PROMPT AT EACH INCREMENT REACHED
 */

    if (((i*dir) == (z-1)) && 1){
        printf("Keep going ? [enter]");
        char w = 0;
        z = (scanf("%1[\n]", &w)==1) ? z+511 : z ;
        }
    }

}






