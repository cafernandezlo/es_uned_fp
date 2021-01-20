/**Módulo: CurvaC
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso de módulos y
 * ficheros de cabecera*/

#include "CurvaC.h"

void CurvaC( int orden, TipoTortuga & t, TipoPapel & p ){
	if(orden ==0){
		t.avanzar(p);
	} else if (orden >0){
		CurvaC(orden-1, t, p);
		t.GirarDerecha();
		CurvaC(orden-1, t, p);
		t.GirarIzquierda();
	}
}
