/* calcul de moyenne 1ere méthode */

#include <stdio.h>
#include <stdlib.h>

double moyenne1(unsigned int n);
double moyenne2(unsigned int n);
double moyenne3(unsigned int n);


int main()
{

    int choix_methode;
    int n;
    int ok;
    char rep;

do{
    do {
    printf("Veuillez entrer la valeur limite : ");
        ok =scanf("%d", &n);
        while (getchar() != '\n');
} while ( !ok || n< 1);

    printf("Veuillez choisir la methode 1, 2 ou 3 : ");
    scanf("%d", choix_methode);

    if (choix_methode==1)
    { printf("La moyenne vaut %", moyenne1());
    }
    else if (choix_methode ==2)
    { printf("La moyenne vaut %lf", moyenne2());
    }
    else if (choix_methode ==3)
    { printf("La moyenne vaut %lf", moyenne3());
    }
    else
    { printf("Veuillez rentrer une valeur comprise entre 1 et 3");
    }

   printf("recommencer (o/n) ? " );
   scanf( "%c", &rep );
   while ( getchar() != '\n' );
  }while ( tolower( rep ) != 'n' );

    return 0;
}

double moyenne1(unsigned int n)
{   double s;
    int i;

    s=1;
    i=2;

    while (i <= n)
        {
            s = s +1;
            n++;
        }
    return ( s / n );

}

double moyenne2(unsigned int n)
{
    double s;
    int i;

    s=1;

    for (i = 2; 1 <= n; i =i +1 ) s = s +i;

    return ( s / n );
}

double moyenne3( unsigned int n )
{
  return( ( 1 + n ) / 2.0 );
}


