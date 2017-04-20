/* Jeu du Juste Prix par K.COISSARD le 19.09.2015 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
    const int MAX=30000, MIN=15000;
    int nombreJoueur;
    int nombreEssai=0; /* modifié le 20/09 pb de cumul des essai sur 2 parties */
    char rep; /* reponse o/n de l'utilisateur                           */

do
{
    printf("But du jeu : Trouver le Juste Prix compris entre 15 000 et 30 000.\n\n");

srand(time(NULL));
int justePrix = (rand() % (MAX -MIN + 1)) +MIN;

    while (!(nombreJoueur==justePrix)) /* boucle 2*/

   {

    printf("\nTrouvez le ''JustePrix''\n");
    scanf("%d",&nombreJoueur);

    if (nombreJoueur<15000 || nombreJoueur>30000)
    { printf("Veuillez entrer un nombre compris entre 15 000 et 30 000\n\n"); }

    else if (nombreJoueur<justePrix && nombreJoueur<=30000)
    { printf("C'est plus !\n");   }

    else if (nombreJoueur>justePrix && nombreJoueur>=15000)
    { printf("C'est moins !\n");   }
    else
    { printf("\n!!! Bravo, vous avez trouve le Juste Prix en %dessais !!!\n\n", nombreEssai); }
    nombreEssai++;
   }
    nombreEssai=0;
    printf("Voulez vous rejouer ? (o/n).\n");
    scanf("%c", &rep);
    while( getchar( ) != '\n' ); /* Condition de boucle avec le "n" */
} while (tolower (rep) != 'n'); /* permet d'utiliser des MAJ */

return 0;


}
