/* Organigramme TD langage C 21/09/2015 */

#include <stdio.h>



int main()
{
int p, d, s;
int a ;
int b ;
char rep;
    do{


    do
    {

        /* action 1 */
        printf("Calcul du PGCD :\n");
    printf("Entrer l'entier a>0 : ");
    scanf("%f", &a);

    printf("\nEntrer l'entier b>0 : ");
    scanf("%f", &b);
    } while (a<0 || b <0);

 /* action 2 */
    if (a>=b)
        { d=a;
        p=b;}
    else
        {d=b;
        p=a;}


    /* Action 3 */
    s=d-p;

    /* Action 4 */
 while(s>0) {


    /* action 5 */
    if (s>=p)
            {d=s;}
        else
    {   d=p;
        p=s;}
         s=d-p;   }

    printf("\nP vaut %d", p);

    printf("Voulez vous recommencer ? (o/n)");
    scanf("%c", &rep);
    while (getchar( ) != '\n' );
    } while (tolower(rep) != 'n');

 return 0;


}
