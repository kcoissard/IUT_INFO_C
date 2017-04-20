/***********************************************/
/*  algorithme MOYENNE                                                       */
/*  pour calculer la moyenne de l'ensemble {1,2,..n}               */
/*****  moyenne.c  			    		M.RAMBURRUN *****/

#include <ctype.h> /*  déclarations de fonc. pour la manip. de caractères */

#include <stdio.h> /*  déclarations de fonc.d'E/S,def. de cstes et macros */
/*
# fonction moyenne1 en utilisant un tantque et en algo
def moyenne1( n ) :
#entrée
#  val n : int
#précondition
#  l'entier n > 0
#sortie :
#  la fonction retourne la moyenne de {1,2,..n}
#définitions
#   s : float /* pour cumuler  1+2+...+n */   /*
#   i : int   /* indice de boucle */   /*
#début

  s = 1
  i = 2

  while int(i) <= int(n) :
    s = float(s) + i
    i = i + 1
  #endwhile

  return(  s / n )

#fin
*/

/*  moyenne1 en utilisant un while et en C
 *  entrée : l'entier positif n
 *  précondition : n soit un entier > 0
 *  résultat : la moyenne de l'ensemble {1,2,3,.., n}
*/

double moyenne1( int n )
{
  double s; /* pour cumuler 1+2+...+n */
  int i;    /* indice de boucle */

  s = 1;
  i = 2;

  while ( i <= n )
  {
	s = s + i;
    i = i + 1;
  }

  return ( s / n );

}

/*
# fonction moyenne2 en utilisant un pour et en algo
def moyenne2( n ) :
#entrée :
#  val n : int
#précondition
#  l'entier n > 0
#sortie
#  la fonction retourne retourne la moyenne de {1,2,..n}
#définitions
#   s : float   (pour cumuler 1+2+..+n)
#   i : int     (indice de boucle)
#début

  s = 1

  for i in range(2,n+1,1):
    s = s + int(i)
  #endfor

  return( s / n )

#fin
*/

/*  fonction moyenne2 en utilisant un for et en C
 *  entrée : l'entier positif n
 *  précondition : n soit un entier > 0
 *  résultat : la moyenne de l'ensemble {1,2,3,.., n}
 */
double moyenne2( int n )
{
  double s; /* pour cumuler 1+2+..+n */
  int i;    /* indice de boucle */

  s = 1;

  for( i = 2; i <= n; i = i + 1 )  s = s + i;

  return ( s / n );
}

/*
# fonction moyenne3 en utilisant directement une formule et en algo
def moyenne3( n ) :
#entrée
#  val n : int
#précondition
#   l'entier n > 0
#sortie
#  la fonction retourne la moyenne de {1,2,..n}

#début

  return(  ( 1 + n ) / 2.0  )

#fin
*/

/*  fonction moyenne3 en utilisant directement une formule et en C
 *  entrée : l'entier positif n
 *  précondition : n soit un entier > 0
 *  résultat : la moyenne de l'ensemble {1,2,3,.., n}
 */
double moyenne3( int n )
{
  return( ( 1 + n ) / 2.0 );  /* ou encore return( ( 1 + (double)n  ) / 2 ); */
}

/*
# partie principale
def main() :
#définitions
#    m : int
#    rep : char
#début
 rep = 'o'
 while rep.lower() != 'n' :
   n = -1
   while int(n) <= 0 :
     n = input( "entrer un nombre entier n ( >= 1) borne de l'ens. {1,2,..,n}  : " )
   #endwhile
   moy1 = moyenne1( int(n) )
   moy2 = moyenne2( int(n) )
   moy3 = moyenne3( int(n) )
   print( "methode 1 : la moyenne de {1,..,", n , "} est ", moy1 )
   print( "methode 2 : la moyenne de {1,..,", n , "} est ", moy2 )
   print( "methode 3 : la moyenne de {1,..,", n , "} est ", moy3 )

   rep = input( "recommencer (o/n) ? " )

  #endwhile

#fin


*/

/* fonction principale en C */

int main()
{
  int n;  /* données locales */
  int ok; /* pour la validation de saisie */
  char rep;

  do
  {
   do
   {
     printf( "entrer un nombre entier n ( >= 1) borne de l'ens. {1,2,..,n}  : " );
     ok = scanf( "%d", &n );
     while ( getchar() != '\n' );
   }while ( !ok || n < 1 );

   printf("methode 1 : la moyenne de {1,..,%d} est %7.1f\n",n,moyenne1(n));
   printf("methode 2 : la moyenne de {1,..,%d} est %7.1f\n",n,moyenne2(n));
   printf("methode 3 : la moyenne de {1,..,%d} est %7.1f\n",n,moyenne3(n));

   printf("recommencer (o/n) ? " );
   scanf( "%c", &rep );
   while ( getchar() != '\n' );
  }while ( tolower( rep ) != 'n' );
 return 0;
}
