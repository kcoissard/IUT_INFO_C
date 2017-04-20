#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main ()
{
    char caractere=32;
    char repeat;
    char continu;
    int ok;
    int ndebut;
    int nfin;
    int i;
    int j;
    do
    {
        printf("\n========    MANIPULATION DE CARACTERES      =======\n\n");
        do
        {
        printf("\n Entrez un numero debut :    ");
        ok = scanf("%d", &ndebut);
        while(getchar() != '\n');
        } while(!ok || ndebut<32 || ndebut>255);
do
        {
        printf("\n Entrez un numero fin :   ");
        ok = scanf("%d", &nfin);
        while(getchar() != '\n');
        } while(!ok || nfin<ndebut || nfin>255);

       do {
            i=ndebut;
        do {
            j=0;
            caractere=caractere+1;
            ndebut=ndebut+1;
            i++;
            j++;
            printf("\n%c\n", caractere);
        }while(j<11 && i<nfin);

        /*for(i=ndebut;i<nfin;i++)
        {   caractere=caractere+i;
            ndebut=ndebut+1;
            printf("\n%c\n", caractere);
        }
*/
            printf("Voulez-vous continuer  (o/n) ? :  \n");
        scanf("%c", &continu);


    } while(tolower(repeat) != 'n' && nfin>ndebut);




        printf("Voulez-vous recommencer  (o/n) ? :  \n");
        scanf("%c", &repeat);

    } while(tolower(repeat) != 'n');

    return 0;
}

