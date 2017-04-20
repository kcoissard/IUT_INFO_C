/***** Exo moyenne ensemble apres cours OpenCC 19h 22/09/15 K.coissard *****/

#include <stdio.h>
#include <stdlib.h>



double moyenne1(unsigned n)
{
        double s;
        int i;
        s=1;
        i=2;

    while (i<=n)
    {
        s=s+i;
        i=i+1;
    }
    return (s/n);
}

double moyenne2(unsigned n)
{
    double s;
    int i;
    s=1;
    for (int int i=2; i<=n; i=i+1) s=s+i;

    return (s/n);
}

double moyenne3 (unsigned n)
{
    return ((1+n)/2.0));
}

int main ()
{

    int n;
    int ok;
    char rep;

    do
    {
         do
   {
     printf( "entrer un nombre entier n ( >= 1) borne de l'ens. {1,2,..,n}  : " );
     ok = scanf( "%d", &n );
     while ( getchar() != '\n' );
   }while ( !ok || n < 1 );

    }


}
