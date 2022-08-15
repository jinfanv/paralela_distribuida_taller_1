/*******************
* Fecha: 15 de Agosto 2022
* Autor: Jonattan Infante
* Topic: Matriz de “1”, de tamaño NxN.
***********/

#include "lib.h"
#include <stdio.h>

int main(){
	
	int n;
	
	printf("Ingrese el tamaño en n\n");
	scanf("%d", &n);
	
	/** Init **/
	int matriz[n*n];
	
	if (n <= 8)
	{
		inicialization(matriz,n);
		impresion(matriz,n);
	}else
	{
		printf("El tamaño de N es superior a 8\n");
	}   
	
	return 0;
}
