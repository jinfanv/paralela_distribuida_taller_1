/*******************
* Fecha: 11 de Agosto 2022
* Autor: Jonattan Infante
* Topic: Calcular la distancia entre los dos puntos.
***********/

#include "lib.h"
#include <stdio.h>
#include <math.h>

void distancia_entre_dos_puntos(){
	/*Calculo de distancia*/
	int x1, x2, y1, y2;
	double distancia;

	printf("Ingrese la posición de x1: \n");
	scanf("%d", &x1);

	printf("Ingrese la posición de y1: \n");
	scanf("%d", &y1);

	printf("Ingrese la posición de x2: \n");
	scanf("%d", &x2);	

	printf("Ingrese la posición de y2: \n");
	scanf("%d", &y2);

	distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));	

	printf("La distancia del punto (%d-%d) y (%d-%d) es %f \n", x1,y1,x2,y2,distancia);
}

void bienvenida(){	
	printf("####################################### \n");
	printf("\n");
	printf(" Calcular la distancia entre los dos puntos. \n");
	printf("\n");
	printf("####################################### \n");
}

