#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE 10


int main()
{
    int tab[TAILLE];
    int i,x=1;
    int haut=0;
    int bas=1000000000;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&tab[i]);
        printf("votre nombre est %d\n",tab[i]);
    }
    do
    {
        if((tab[x] >= tab[x+1])&& (tab[x] >= haut))
        {
            haut=tab[x];
            x++;
        }else if((tab[x] <= tab[x+1])&&(tab[x]<= bas))
        {
            bas=tab[x];
            x++;
        }else
        {
            x++;
        }
    }while(x<=10);
    printf("le nombre le plus petit est %d et le nombre le plus grand est %d",bas,haut);


}
