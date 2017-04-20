/* hello.c introduction aux notions de base
 AUTEUR COISSARD Kévin 04/09/2015*/
 #include <stdio.h>
 int main()
{
    int i;
    char c = 1;
    c = c + i;
    printf("i = %3d; c = %c; c = %d",i,c,c);
    printf("taille de i en nb d'octets - %d\n", sizeof(i));
    return 0;
}
