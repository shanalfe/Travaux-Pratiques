 #include <stdio.h>
 #include <stdlib.h>
#include <grp.h>




int main(int argc, char const *argv[]){
	 {
    struct group* g;
    char** p;

    if( ( g = getgrnam( argv[1] ) ) == NULL ) {

       fprintf( stderr, "getgrnam: %s failed\n",
            argv[1] );

       return( EXIT_FAILURE ); /*retour de l'erreur*/
    }

    printf( "group name : %s\n", g->gr_name );

    for( p = g->gr_mem; *p != NULL; p++ ) {
       printf( "\t%s\n", *p );
    }

	}

	return EXIT_SUCCESS;
}
