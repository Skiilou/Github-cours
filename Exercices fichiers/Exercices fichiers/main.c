// Exercices fichiers.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "exo.h"
int main()
{

   tHero* myHero;
   myHero = malloc(sizeof(tHero));

    int size = sizeof(myHero);
    //Fonction exercice 1
    //exo_un(myHero);
    //exo_deux(myHero);
    exo_trois(myHero);
    return 0;
}

