#include <stdio.h>

/*
*	Curso: 202110_MSIN4104_01 - SEGURIDAD EN EL HOST
*	Profesora: Sandra Rueda 
*	Tarea 1, Ejercicio B1
*	Alumnos: Diego Sebasti�n Chac�n Acosta y Hern�n Laborde
*/

int main(int argc, char * argv[])
{
	int i = 0;
	
	// i= 1 porque se pide solo imprimir los par�metros.
	for(i=1; i<argc; i++)
		printf("%s\n", argv[i]);
	
	return 0;
}
