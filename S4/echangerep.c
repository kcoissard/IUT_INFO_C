/* echange.c pour �changer les contenus des zones m�moire a et b
  AUTEUR : M.RAMBURRUN  le 17/09/2014 */

  #include <stdio.h>

  int main()
  {
      double a,b;
      double c; /* variable de travail */
      char rep; /* pour la r�ponse o/n de l'utilisateur */

      do
      {
        printf("Entrer une valeur pour le nombre a : ");
        scanf("%lg%*c",&a);

        printf("Entrer une valeur pour le nombre b : ");
        scanf("%lg%*c",&b);

        printf("AVANT echange a = %.1f\t\tb = %.1f\n", a , b );
        c = a;
        a = b;
        b = c;
        printf("APRES echange a = %.1f\t\tb = %.1f\n", a , b );

        printf("Voulez-vous recommencer (o/n) ? ");
        scanf("%c%*c",&rep);
      }while( rep != 'n' && rep != 'N' );
      return 0;
  }
