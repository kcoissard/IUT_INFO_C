
/*************************************************/
/**   pairimpair.c     auteur : M.RAMBURRUN     **/
/*************************************************/

#include <stdio.h>
typedef char bool;
#define false 0
#define true  1

/***************************************************************/
/**********            procédure pair_impair1             ******/
/***************************************************************/
/*                                                              *
 * en entrée : l'entier positif n                               *
 * en sortie : les réels sp   (somme des nonbres pairs )        *
 *                    et simp ( somme des nombres impairs)      *
 */
void pair_impair1( int n, double *sp, double *simp )


{
    int i;

    *sp = 0;
    for(i = 2; i <= n; i +=  2)
        *sp +=  i;

    *simp = n * (n + 1.0) / 2 - *sp;
}


/***************************************************************/
/**********            procédure pair_impair2            *******/
/***************************************************************/
/*                                                              *
 * en entrée : l'entier positif n                               *
 * en sortie : les réels sp   (somme des nonbres pairs )        *
 *                    et simp ( somme des nombres impairs)      *
 */
void pair_impair2( int n, double *sp, double *simp )
{
    int i = 1;

    *sp = 0;
    *simp = 0;
    while ( i <= n )
    {
        if ( i % 2 == 0 ) *sp   += i;
        else            *simp += i;
        i++;
    }
}


/***************************************************************/
/**********            procédure pair_impair3            *******/
/***************************************************************/
/*                                                              *
 * en entrée : l'entier positif n                               *
 * en sortie : les réels sp   (somme des nonbres pairs )        *
 *                    et simp ( somme des nombres impairs)      *
 */
void pair_impair3( int n, double *sp, double *simp )
{
    int i;
    bool i_est_pair = false;

    *sp = 0;
    *simp = 0;
    for( i = 1; i <= n; i++ )
    {
        if ( i_est_pair ) *sp   += i;
        else            *simp += i;
        i_est_pair = ! i_est_pair;
    }
}


/***************************************************************/
/**********            procédure pairimpair4             *******/
/***************************************************************/
/*                                                              *
 * en entrée : l'entier positif n                               *
 * en sortie : les réels sp   (somme des nonbres pairs )        *
 *                    et simp ( somme des nombres impairs)      *
 */
void pair_impair4( int n, double *sp, double *simp )
{
    *sp = (n / 2) * ((n / 2) + 1.0);
    *simp = n * (n + 1.0) / 2 - *sp;
}


void aff_resul( int numsol, int n, double sp, double simp )
{
    printf( "Solution %d : n = %d ; sp = %.0f ; simp = %.0f\n",numsol,n,sp,simp);
}

/***************************************************************/
/********              fonction  principale          ***********/
/***************************************************************/
int main()
{
    int n,ok;
    double sp,simp;
    do
    {
        printf( "(ntrer un entier >= 0 : " );
        ok = scanf( "%d", &n );
        while( getchar( ) != '\n' );
    }
    while ( !ok || n < 0 );

    pair_impair1( n , &sp, &simp );
    aff_resul( 1 , n , sp , simp );

    pair_impair2( n, &sp , &simp );
    aff_resul( 2 , n, sp , simp );

    pair_impair3( n, &sp, &simp );
    aff_resul( 3 , n , sp , simp );

    pair_impair4( n, &sp, &simp );
    aff_resul( 4 , n , sp , simp );

    return 0;
}

