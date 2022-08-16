#*************
# Fecha: 9-Agosto-2022
# Autor: Jonattan Infante
# Materia: Paralela y Distribuida
# Topico: Script Automatizacion
#**************

GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=c11 -D_POSIX_C_SOURCE=199309L
MATHFLAGS = -lm

PROGRS = main

all: $(PROGRS)

main:
	$(GCC) $(FLAGS) -c $@.c
	$(GCC) $(FLAGS) -c lib.c
	$(GCC) $(FLAGS) -o $@ $@.o lib.o $(MATHFLAGS)
	
clean:
	$(RM) *.o $(PROGRS)
