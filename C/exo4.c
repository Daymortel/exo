#include <stdio.h>
#include <string.h>

int main(void)
{
    // ouvrir le fichier csv
    FILE* file = NULL;
    file = fopen("exo4.csv", "a");

    if(!file)
    {
        return 1;
    }
    // obtenir le modèle et la plaque
    char *modele = "206";
    char *plaque = "CO-VID-19";

    // imprimer dans le fichier
    fprintf(file, "%s, %s\n", modele, plaque);

    // fermer le fichier
    fclose(file);
}