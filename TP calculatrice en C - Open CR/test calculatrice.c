/* Test OpenCC Calculatrice */

#include <stdio.h>

int main ()
{
    int resultat=0;
    int valeur1=0;
    int valeur2=0;


    printf("Entrez la valeur du premier nombre\n");
    scanf("%d",&valeur1);
    printf("Entre la valeur du deuxieme nombre\n");
    scanf("%d",&valeur2);

    resultat = 0+ valeur1 + valeur2;
    printf("Le resultat de l'addition de %d et %d vaut %d\n\n",valeur1, valeur2, resultat);

     return 0;


}
