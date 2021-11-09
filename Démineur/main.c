#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

//const int taille_grille_x =9;
//const int taille_grille_y =9;
#define tailleX 9
#define tailleY 9
#define mines 10
int i;
int j;
//int x;
//int y;
//int tableau1[tailleX][tailleY];
//Création de la structure

void initialisation_grille(int tableau1[tailleX][tailleY]);
void saisie_joueur();
void mines_adja(int tableau1[tailleX][tailleY]);


// Permets de faire un vrai random

int rdtsc()
{
    __asm__ __volatile__("rdtsc");
}


int main()

{
    int i, j, x, y;
    struct TabGrille
    {
        int conteneur;
    };
    struct TabGrille tableau1[tailleX][tailleY];

    saisie_joueur();
    initialisation_grille(tableau1);
    //initialisation_mines();
    mines_adja(tableau1);

    //test();
}
// Fonction qui initialise la grille à 0
void initialisation_grille(int tableau1[tailleX][tailleY])
{
    int i,j;
    for (i = 0; i < tailleX; i++)
    {
        for (j = 0; j < tailleY; j++)
        {
            tableau1[i][j] = rand() % 10;
            if (tableau1[i][j] != 9)
            {
                tableau1[i][j] = 0;
                //printf("%d",tableau1[i][j]);
            }
            printf(" %d ", tableau1[i][j]);


        }
        printf("\n");
    }
}

/*
void initialisation_mines()
    {

        for (i=0;i<tailleX;i++)
        {
            for (j=0;j<tailleY;j++)
            {
                tableau1[i][j]=rand()%10;

                printf(" %d ",tableau1[i][j]);
            }
            printf("\n");
        }
    if (tableau1[i][j]!=9)
        {
        tableau1[i][j]=0;
        printf("%d",tableau1[i][j]);
        }
    }
*/
void saisie_joueur()
{
    int x, y;
    printf("Veuillez saisir les coordonees x ");
    while (x>9||x<1)
        {
            scanf("%d", &x);
        }

    printf("Veuillez saisir les coordonees y ");
    while (y>9||y<1)
        {
        scanf("%d", &y);
        }
    printf("%d %d \n", x, y);
}

/*
void test()
{
    if (tableau1[i][j]!=9)
        {
        tableau1[i][j]=0;
        printf("%d",tableau1[i][j]);
        }
*/



void mines_adja(int tableau1[tailleX][tailleY])
{
    printf("blabla");

    int i,j;

    for(i=0;i<tailleX;i++)
        {
            for(j=0;j<tailleY;j++)
            {

                if (tableau1[i][j] != 9)
                    {
                        if (tableau1[i - 1][j - 1] == 9)
                        {
                            tableau1[i][j]++;
                        }

                        if (tableau1[i - 1][j] == 9)
                        {
                            tableau1[i][j]++;
                        }

                        if (tableau1[i][j - 1] == 9)
                        {
                            tableau1[i][j]++;
                        }

                        if (tableau1[i + 1][j] == 9)
                        {
                            tableau1[i][j]++;
                        }

                        if (tableau1[i + 1][j + 1] == 9)
                        {
                            tableau1[i][j]++;
                        }

                        if (tableau1[i][j + 1] == 9)
                        {
                            tableau1[i][j]++;
                        }

                        if (tableau1[i - 1][j + 1] == 9)
                        {
                            tableau1[i][j]++;
                        }

                        if (tableau1[i+1][j - 1] == 9)
                        {
                            tableau1[i][j]++;
                        }
                    }
            }
        }

}
