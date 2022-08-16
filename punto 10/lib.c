/*******************
* Fecha: 15 de Agosto 2022
* Autor: Jonattan Infante
* Topic: Dos matrices de numeros aleatorios, de tamaño NxN y el producto de las mismas.
***********/

#include "lib.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void impresion(int matriz_x[], int n){	
	for(int i= 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d", matriz_x[i+j*n]);
			printf("\t");
		}
		printf("\n");
	}	
	printf("\n");
}

void inicialization(int matrizA[], int matrizB[], int n){
	srand(time(NULL)); //Generamos número aleatorio en base al tiempo
	for(int i= 0; i < n; i++){
		for(int j = 0; j < n; j++){
			matrizA[i+j*n] = rand() % 10;
			matrizB[i+j*n] = rand() % 10;
		}
	}
}

void producto(int matrizA[], int matrizB[], int matrizC[], int n){
	for(int i= 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int suma = 0;			
			for(int k = 0; k < n; k++){
				suma += matrizA[j+k*n]*matrizB[k+i*n];
			}
			matrizC[j+i*n] = suma;		
		}		
	}
}
