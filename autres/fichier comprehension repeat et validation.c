# include <stdio.h>

int main ()
{
    char repeat;
    int ok;
    int chiffre;

    do
    {
        do
        {
        printf("\n entrer un nombre :");
        ok = scanf("%d", &chiffre);  /* on stock le type de "chiffre" dans ok */
        while(getchar() != '\n');    /* vide buffer, efface tous les caracs diff d'entree \n */
        } while(!ok);                /* tant que ok est different d'un int, on recommence */


        printf("voulez-vous recommencer  (o/n) ? : \n");
        scanf("%c", &repeat);

    } while(tolower(repeat) != 'n');

    return 0;
}

