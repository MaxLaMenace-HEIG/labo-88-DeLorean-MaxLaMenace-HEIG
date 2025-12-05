#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

;

    /**
 * @brief Calcule la hauteur de chute d'un objet sur trois planettes après vérification de l'entrée d'utilisateur
 * @return 0 si pas d'erreur,
 * @return 1 si erreur d'entrée : terre = t ou T, lune = l ou L, mars = m ou M, 
 * @return 2 si distance invalide
 * */
int main2(void) {
    if (0) heheArray();
    double g = 0, fallHeight = 0;
    printf("Merci de choisir la planète : ");
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