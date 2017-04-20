/* echange.c
 AUTEUR COISSARD Kévin 15/09/2015*/
 #include <stdio.h>

int main()
{
    double a,b;  /* je défini la variable a sur un double */
    double c;

    printf("Entrer une valeur pour a+ : "); /* pour entrer la valeur a */
    scanf("%lg*c",&a); /* permet de chercher l'adresse de la variable */

    printf("Entrer une valeur pour b+ : "); /* pour entrer la valeur b */
    scanf("%lg*c",&b);

    printf("AVANT echange a = %.1f\t\tb = %.1f\n", a , b );
    c = a ; /* on r"alise l'echange avec c "verre vide */
    a = b ;
    b = c ;

    printf("APRES echange a = %.1f\t\tb = %.1f\n", a , b );

    return 0;   /* fin du programme, verification que tout est bon* */
}
