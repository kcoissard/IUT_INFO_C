/* CK 03/12 P1 manip chaine de carac */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define NMAX 1000

int main ()
{
    char phrase[NMAX];
    char caractere;
    char repeat;
    int ok;
    int i;
    int occurence;

    do
    {
        printf("Entrez une phrase (pas trop longue)\n");
        gets(phrase);

        do
        {
        printf("\n En :");
        ok = scanf("%d", &chiffre);
        while(getchar() != '\n');
        } while(!ok);


        printf("voulez-vous recommencer  (o/n) ? : \n");
        scanf("%c", &repeat);

    } while(tolower(repeat) != 'n');

    return 0;
}
