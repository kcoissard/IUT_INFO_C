#include <stdio.h>

int main()
{
    int choix=0;

    printf("=== Menu ===\n1. Royal Cheese\n2. Mc Deluxe\n3.Mc Bacon\n4. Big Mac\nVotre choix ?\n");
    scanf("%d",&choix);

    switch(choix)
    {
    case 1:
        printf("R C");
        break;
    case 2:
        printf("Mc D");
        break;
    case 3:
        printf("Mc B");
        break;
    case 4:
        printf("Big Mac");
        break;
    default :
        printf("Choisissez un focking sandwich");
        break;
    }



}
