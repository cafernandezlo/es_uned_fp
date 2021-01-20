/**Programa: Fechas2 (Extracto)
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso
 * de los TAD
 * Requisitos: ejecutar en el entorno C+- de la asignatura */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct TipoFecha{
	void Escribir();

private:
	int dia, mes, anno;
}

const int maxNombre = 15;
typedef char TipoNombreMes[maxNombre];
typedef TipoNombreMes listaNombres_t[13];

listaNombres_t nombres = { "?", /* sin nombre cuando mes = O */
			   "Enero" ,
			   "Febrero",
			   "Marzo",
			   "Abril",
			   "Mayo",
			   "Junio",
			   "Julio",
			   "Agosto",
			   "Septiembre",
			   "Octubre",
			   "Noviembre",
			   "Diciembre");

void TipoFecha::Escribir(){
	printf("%2d-%s-%4d", dia, nombre[mes],anno);
}
