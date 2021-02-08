#include <stdio.h>

/*
*	Curso: 202110_MSIN4104_01 - SEGURIDAD EN EL HOST
*	Profesora: Sandra Rueda 
*	Tarea 1, Ejercicio B1
*	Alumnos: Diego Sebastián Chacón Acosta y Hernán Laborde
*/

int main(int argc, char * argv[])
{
	int i = 0;
	
	// i= 1 porque se pide solo imprimir los parámetros.
	for(i=1; i<argc; i++)
		printf("%s\n", argv[i]);
	
	return 0;
}
