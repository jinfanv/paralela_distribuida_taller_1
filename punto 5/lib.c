/*******************
* Fecha:11 de Agosto 2022
* Autor: Jonattan Infante
* Topic: Patrón como triángulo rectángulo usando un asterisco.
***********/

#include "lib.h"
#include <stdio.h>

void patron_triangulo(){
	int line;

	printf("Ingrese la cantidad de lineas a pintas\n");
	scanf("%d", &line);

	if (line <= 14)
	{	int count = 1; 
		for (int i = 1; i <= line; i++)
		{				
			for (int i = 1; i <= count; i++)
			{
				printf("*");
			}
			count = count + 1;
			printf("\n");
		}		
		
	}else
	{
		printf("Se superó el valor máximo de 14 lineas \n");
	}	
		
}

void bienvenida(){	
	printf("####################################### \n");
	printf("\n");
	printf("Patrón triángulo usando un asterisco. \n");
	printf("\n");
	printf("####################################### \n");
}