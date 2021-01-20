/**Módulo: Tortuga
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso de módulos y
 * ficheros de cabecera*/

#include "Tortuga.h"

void TipoTortuga::Poner (int x, int y, TipoRumbo rumbo ) {
	xx = x;
	yy = y;
	sentido = rumbo;
}

void TipoTortuga::Avanzar ( TipoPapel & p ){
	switch (sentido) {
	case Norte:
	  p.MarcarVertical( xx, yy );
	  yy++;
	  break;
	case Sur:
	  yy--;
	  p.MarcarVertical( xx, yy );
	  break;
	case Este:
	  p.MarcarHorizontal( xx, yy );
	  xx++;
	  break;
	case Oeste:
	  xx--;
	  p.MarcarHorizontal( xx, yy );
	  break;
	}
}

void TipoTortuga::GirarDerecha(){
	sentido = TipoRumbo( (int(sentido)-1+4) % 4 );
}

