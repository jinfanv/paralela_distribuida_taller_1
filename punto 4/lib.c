/*******************
* Fecha:11 de Agosto 2022
* Autor: Jonattan Infante
* Topic: Mostrar los 10 primeros números naturales
***********/

#include "lib.h"
#include <stdio.h>

void numeros_naturales(){
	printf("Primeros numeros naturales \n");
	for (int i = 1; i < 11; i++)
	{
		printf("%d \n",i);
	}	
}

void bienvenida(){	
	printf("####################################### \n");
	printf("\n");
	printf("Mostrar los 10 primeros números naturales \n");
	printf("\n");
	printf("####################################### \n");
}