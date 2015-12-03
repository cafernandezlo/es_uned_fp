/**Programa: Ordenar3b
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso
 * del paso de argumentos por referencia. Se modifica el ejemplo
 * 010_llamadasFunciones.c */


#include <stdio.h>
#include <math.h>

void OrdenarDos(float & y, float & z){
	float aux;
	
	if (y>z){
		aux = y;
		y=z;
		z= aux;
	}
}

void LeerDato (int indice, float & dato){
	printf("¿Dato %1d?",indice);
	scanf("%f",&dato);
}

int main(){
	
	float valorUno, valorDos, valorTres;
	char tecla;
	
	tecla='S';
	
	while(tecla!='N'){
		{
			LeerDato(1,valorUno);
			LeerDato(2,valorDos);
			LeerDato(3,valorTres);
		}
		{
			OrdenarDos(valorUno,valorDos);
			OrdenarDos(valorUno,valorTres);
			OrdenarDos(valorDos,valorTres);
		}
		{
			printf("\nDatos Ordenados = \n");
			printf("%7.2f %7.2f %7.2f\n",valorUno,valorDos,valorTres);
		}
		{
			tecla = ' ';
			printf("\n¿Desea continuar(S/N)? ");
			while((tecla!= 'S')&&(tecla!= 'N')){
				scanf("%c",&tecla);
			}
		}
	}
	return 0;
}