#include <stdio.h>

int main()
{
    int choix=0;

    printf("=== Menu ===\n1. Royal Cheese\n2. Mc Deluxe\n3.Mc Bacon\n4. Big Mac\nVotre choix ?\n");
    scanf("%d",&choix);

    if (choix >=5 && choix == 0)
        printf("Vous devez tapez entre 1 et 4");
    else if (choix == 1)
    {
        printf("Vous avez choisi le Royal Cheese");
    }
    else if (choix == 2)
    {
        printf("Vous avez choisi le Mc Deluxe");
    }
    else if (choix == 3)
    {
        printf("Vous avez choisi le Mc Bacon, gros porc");
    }
    else
    {
        printf("Vous avez choisi le Big Mac");
    }
    return 0;
}
