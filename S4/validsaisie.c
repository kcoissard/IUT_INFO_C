/* validsaisie.c */
#include <stdio.h>
#include <ctype.h>

int main()
{
	double x;  /* pour la lecture du nombre r�el */
	int ok;      /* pour la validation de saisie de x */
    char rep;  /* pour pouvoir recommen�er */

 	do
	{
	 do
	 {
		printf( "Entrer un nombre  : " );
        ok = scanf( "%lg", &x );
	    while( getchar( ) != '\n' );/* vidage du buffer d'ent. stdin associ� au clavier */
	 }while ( ! ok );
	 printf( "Le nombre lu vaut %lg\n",x );
	 printf( "Recommencer ( o/n ) : " );
     scanf( "%c", &rep );
	 while( getchar( ) != '\n' );/* vidage du buffer d'ent. stdin associ� au clavier */
   }while ( tolower(rep) != 'n' );

	return 0;
}
