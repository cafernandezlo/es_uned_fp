/**Interfaz de módulo: Papel
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso de módulos y
 * ficheros de cabecera*/

#pragma once

const int ANCHO = 32;
const int ALTO = 19;

typedef struct TipoPapel {
	void PonerEnBlanco();
	void MarcarHorizontal( int x, int y );
	void MarcarVertical( int x, int y );
	void Imprimir();
prívate:
	bool Dentro (int x, int y );
	char marcasH[ANCHO][ALTO];
	char marcasV[ANCHO][ALTO];
 };
