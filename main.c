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

#define VERBOSE 0

void printfGuideThrough();
void heheArray();
void eightyEightUBPH();
void engineRev(void** stackVehicle, int gearCount);
int handKeyOver(int* dashBoard[]);

void eightyEightUBPH() 
{   
    //AI generated comment of this human generated chaos : 'The function is role-playing a time-travelling car while committing war crimes against the stack.'
    char* beeScript = "According to all known laws of aviations, there is no way a void pointer should be able to fly past this array. The pointer, of course, does anyway.";
    size_t normalData[] = {41,42,43,44,45,46,47,48};
    size_t mundaneData[] = {68,67,66,65,64,63,62,61};
    char* movieScript = "Marty ! We need to go back in time and fix this ! The DeLorean crossed the forward stack boundaries and is venturing into uncharted territory !";
    void* DeLorean[] = {eightyEightUBPH, heheArray, beeScript, normalData, movieScript, mundaneData, DeLorean};
    int transmissionGearCount = sizeof(DeLorean)/sizeof(DeLorean[1]);
    engineRev(DeLorean, transmissionGearCount-1);

    int z = 256;
    int gear = 0, dir = 0, hud = 0, go = 1;
    int* carCtrls[] = {&transmissionGearCount, &gear, &dir, &hud};
    go = handKeyOver(carCtrls);
    if (!go) printf("\nNo lol. That's too far EVEN for me. \n");

    for (int i=0; i<z && go; i++) 
    {       
            
            if((i)%64==0) 
            {   
                char ransackedChars[80] = {0};
                for (int y=0; y<64; y++) 
                {   
                    //sscanf(((char*)DeLorean[gear]) + dir*(i+y), "%1c",&ransackedChars[y]);
                    ransackedChars[y] = *(((char*)DeLorean[gear])+ dir*(i+y)); //right, reading the character directly is more efficient lol
                    if (ransackedChars[y] == 0) ransackedChars[y] = '_';
                    else if(ransackedChars[y] == 10) ransackedChars[y] = '~';
                    else if(ransackedChars[y] == 13) ransackedChars[y] = '<';
                    else if(ransackedChars[y] > 8 && ransackedChars[y] < 15) ransackedChars[y] = '#';
                    else if(ransackedChars[y] == 92) ransackedChars[y] = '/';
                } 
                printf("...%p <-starting at- p[%d][%5d] -reads 64 bytes-> : ",
                    (void*)&(((char*)DeLorean[gear])[i*dir]), 
                    gear, i*dir
                    );
                size_t* whyBother = ((char*)DeLorean[gear]) + dir*(i);
                for (int h=0; h<8 && hud; h++) printf(" %16zX ", *(whyBother+h));
                if (hud != 1) printf("\"%-63s\"", ransackedChars);
                printf("\n");
            }
    if ((i == (z-1)) && 1){
        printf("Keep going ? [enter]");
        char w = 0;
        z = (scanf("%1[\n]", &w)==1) ? z+511 : z ;
        }
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
                if (i==0) printf("...%p <-at- p[%d][%d] -reads-> :\n\t", (void*)&((((size_t*)stackVehicle[k])[i]))
                //%(16*16*16*16)
                , k,i );
                printf("%c",((char*)stackVehicle[k])[i]);
                
            }
            
      //printf("\n");
    if (i == (z-2) && k<(gearCount)) {i=-1; k++; printf("\n");}
    /*else if ((i == (z-2)) && 0){
        printf("\n");
        char w = 0;
        z = (scanf("%1[y]%1[\n]", &w, &w)==2) ? z+500 : z ;
        printf("...%p <-at- p[%d][%d]\n",&(((char*)stackVehicle[k])[i]), 
                k,i);
        }*/
    }
}

