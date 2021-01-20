/**Programa: DibujarC
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso de módulos y
 * ficheros de cabecera*/

#include <stdio.h>
#include "Papel.h"
#include "Tortuga.h"
#include "Papel.h"


int main(){
	int orden;
	TipoTortuga tt;
	TipoPapel pp;

	printf("Orden:");
	scanf("%d",&orden);

	pp.PonerEnBlanco();
	tt.Poner(8,3,Este);
	CurvaC(orden,tt,pp);
	pp.Imprimir();
	return 0;
}
