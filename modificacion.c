/******************************************************************************

Autor: Iván Rojas Calvo
Moder: Sergio Rojas Calvo
Curso: Aplicaciones Microcontroladores
Actividad: Creación y modificación de repositorio con Git Bash y Github

*******************************************************************************/
#include <stdio.h>
#include <math.h>


int main()
{
    int n, opcion;
	printf("Hola mundo");
	
    do
    {
        printf( "\n\n   1. Seguir en el codigo", 163 );
        printf( "\n   2. Salir del codigo", 163 );
        printf( "\n\n   Introduzca opci%cn (1-2): ", 162 );

        scanf( "%d", &opcion );
        
        switch ( opcion )
        {
            case 1: printf( "\n Hola Mundo");
                    break;
         }

    } 
    
	while ( opcion != 2 );
    return 0;
}
