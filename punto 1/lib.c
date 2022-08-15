/*******************
* Fecha: 11 de Agosto 2022
* Autor: Jonattan Infante
* Topic: Programa en C que acepte dos enteros del usuario y calcule el producto de los
dos enteros.
***********/

#include "lib.h"
#include <stdio.h>
/* Se implementan las funciones*/

void multiplicacion(){
	/*Multiplicación*/
	int a, b, result;
	printf("Ingrese el entero 1 \n");
	scanf("%d", &a);
	
	printf("Ingrese el entero 2 \n");
	scanf("%d", &b);

	result = a*b;

	printf("El valor del producto es %d \n", result);
}

void bienvenida(){	
	printf("####################################### \n");
	printf("\n");
	printf("calcule el producto de los dos enteros \n");
	printf("\n");
	printf("####################################### \n");
}

