#include <stdio.h>

int main()
{
    int i, tab[3];

    // Stocker le nombre saisi par l'utilisateur
    for(i = 0; i < 3; ++i)
    {
       printf("Nombre %d : ", i+1);
       scanf("%d", &tab[i]);
    }
    // Boucle pour stocker le max dans tab[0]
    for(i = 1; i < 3; ++i)
    {
       if(tab[0] < tab[i])
       {
           tab[0] = tab[i];
       }
    }
    printf("Le plus grand nombre est %d\n", tab[0]);
    return 0;
}