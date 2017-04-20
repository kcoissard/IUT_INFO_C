int main
{
    char rep;
    int ok;

    do
    {
        do
        {
            printf( "Entrer blabla : " );
            ok = scanf( "%d", & );  /* entrer une valeur */
            while( getchar( ) != '\n' );
        }
        while ( ! ok );

        printf( "recommencer (o/n) ? " );
        scanf( "%c", &rep );
        while( getchar( ) != '\n' );
    }
    while( tolower(rep) != 'n' );

    return 0;
    /* INSTRUCTIONS */
}

