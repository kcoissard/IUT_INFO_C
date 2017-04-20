/* base.c */

#include <stdio.h>
#include <math.h>
/* d�claration de la fonction calcul qui admet un argument de type double*/
 double calcul(double x);

int main()
{
    double x;

    printf("Entrer une valeur pour le reel x : ");
    scanf("%lg%*c", &x);   /*   &x signifie adresse de x */

    printf("calcul( %.1f ) = %.1f\n", x, calcul(x)); /* utilisation de la fonction calcul(x)*/
    return 0;
}

/* d�finition de la fonction calcul
   en entr�e : x de type double
   r�sultat  : double
*/
double calcul( double x )
{
  return x * x * x + pow (x,1.0/3) + sqrt(x) + 50.0;
}
