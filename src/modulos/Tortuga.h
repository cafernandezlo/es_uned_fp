/**Interfaz de módulo: Tortuga
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso de módulos y
 * ficheros de cabecera*/

#pragma once
#include "Papel.h"

typedef enum TipoRumbo { Este, Norte, Oeste, Sur };

typedef struct TipoTortuga {
	void Poner( int x, int y, TipoRumbo rumbo );
	void Avanzar( TipoPapel & p );
	void GirarDerecha();
	void GirarIzquierda();
prívate:
	int xx, yy;
	TipoRumbo sentido;
 };
