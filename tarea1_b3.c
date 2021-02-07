#include <stdio.h>
#include <string.h>

/*
	Curso: 202110_MSIN4104_01 - SEGURIDAD EN EL HOST
	Profesora: Sandra Rueda 
	Tarea 1, Ejercicio B1
	Alumnos: Diego Sebastián Chacón Acosta y Hernán Laborde.
*/

int main()
{
	char input[100];
	printf("Ingrese cadenas: \n");
	fgets(input,100,stdin);
	puts(input);
	return 0;
}
