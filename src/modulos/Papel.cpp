/**Módulo: Papel
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso de módulos y
 * ficheros de cabecera*/

#include <stdio.h>
#include "Papel.h"

bool TipoPapel::Dentro (int x, int y){
	return (x>=0 && x < ANCHO && y>=0 && y < ALTO);
}

void TipoPapel::PonerEnBlanco(){
	for (int x=0; x<ANCHO; x++){
		for(int y=0; y<ALTO; y++){
			marcasH[x][y]=' ';
			marcasV[x][y]=' ';
		}
	}
}

void TipoPapel::MarcarHorizontal(int x, int y){
	if(Dentro(x,y)){
		marcasH[x][y]='_';
	}
}

void TipoPapel::MarcarVertical(int x, int y){
        if(Dentro(x,y)){
                marcasV[x][y]='|';
        }
}

void TipoPapel::Imprimir(){
        for (int y=ALTO-1; y>=0; y--){
                for(int x=0; x<ANCHO; x++){
                	printf("%c%c", marcasV[x][y], marcasH[x][y]);
		}
	printf("\n");
        }
}
