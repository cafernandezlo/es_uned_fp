/************************************************
* Interfaz de módulo: Tabulacion
* Este módulo contiene los elementos para imprimir series de
* números en varias columnas
* Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
* Descripción: El objetivo buscado es introducir al alumno en el uso de módulos y
* ficheros de cabecera
*************************************************/

#pragma once

extern int numColumnas; /* número de columnas */
extern int anchaCalumna; /* ancho de cada una */

/*--Iniciar la impresión --*/
void Iniciar( char titulo[] );

/* Imprime un número, tabulando */
void Imprimir( int numero );

/* Completa la impresion de la última linea */
void Terminar () ;
