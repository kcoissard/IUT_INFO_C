# include <stdio.h>
# include <stdlib.h> // necessaire pour srand(n) et rand()
# include <ctype.h> // n�cessaire pour tolower
# include <time.h> // n�cessaire pour time (NULL)

int main ()
{
 int ok;
 int nb_valtab;
    do {
        print("Introduire le nombre de valeurs du tableau (0 � %d) : ");
        ok scanf ("%d", &nb_valtab);
        while( getchar( ) != '\n');
    } while ( ! ok || n < 0 );
}
