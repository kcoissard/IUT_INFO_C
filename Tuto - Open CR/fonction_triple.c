/**** test fonction out main "triple" ****/

#include <stdio.h>
#include <stdlib.h>

int triple(int nombre)
{


    return 3 * nombre;
}

int main ()
{
    int tot;
    int nombre;

    printf("Entrez le nombre a tripler\n");
    scanf("%d", &nombre);

    tot=triple(nombre);
    printf("\nLe triple de %d est : %d", nombre, tot);

    return 0;

}
