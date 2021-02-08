#include <stdio.h>
#include <stdlib.h>

/*
*	Curso: 202110_MSIN4104_01 - SEGURIDAD EN EL HOST
*	Profesora: Sandra Rueda 
*	Tarea 1, Ejercicio B2
*	Alumnos: Diego Sebastián Chacón Acosta y Hernán Laborde
*/

int main(int argc, char * argv[])
{
	int i = 1;
	
	while( argv[i] != NULL)  {
		printf("%s\n", argv[i]);
		i++;
	}
	
	return 0;
}
