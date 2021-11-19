#include "exo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NBMAX 81
#define LONGUEURNOM 20
#define LONGUEURPRENOM 15
#define LONGUEURTEL 11

//Ici sont disposés les fonctions de chaque exercices
/*
void exo_un(tHero*myHero) 
{
	//Initialisation du compteur à 1
	int n_cpt = 1;
	//Nombre de caractère max 80 , par rapport à la constante définie au dessus
	char phrase[NBMAX];
	FILE* pFile;
	//Ouverture du fichier.txt
	pFile=fopen("exo.txt","r");
	//Boucle tant que qui incrémente le compteur pour chaque phrase de 80 caractères max
	while (fgets(phrase,NBMAX,pFile)) 
	{
		printf("%d", n_cpt++);
		printf("%s", phrase);
	}
	fclose(pFile);


};
*/

/*
void exo_deux(tHero* myHero) {

	FILE* pFile;
	
	//myHero = malloc(sizeof(tHero));
	pFile = fopen("contact.txt", "w");
	
	//char tempo[255];

			//Saisi du nom
			printf("Saisissez un nom : ");
			gets(myHero->nom);
			//Saisi du prénom
			printf("Saisissez un prenom : ");
			gets(myHero->prenom);
			//Saisi de l'âge
			printf("Saisissez l'age : ");
			scanf("%d", &myHero->age);
			fflush(stdin);
			//Saisi du numéro de téléphone
			printf("Saissez le numero de telephone : ");
			scanf("%s",myHero->telephone);
			//Affichage dans le txt
			fprintf(pFile, "Le nom saisi est : %s\nLe prenom saisi est : %s\nL'age saisi est : %d\nLe numero de telephone saisi est : %s\n", myHero->nom, myHero->prenom, myHero->age, myHero->telephone);
			
		
	fclose(pFile);
	
}
*/


void exo_trois(tHero* myHero) {

	FILE* pFile;
	char nomCherche[LONGUEURNOM];
	int verif;
	pFile = fopen("contact.txt", "r");

	printf("Saisissez le nom a trouver : ");
	gets(nomCherche);
	verif = 0;
	

	//if ((!verif) && (!feof(pFile)))
	do
	{
		fread(myHero, sizeof(tHero), 1, pFile);
		//strcmp compare deux string
		if (strcmp(nomCherche, myHero->nom) == 0)
		verif=1;

	} while ((!verif) && (!feof(pFile)));
	

	if (verif)
	{
		printf("Le prenom de cet utilisateur est : %s\n", myHero->prenom);
		printf("L age de cet utilisateur est : %d\n", myHero->age);
		printf("Le telephone de cet utilisateur est : %s\n", myHero->telephone);
	}
	else {
		printf("Cet utilisateur n'a pas cree de contact");
	}

	fclose(pFile);
}