/**
 * @brief Calcule la hauteur de chute d'un objet sur trois planettes après vérification de l'entrée d'utilisateur
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

double checkPlanet() 
{   
    char planet;
    scanf(" %c", &planet);
    while (getchar() != '\n') ;
    if ((planet=='t')||(planet=='T')) 
        return 9.81;
    else if ((planet=='l')||(planet=='L')) 
        return 1.62;
    else if ((planet=='m')||(planet=='M')) 
        return 3.73;
    else 
        return -1;
}

void scanPlanet(double* g) 
{   
    char planet[2];
    if (scanf(" %1[tTlLmM] %1[\n]", &planet[0], &planet[1]) != 2) *g=-1;
    else switch (tolower(planet[0]))
    {
        case 't': *g=9.81; break;
        case 'l': *g=1.62; break;
        case 'm': *g=3.73; break;
        default :
            if(VERBOSE) printf("how did you even-\n");
            *g=log10(0);
    }
}


double matchPlanet() 
{
const char okPlanets[6] = {'t', 'T', 'l', 'L', 'm', 'M'};
const double g[3] = {9.81, 1.62, 3.73};
char c;
if (scanf(" %c%*[^\n]", &c))
    for (int i=0; i<6; i++)
        if (c == okPlanets[i]) 
            return g[i/2];
return -1;
}

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


void printfGuideThrough() 
{   
    char planet[3] = "000";
    char planet_b[3] = "000";
    // the below one works with : %s -> planet, as long as planet[1] is checked for the automatically added 'end of string' \0 char. if string longer than 1, then planet [1] will be whatever the second character was
    //oooooooooooooooooh it skips spaces, so I can overfill it by... filling it with blank spaces, it then overflows on the second scanf... does weird things if :p printed.
    scanf("%s", planet);
    // the below one crashes by trying to write a '1 sized string' (with a second \0 char) to planet[0] which is a char
    //scanf("%1s", planet[0]);
    printf("\n0['%c'_%d]_1['%c'_%d]_2['%c'_%d]\n", planet[0],(int)planet[0],planet[1],(int)planet[1],planet[2],(int)planet[2]);
    printf("Merci de choisir la planete une deuxième fois avec la même séquence de caractères svp lol: ");
    // the below one works with three %c getting max 3 chars of your input to planet[0 to 2], BUT takes a carriage return left in the buffer.
    scanf("%c%c%c", &planet_b[0], &planet_b[1], &planet_b[2]);
    printf("\n0['%c'_%d]_1['%c'_%d]_2['%c'_%d]\n", planet_b[0],(int)planet_b[0],planet_b[1],(int)planet_b[1],planet_b[2],(int)planet_b[2]);
}


char getPlanet1() 
{   
    char planet[3] = "000";
    scanf("%2c", planet); //marche normalement si un seul caractère entré puis enter. Casse si deux caractères entrés.
   
    while (getchar() != '\n');  //sinon ça casse tout lol

    return 'x';
}
char getPlanet2()
{
    printf("Merci de choisir la planete : ");
    char planet[3] = "000";
    //double fallHeight = -1;
    scanf("%1s", planet);

    char c;
    while ((c = (char)getchar()), c != '\n') {printf("%c", c);}

    printf("\n0['%c'_%d]_1['%c'_%d]_2['%c'_%d]\n", planet[0],(int)planet[0],planet[1],(int)planet[1],planet[2],(int)planet[2]);
    return 'x';
}
char hesitantlyCheckPlanet() 
{   
    char planet;
    char buffer[50];
    for (int i=0; i>50; i++) 
    {
        buffer[i] = '0';
    }
    scanf("%c%s", &planet, &buffer[0]); //please don't write more than 50 characters :'c
    if (planet == 't') 
    {
        return 't';
    } 
    else if (planet == 'T') 
    {
        return 't';
    } 
    else if (planet == 'l') 
    {
        return 'l';
    } 
    else if (planet == 'L') 
    {
        return 'l';
    } 
    else if (planet == 'm') 
    {
        return 'm';
    } 
    else if (planet == 'M') 
    {
        return 'm';
    } 
    else 
    {
        return 'X';
    }
}
char wontGetPlanet()
{   
    //echoue parce qu'il ATTEND d'avoir 3 caracteres... donc un seul + enter ne passe pas à la suite, il attend le troisième
    char planet[3] = "000";
    int charCount = scanf("%c%c%c", &planet[0], &planet[1], &planet[2]);
    printf("\n%d\n",charCount);
    //lui... marche et j'aime pas qu'il marche, parce que lol, compter sur le fait que tu peux pas soumettre le scanf sans appuyer sur retour à la ligne derrière... bah je l'ai fait.
    // MAIS filtrer le "un seul retour à la ligne immédiatement après" tout en laissant la comparaison du premier caractère à la suite...
    // why ???
    charCount = scanf("%c%1[\n]", &planet[0], &planet[1]);
    printf("\n%d\n",charCount);
    printf("\n0['%c'_%d]_1['%c'_%d]_2['%c'_%d]\n", planet[0],(int)planet[0],planet[1],(int)planet[1],planet[2],(int)planet[2]);
    if (charCount >=3) {printf("\ninvalid entry\n"); return 1;}

    return 'x';
}
char salut()
{
    int i;
    char str[20];
    printf("i: ");
    scanf("%d", &i);
    printf("Entrer un mot: ");
    scanf("%19s", str);
    printf("Votre mot: %s\n", str);

    while (getchar() != '\n');

    return 'x';
}
