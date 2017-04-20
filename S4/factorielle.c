/* factorielle.c  										auteur : M.RAMBURRUN */
#include <stdio.h>
#include <ctype.h>

double factorielle_i( int n )
{int i;    /* indice de boucle */
 double f; /* pour calculer la factorielle */

 f = 1;
 for( i = 2; i <= n; i++ ) f = f * i;
 return( f );
}

double factorielle_r( int n )
{
   if ( n < 2 ) return 1;
   else return ( n * factorielle_r( n - 1) );
}

int main()
{
  int  n;   /* le nombre pour lequel on veut calculer la factorielle  */
  char rep; /* reponse o/n de l'utilisateur                           */
  int  ok;  /* pour la validation de saisie                           */

 do
 {
    do
	{
	  printf( "Entrer un nombre entier positif ou nul : " );
      ok = scanf( "%d" , &n );
	  while( getchar( ) != '\n' );
	}while ( !ok || n < 0);

   if (n > 134 ) n = 134; /* plafonnement a 134 */
   printf(" factorielle_i( %d ) = %.0f par une methode iterative\n", n, factorielle_i(n));
   printf(" factorielle_r( %d ) = %.0f par une methode recursive\n", n, factorielle_r(n));

   printf( "Recommencer (o/n) ? " );
   scanf( "%c" , &rep );
   while( getchar( ) != '\n' );

 }while (tolower(rep) != 'n');
 return 0;
}
