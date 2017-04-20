/* choisir une citation au hasard dans un fichier texte */
/* COISSARD Kévin 10/12/2015 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

#define TAILLEMAX 200
#define BSUP

int main()
{
    FILE *f;
    char repeat;
    char phrase [TAILLEMAX];
    int random = 0;

        srand(time(NULL);

    do {
            random = rand () % BSUP+1;
            printf("La citation du jour : \n");
            f = open("citations.txt","r");


       /* if (!f)
        {
            printf("Citation inexistante");
        }
        else
        {
            printf("");
        }
        */







        printf("voulez-vous recommencer  (o/n) ? : \n");
        scanf("%c", &repeat);

    } while(tolower(repeat) != 'n');

return 0;
}
