/*******************
* Fecha: 15 de Agosto 2022
* Autor: Jonattan Infante
* Topic: Dos matrices de numeros aleatorios, de tamaño NxN y la suma de las mismas.
***********/

#include "lib.h"
#include <stdio.h>

int main(){
	
	int n;
	
	printf("Ingrese el tamaño en n\n");
	scanf("%d", &n);
	
	/** Init **/
	int matrizA[n*n]; 
	int matrizB[n*n];
	int matrizC[n*n];
	
	if (n <= 8)
	{
		inicialization(matrizA, matrizB,n);		
		printf("Matriz aleatoria A\n");
		impresion(matrizA,n);
		printf("Matriz aleatoria B\n");
		impresion(matrizB,n);
		suma(matrizA,matrizB,matrizC,n);
		printf("Resultado de la suma de A y B\n");
		impresion(matrizC,n);

	}else
	{
		printf("El tamaño de N es superior a 8\n");
	}   
	
	return 0;
}
