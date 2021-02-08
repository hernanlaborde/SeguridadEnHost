#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
	Curso: 202110_MSIN4104_01 - SEGURIDAD EN EL HOST
	Profesora: Sandra Rueda 
	Tarea 1, Ejercicio B3
	Alumnos: Diego Sebastián Chacón Acosta y Hernán Laborde.
*/

int main()
{
	char input[100];
	char s[100];
	printf("Ingrese cadenas: \n");
		
	while (true){
		gets(input);
		if(strcmp(input,"\0")== 0){
			break;		
		}
		strcat(s,input);	
	}
	printf("%s\n",s);
	return 0;
}
