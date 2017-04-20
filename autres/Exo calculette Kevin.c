/* Exo cours calculette C.K 28/09/2015 */

#include <stdio.h>


int calculette (int a, int b, char operateur);

int main ()
{
int a; int b;
char operateur;
char rep;
int ok;
int resultat;

do {

do
{
printf("Veuillez entrer la valeur de a\n");
ok = scanf("%d", &a);
        while( getchar( ) != '\n' );
	 }while ( ! ok);

do
{
    printf("Veuillez entrer la valeur de b non nulle\n");
ok = scanf( "%d", &b);
        while( getchar( ) != '\n' );
	 }while ( ! ok || b == 0);

do
{

printf("Veuillez choisir un opérateur parmis '+', '-', '*', '/' :\n");
ok = scanf( "%c", &operateur);
        while( getchar( ) != '\n' );
	 }while ( ! ok ||  operateur != '+' ||  operateur != '-' || operateur != '*' || operateur != '/' );

printf(" %d  %c   %d = %d\n\n", a, operateur, b, calculette(a, b, operateur));

        printf( "recommencer (o/n) ? " );
        scanf( "%c", &rep );
        while( getchar( ) != '\n' );
}while( tolower(rep) != 'n' );

return 0;
}

int calculette (int a, int b, char operateur)
{
    switch (operateur)
    {

    case '+'  : return (a+b);
                break;
    case '-' :  return (a-b);
                break;
    case '*' :  return (a*b);
                break;
    case '/' :  return (a/b);
                break;
    }
}

