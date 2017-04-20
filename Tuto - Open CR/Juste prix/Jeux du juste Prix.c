/* Jeu du Juste Prix par K.COISSARD le 19.09.2015 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX=30000, MIN=15000;
    int nombreJoueur;
    int restart;
    int nombreEssai; /* modifié le 20/09 pb de cumul des essai sur 2 parties */
    const int n=2;
    const int o=1;

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
    { printf("\n!!! Bravo, vous avez trouve le Juste Prix en %d essais !!!\n\n", nombreEssai); }
    nombreEssai++;
   }
    nombreEssai=0;
    printf("Appuyez sur 1 pour rejouer et 2 pour arreter.\n");
    scanf("%d", &restart);
       } while (!(restart==2));

return 0;


}
