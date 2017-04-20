
		/****** strncat.c *******/

#include <stdio.h>
#include <ctype.h>
typedef char bool;
#define false 0
#define true  1
/* carac_presents_dans */
bool carac_presents_dans( const char *sch, const char *ch )
{
 bool trouve; /*pour indiquer qu'on a trouvé l'élément qu'on cherche dans ch*/
 const char *psch;  /* pointeur pour parcourir la sous-chaîne sch */
 const char *pch;   /* pointeur pour parcourir la chaîne ch */

 psch = sch;  /* on se positionne en début de sch */
 while ( *psch ) /* on passe en revue les éléments de sch un par un */
 {
  pch = ch;      /* IMPORTANT! On se repositionne en début de ch*/
  trouve = false;
  while( *pch && !trouve )/*on parcoure ch jusqu'à ce qu'on trouve l'élém*/
  {
	if ( *psch == *pch ) trouve = true;
	 else pch++;
  }
  if( !trouve ) return false;
   else psch++;
 }
 return true;
}


/* concatenation de ch1 et de ch2 arbitrée par le nombre n relatif à ch2 */

char *strncat(char *ch1, const char *ch2, int n)
{
  char *p; /* p : ptr de travail car on ne veut pas modifier ch1 */

  for( p = ch1; *p; p++ );  /* corps vide; en sortie p pointe sur '\0' */

  while( n && *ch2 ) /* parcours de ch2 arbitré par n */
  {
    *p++ = *ch2++;
    n--;
  }
  *p = '\0';  /* A NE PAS OUBLIER SURTOUT */

  return(ch1);

}


/* inversion d'une chaîne de caractères */

char *strrev( char *ch ) /* ex. d'appel : strrev(ch1); ou puts( strrev(ch1) ) */
{
   char *deb = ch, *fin = ch;
   char t;              /* variable de travail pour l'échange */

   while( *fin ) fin++;
   fin--; /*on se positionne sur le carac. le plus à droite de ch à l'aide de fin*/

  while( deb < fin )
  {
	 if ( *deb != *fin ) /* on n'effectue l'échange que s'il y a lieu de le faire*/
	 {
	   t = *deb;
	   *deb = *fin;
	   *fin = t;
	 }
    deb++;
    fin--;
  }

  return ch;

}



int main()
{
 char rep,str1[80+1],str2[255+1];
 int n;
 int ok;

 do
  {
   printf("TEST DE carc_presents_dans(sch,ch)\n");
   printf("Entrer la sous-chaine (sch) :\n");
   gets(str1);
   printf("Entrer la chaine (ch) :\n");
   gets(str2);
   if ( carac_presents_dans(str1,str2) )
	printf("Tous les caracteres de \"%s\" sont BIEN presents dans \"%s\"\n",str1,str2);
   else
    printf("il y a au moins un caractere de \"%s\" NON PRESENT dans \"%s\"\n",str1,str2);

   printf("\nTEST DE strncat(ch1,ch2,n)\n");
   printf("Entrer chaine 1 :\n");
   gets(str1);
   printf("Entrer chaine 2 :\n");
   gets(str2);
   do
   {
    printf("Entrer le nb. de carac. de chaine2 a prendre :\n");
    ok=scanf("%d",&n);
    while( getchar( ) != '\n' );
   }while( !ok || n < 0 );
   printf("La concatenation de \"%s\" et de %d car. de \"%s\" donne : ",str1,n,str2);
   puts( strncat(str1,str2,n) );

  /* autre possibilité: */
  /* strncat(str1,str2,n); */
  /* printf("donne \"%s\"\n");  ici str1 est déjà allongée */

   printf("\nTEST DE strrev(ch)\n");
   printf("Entrer la chaine a inverser :\n");
   gets(str1);
   printf("Voici la chaine inversee : \"%s\"\n", strrev(str1) );
   printf("Recommencer (o/n) ? ");
   rep = getchar();
   while( getchar( ) != '\n' );
  }while ( tolower(rep) != 'n' );
  return 0;
}