int handKeyOver(int* dashBoard[])
{   
    char w[2]; 
    //funnily enough, this needs to be 2-byte long in order to read 1 byte correctly from scanf. Else the terminating \0 is written in the next memory slot. 
    //Which in testing happened to be selector[0]. Where I put the R/D selection of the user. Which is then confirmed by reading the \n into w. Which overrides selector[0] with the \0 to terminate thee successfully read \n it scanf'd right afterwards.
    //which is ironically fitting as a way to jam the ignition of a litteral stack off-roader DeLorean
    char selector[2] = "WW";
    printf("\nEngine Lights : %p %p %p %p", (void*)dashBoard[0], (void*)dashBoard[1], (void*)dashBoard[2], (void*)dashBoard[3]);
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

int main(void)
{
    if (0) heheArray();
    eightyEightUBPH();
    return 0;
}

/**
 * @brief Calcule la hauteur de chute d'un objet sur trois planettes après vérification de l'entrée d'utilisateur
 * @return 0 si pas d'erreur,
 * @return 1 si erreur d'entrée : terre = t ou T, lune = l ou L, mars = m ou M, 
 * @return 2 si distance invalide
 * */
int main2(void) {

    double g = 0, fallHeight = 0;
    printf("Merci de choisir la planète : ");
    g = matchPlanet();
    if (g<0) {return 1;}
    //checks valid entry
    
    printf("\nEntrer la hauteur [m] :");
    if (!scanf("%lf", &fallHeight))
    { return 1;}
        else 
    if (fallHeight > 0)
        printf("\n");
        else {
        printf("\ninvalid entry\n");
        return 2;
        }
    
    const double t = sqrt((2*fallHeight)/g);
    const double v = sqrt((2*fallHeight)*g)/3.6;

    char* rowLabel[] = {"Résultats:", "Accélération:", "Hauteur de Chute:", "Temps de Chute:", "Vitesse Finale:"};

    printf("%-20s\n", rowLabel[0]);
    printf("%-22s", rowLabel[1]);
    printf ("%lg [m/s^2]\n", g);
    printf("%-20s", rowLabel[2]);
    printf ("%lg [m]\n", fallHeight);
    printf("%-20s", rowLabel[3]);
    printf ("%lg [secondes]\n", t);
    printf("%-20s", rowLabel[4]);
    printf ("%lg [km/h]\n", v);
    return 0;
}


void heheArray() 
{
printf("%lu_%lu\n", strlen("ecole"), strlen("école"));

char okPlanets[6] = {'t', 'T', 'l', 'L', 'm', 'M'};
char leviosa[7] = "leviosa";
int gravities[3] = {38, 28434};
char levsa[9] = "LéVSÀ";
int mavities[3] = {42, 42, 42};
char leviosaa[8] = "v3v105";
void* pointers[] = {okPlanets, leviosa, (void*)gravities, levsa, mavities, leviosaa, pointers};
printf("chars : %lu, int : %lu, void* : %lu. Let's dive in !\n", sizeof(okPlanets[0]), sizeof(gravities[0]), sizeof(pointers[0]));
for (int j=0; j<7; j++)
 {  
    int z = (j==6) ? 7800 : 16;
    printf("\n\t (void*)%p[%d] (meaning the pointer stored at %p)(aka the %dth (void*) in pointers[]) WHICH POINTS TO...\n", 
        (void*)pointers, j, (void*)&pointers[j], j);
    printf("\t\t%p, somewhere where bytes, if read as a 16-long char array, yield \"%-15s\"\n\n", 
        pointers[j], ((char*)pointers[j]));
        
    for (int i=0, k=0; i<z; i++) 
    {       char adrEnd[50] = {0};
            sprintf(adrEnd, "%-15s", "lol");
            printf("...%lx <-at- p[%d][%3d] -reads-> : %8d_'%c'\t",
                ((size_t)&(((char*)pointers[j])[i]))/*%(16*16*16*16*16)*/, 
                j, i, 
                (int)((char*)pointers[j])[i], 
                ((char*)pointers[j])[i]
            );
            if(i%4==0) 
            {
            printf("int_array_pointed[%3d] yields : %d", k, ((int*)pointers[j])[k]);
            k++;
            }
            if(i%8==0) 
            {
            //size_t ransackBuffer = (((size_t*)pointers[j])[k/2]);
            printf("\tadress_pointer[%d] (or size_t_pointer[%d]) yields : %p or %lX", k/2, k/2, (((void**)pointers[j])[k/2]), (((size_t*)pointers[j])[k/2]));
            //printf("\t bytes, if read as a 16-long char array : \"%-15s\"", (char*)(&ransackBuffer));
            }
            
            if((i-1)%64==0) 
            {
            char ransackedChars[80] = {0};
            
            for (int y=0; y<64; y++) 
            {
                sscanf(((char*)pointers[j])+i-1+y, "%1c",&ransackedChars[y]);
                if(ransackedChars[y] == 0) ransackedChars[y] = '_';
            } 
            printf("\t bytes, if read as a 64-long char array : \"%-63s\"", ransackedChars);
            }
            printf("\n");
    }
}

for (int j=0; j<1; j++)
    {continue;
        for (int i=0; i<10; i++) 
            printf("%p_____[%d] : %8.3g_'%c'%-3c\n",&okPlanets[i],i, (double)(int)okPlanets[i], (char)okPlanets[i], ',');
        printf("\n");
        for (int i=0; i<10; i++) 
            printf("%p_____[%d] : %8.3g_'%c'%-3c\n",&leviosa[i],i, (double)(int)leviosa[i], (char)leviosa[i], ',');
        printf("\n");
        for (int i=0; i<10; i++) 
            printf("%p_____[%d] : %8.3g_'%c'%-3c\n",(void*)&gravities[i],i, (double)(int)gravities[i], (char)gravities[i], ',');
        printf("\n");
        for (int i=0; i<10; i++) 
            printf("%p_____[%d] : %8.3g_'%c'%-3c\n",&levsa[i],i, (double)(int)levsa[i], (char)levsa[i], ',');
        printf("\n");
        for (int i=0; i<10; i++) 
            printf("%p_____[%d] : %8.3g_'%c'%-3c\n",(void*)&mavities[i],i, (double)(int)mavities[i], (char)mavities[i], ',');
        printf("\n");
        for (int i=0; i<10; i++) 
            printf("%p_____[%d] : %8.3g_'%c'%-3c\n",&leviosaa[i],i, (double)(int)leviosaa[i], (char)leviosaa[i], ',');
    }
    printf("\n");
}