#include <stdio.h>
#include <stdlib.h>

struct maillon
{
    int valeur;
    struct maillon *suivant;
};

void afficheListe(struct maillon *tete);
struct maillon* supprimerELement(struct maillon *liste);

int main()
{
    int ok;
    char saisie;
    struct maillon *tete,*precedent,*nouveau; //pointeurs

    do
    {
        printf("Entrez une valeur :\n");
        ok=scanf("%c",&saisie);
        while(getchar()!='\n');
    }while(!ok);

    if(saisie!='#')
    {
        tete=malloc(sizeof(tete)); //tete pointe maintenant sur un maillon fraichement créé
        precedent=tete;
        tete->valeur=saisie; // tete .---> maillon 1 :|valeur = saisie
        tete->suivant=NULL;  //                       |suivant= NULL
        do
        {
            printf("Entrez une valeur :\n");
            ok=scanf("%c",&saisie);
            while(getchar()!='\n');
        }while(!ok);
        while(saisie!='#')
        {
            nouveau=malloc(sizeof(nouveau)); // nouveau contient l'adresse du nouveau maillon
            nouveau->valeur=saisie;      // nouveau .---> nouveau maillon :|valeur =saisie
            nouveau->suivant=NULL;       //                                |suivant=NULL
            precedent->suivant=nouveau;
            precedent=precedent->suivant;
            do
            {
                printf("Entrez une valeur :\n");
                ok=scanf("%c",&saisie);
                while(getchar()!='\n');
            }while(!ok);
        }
    }
    else
    {
        tete=NULL; //ça sert à rien vaut mieux initialiser les pointeurs sur NULL au début pour être tranquille ensuite.
    }
    afficheListe(tete);
    while(tete!=NULL)
    {
        tete=supprimerELement(tete);
    }
    return(0);
}

void afficheListe(struct maillon *tete)
{
    printf("\nAffichage le la liste: \n");
    struct maillon *temp=tete;
    while(temp != NULL)
    {
        printf("%c\n",temp->valeur);
        temp=temp->suivant;
    }
}

struct maillon* supprimerELement(struct maillon *liste)
{
    if(liste == NULL)
        return NULL;
    if(liste->suivant == NULL)
    {
        free(liste);
        return NULL;
    }
    struct maillon* tmp = liste;
    struct maillon* ptmp = liste;
    while(tmp->suivant != NULL)
    {
        ptmp = tmp;
        tmp = tmp->suivant;
    }
    ptmp->suivant = NULL;
    free(tmp);
    return(liste);
}
