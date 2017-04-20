#include <stdio.h>


int main()
{
    int age=0;

    printf("Veuillez entrer votre age :\n");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("Vous etes majeur");
    }

    else
    {
        printf("Vous etes mineur");
    }
    return 0;
}
