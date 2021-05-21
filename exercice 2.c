
#include <stdio.h>
#include <stdlib.h>

//Constantes




int main()
{
int n=543;
int p=5;
float x = 34.5678;
printf("A:%d %f\n",n,x);
printf("B:%4d %10f\n", n,x);
printf("C:%2d %3f\n",n,x);
printf("D:%10.3f %10.3e\n",x,x);
printf("E:%*d\n",p,n);
printf("F:%*.*f\n",12,5,x);

scanf("%4d %2d",&n ,&p);
}
//%4d veut dire qu'il y aura que 4 chiffres , %2d veut dire qu'il y aura que 2 chiffres
// A B C  sont égals à 543 et 34.56   --E est égal à 543--  D et F sont égals à 34,56
