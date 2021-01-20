/************************************************
* Módulo: Tabulacion
* Este módulo contiene los elementos para imprimir series de
* números en varias columnas
* Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
* Descripción: El objetivo buscado es introducir al alumno en el uso de módulos y
* ficheros de cabecera
*************************************************/

#include <stdio.h>
#include <string.h>
#include "Tabulacion.h"

int numColumnas=4;
int anchoColumna=10;

static int columna=1;

void Iniciar(char titulo[]){
	Terminar();
	printf("%s\n", titulo );
	columna = 1;
}

void Imprimir( int numero ) {
	if (columna> numColumnas) {
		printf( "\n" );
		columna= 1;
	}
	printf( "%*d", anchoColumna, numero);
	columna++;
}

void Terminar()) {
	if (columna > 1){
		printf("\n");
	}
	columna=1;
}
