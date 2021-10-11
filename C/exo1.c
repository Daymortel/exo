#include <stdio.h>
#include <math.h>

int main(void)
{
    // on récupère le premier nombre
    int a = printf("Nombre 1 : ");
    scanf("%i", &a);

    // on récupère le second nombre
    int b = printf("Nombre 2 : ");
    scanf("%i", &b);

    // on calcule et on affiche le résultat
    int c = a * b;
    printf("Le produit est %i\n", c);
}