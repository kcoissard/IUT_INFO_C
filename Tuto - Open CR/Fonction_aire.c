/* 26/09/15 Coissard Kévin */

/*** Test des différentes façon d'introduire une fonction ***/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

double aire (double longueur, double largeur)
{
    return longueur * largeur;
}

int main ()
{

    char rep; int ok;
    double largeur=0; double longueur =0;
do {
    do {

    printf("\nVeuillez entrer la largeur :");
    scanf("%lf",&largeur);
    printf("\nVeuillez entrer la longueur :");
    ok = scanf( "%d", &longueur);
        while( getchar( ) != '\n' );
	 }while ( ! ok);

    printf("\nL'aire du rectangle ayant %lf cm de largeur et %lf cm de longueur vaut :", largeur, longueur);
    printf("%lf cm", aire(longueur, largeur));

    printf( "recommencer (o/n) ? " );
    scanf( "%c", &rep );
    while( getchar( ) != '\n' );
}while( rep != 'n' );

    return 0;
}
