#include <stdio.h>
#include <string.h> /* memset */

#define TCH 255
/*void remplirTab1D(int *tab, int taille) ;*/

int longueur(const char *) ; /* caractère '\0' fixe la fin de la chaine */

void compteCarac(const char* texte, int tab1DRes[2*26]) ;

int main(void)
{
    char chvide[TCH+1] = "" ;
    char ch[TCH+1] = {'s', 'a', 'l', 'u', 't', '\0' };
    char ch2[TCH+1] = "salut";
    char carac ;

    const char * chpt = "salut"; /* chaîne constante à éviter*/

    int compteurs[2*26] ;
    int i ;

    printf("long ch = %d; long ch2 = %d; long chvide = %d\n", longueur(ch), longueur(ch2), longueur(chvide)) ;

    compteCarac("blablaBLA", compteurs) ;

    /*for(carac='a'; carac<='z'; carac++)
        printf("%4c", carac) ;*/
    for(carac='A'; carac<='Z'; carac++)
        printf("%4c", carac) ;
    printf("\n") ;

    for(i=1*26; i<2*26; i++)
        printf("%4d", compteurs[i]) ;
    printf("\n") ;

    return 0 ;
}

void compteCarac(const char* texte, int tab1DRes[2*26])
{
    int i=0;
    memset (tab1DRes, 0, sizeof(int) * 2*26 );

    /*
    for( ; i<2*26; ++i) tab1DRes[i]=0 ;
    */

    while( texte[i] != '\0' )
    {
        if( 'a' <= texte[i] && texte[i] <= 'z' )
        { /* cas lettre minuscule */
            tab1DRes[ texte[i] - 'a' ]++ ;
        }
        else if( 'A' <= texte[i] && texte[i] <= 'Z' )
        { /* cas lettre majuscule */
            tab1DRes[ 26 + texte[i] - 'A' ]++ ;
        }

        i++ ;
    }
}

int longueur(const char * chaine)
{
    int cpt = 0 ;
    while( chaine[cpt] != '\0' ) cpt++ ;

    return cpt ;
}
