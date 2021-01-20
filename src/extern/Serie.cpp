/**Programa: Serie
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso de módulos y
 * ficheros de cabecera*/

#include "Tabulacion.h"

int main() {

	Iniciar("-- Columnas por defecto --");
	for (int k = 1 ;  k < 20; k++) {
		Imprimir(k);
	}
	Terminar();

	numColumnas = 3;
	anchoColumna = 13;
	IniciarC ("--3 columnas de 13 caracteres--");
	for (int k = 1 ;   k <= 20; k++) {
		Imprimir(k);
	}
	Terminar();

	numColumnas = 6;
	anchoColumna = 5;
	Iniciar("--6 columnas de 5 caracteres--");
	for (int k = 1; k <= 20; k++) {
		Imprimir(k);
	}
	Terminar();

	return 0;
}
