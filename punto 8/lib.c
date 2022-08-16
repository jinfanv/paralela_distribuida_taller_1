/*******************
* Fecha: 15 de Agosto 2022
* Autor: Jonattan Infante
* Topic: Dos matrices de numeros aleatorios, de tamaño NxN y la suma de las mismas.
***********/

#include "lib.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void impresion(int matriz[], int n){	
	for(int i= 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d", matriz[i+j*n]);
			printf("\t");
		}
		printf("\n");
	}	
	printf("\n");
}

void inicialization(int matriz[], int n){
	srand(time(NULL)); //Generamos número aleatorio en base al tiempo
	for(int i= 0; i < n; i++){
		for(int j = 0; j < n; j++){
			matriz[i+j*n] = rand() % 10;
		}
	}
}

void suma(int matrizA[], int matrizB[], int matrizC[], int n){
	for(int i= 0; i < n; i++){
		for(int j = 0; j < n; j++){
			matrizC[j+i*n] = matrizA[j+i*n] + matrizB[j+i*n] ;		
		}		
	}
}