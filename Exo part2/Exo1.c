#include <stdio.h>
#include <stdlib.h>

int vale;

void f1()
{
    printf("bonjour\n");
    return;
}


void f2()
{
    int i;
    for(i = 0; i<vale;i++){
       f1();
    }
    return;
}

void f3()
{
    int i;
    for(i = 0; i<vale;i++){
       f1();
    }
    return(0);
}

int main1()
{

    f1();
    scanf("%d",&vale);
    f2();
    f3();
}
