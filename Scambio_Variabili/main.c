#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Esercizio 4
    Federico Slongo
    Classe 3-ID
    */

    int var1, var2, temp;

    printf("Inserire la variabile 1: ");
    scanf("%d", &var1);
    printf("Inserire l'variabile 2: ");
    scanf("%d", &var2);
    temp = var1;
    var1 = var2;
    var2 = temp;

    printf("La variabile 1 e' %d, la variabile 2 e' %d", var1,var2);

    return 0;
}
