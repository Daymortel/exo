#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    // on récupère le premier nombre
    int x = printf("Nombre 1 : ");
    scanf("%i", &x);

    // on récupère le second nombre
    int y = printf("Nombre 2 : ");
    scanf("%i", &y);

    // On affiche le résultat
    printf("Le nombre 1 vaut %i et le nombre 2 vaut %i\n", x, y);
    swap(&x, &y); // on passe l'adresse de x et celle de y
    printf("Le nombre 1 vaut %i et le nombre 2 vaut %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}