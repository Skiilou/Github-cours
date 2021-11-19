#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LONGUEURNOM 20
#define LONGUEURPRENOM 15
#define LONGUEURTEL 11



typedef struct tHero {

    char nom[LONGUEURNOM];
    char prenom[LONGUEURPRENOM];
    int age;
    char telephone[LONGUEURTEL];

}tHero;


//extern void exo_un(tHero* myHero);
//extern void exo_deux(tHero* myHero);
extern void exo_trois(tHero* myHero);

