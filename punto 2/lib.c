/*******************
* Fecha: 11 de Agosto 2022
* Autor: Jonattan Infante
* Topic: Convertir los días especificados en años, semanas y días Nota: Ignore el año bisiesto.
***********/

#include "lib.h"
#include <stdio.h>

void conversor_fechas(){
	/*Convierte los dias en semanas*/
	int input_days, day, weeks, years;

	printf("Ingrese el numero de dias a convertir \n");
	scanf("%d", &input_days);	

	years = input_days/365;
	weeks = (input_days%365)/7;
	day = (input_days%365)%7;

	printf("La conversión es: Años %d - Semanas %d - Dias %d \n", years, weeks, day);
}

void bienvenida(){	
	printf("####################################### \n");
	printf("\n");
	printf(" Convertir los días especificados en años, semanas y días \n");
	printf("\n");
	printf("####################################### \n");
}
