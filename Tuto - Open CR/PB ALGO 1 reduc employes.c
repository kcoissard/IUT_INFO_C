#include <stdio.h>

int main()
{
    int serviceVente;
    int poste;

while (serviceVente>=3)
   {
        printf("Si vous etes du service vente tapez 1, sinon, tapez 0.\n\n");
    scanf("%d",&serviceVente); }


for(poste=5 ; poste>=5 ; poste++)
   { printf("\n\nSi vous etes cadre tapez 2,\nsi vous etes chef de rayon tapez 3,\nsi vous etes employe tapez 4.\n\n");
    scanf("%d", &poste); }



    if (serviceVente == 1 && poste == 3)
        { printf("\n\nVous avez 5 Pourcents de reduction"); }
    else if (serviceVente==1 && poste==4)
        { printf("\n\nVous avez 10 Pourcents de reduction"); }
    else if (serviceVente==0 && poste==4)
         { printf("\n\nVous avez 3 Pourcents de reduction"); }
    else if (poste == 2)
    { printf("\n\nVous n'avez pas de reduction");    }
    else
        { printf("\n\nVous n'avez pas rentre les bonnes donnees"); }

    return 0;
}
