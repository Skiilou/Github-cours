#include <stdio.h>
#include <stdlib.h>

//Constantes




int main()
{
    int nb_notes=0;
    float total_notes=0;
    float note=0;

    while(note>=0)
    {
        printf("Veuillez saisir une note: \n");
        scanf("%f",&note);
        total_notes=total_notes+note;
        nb_notes=nb_notes+1;
    }
    if(nb_notes!=0)
    {

        total_notes=total_notes+note;
        total_notes=(total_notes/nb_notes);
    }
    else
        printf("La note n'est pas valide!! \n");

}
