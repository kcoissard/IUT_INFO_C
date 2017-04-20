# include <stdio.h>
# include <stdlib.h> // necessaire pour srand(n) et rand()
# include <ctype.h> // nécessaire pour tolower


int main()
{
    {


  int  nb_entiers;
  char rep; /* reponse o/n de l'utilisateur      */
  int  ok;  /* pour la validation de saisie      */
    do
	{
	  printf( "Entrer le nombre entier nb_entiers : " );
      ok = scanf( "%d" , &nb_entiers );
	  while( getchar( ) != '\n' );
	}while ( !ok );

    printf( "Recommencer (o/n) ? " );
   scanf( "%c" , &rep );
   while( getchar( ) != '\n' );


 }while (tolower(rep) != 'n'); /* variable rep devient minuscules obligatoirement */
 return 0;
}
