/* Matrice.c Kévin COISSARD 18/11/15 */
# include <stdio.h>
# include <ctype.h>
# define NMAX 4

void lectmat (int v[][NMAX],int n);
void affmat(int v[][NMAX], int n);

int main ()
{
    char repeat;
    int ok;
    int c;
    int n;
    int v[NMAX][NMAX];

    do{
            do
            {
            printf("======== MANIPULATION DE MATRICES =========\n");
            printf("1...Lecture des matrices a et b\n");
            printf("2...Symetrie des matrices a et b\n");
            printf("3...Addition des matrices a et b\n");
            printf("4...Multiplication de la matrice a par b\n");
            printf("5...Multiplication de la matrice b par a\n");
            printf("6...Sortie\n");

                printf("\n entrer un nombre :");
                ok = scanf("%d", &c);
                while(getchar() != '\n');

            } while(!ok || c<1 && c>6);

        do{
                printf("Entrer la dimension des matrices carrees (<=4) :");
                ok = scanf("%d", &n);
                while(getchar() != '\n');
            }while(!ok || n>4);

        if (c=1) /* CAS 1 : Lecture des matrices */
        {
        lectmat (v,n);
        }

        printf("voulez-vous recommencer  (o/n) ? : \n");
        scanf("%c", &repeat);
    } while(tolower(repeat) != 'n');



    return 0;
}


void lectmat (int v[][NMAX],int n)
{ int i, j, ok;
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
        {
    do      {
        printf("Entrez les valeurs i,j v[%d][%d] : \n",i,j);
        ok = scanf("%d", &v[i][j]);
        while(getchar() != '\n');
             } while(!ok);
         }
    }
}

void affmat(int v[][NMAX], int n)
{
   printf()
}
