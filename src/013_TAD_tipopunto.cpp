/**Programa: TAD_tipopunto
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso
 * de los TAD
 * Requisitos: ejecutar en el entorno C+- de la asignatura */
 
#include <stdio.h>
#include <math.h>

typedef struct TipoPunto{
	float x;
	float y;
	
	void Leer();
	void Escribir();
	
	float Distancia( TipoPunto p);
};

typedef enum TipoPuntoError { PuntoNoLeido};

void TipoPunto::Leer(){
	int campos;
	
	campos = scanf("(%g,%g)",&x,&y);

	/*
		Héctor Luaces Novo 03.12.2015 <hector@luaces-novo.es>
		
		C+- tiene un problema a la hora de hacer dos "scanf" seguidas y es que no limpia 
		correctamente el buffer de entrada.
		
		Esto hace que todo el contenido del buffer 'restante' del primer 'scanf' se vueque en el
		segundo scanf, causando que el programa malfuncione.
		
		Para que las cosas funcionen correctamente es necesario vaciar el buffer de entrada 
		de cualquier carácter que no sea el LF (\n).
		
		Esto lo conseguimos con el siguiente bucle, que soluciona el fallo de éste ejercicio.
		
		El bucle en sí no hace nada, lo único que nos interesa es que getchar() vacíe todo el buffer.
	*/
	while(getchar() != '\n') {
	}
	if(campos < 2){
		throw PuntoNoLeido;
	}
}

void TipoPunto::Escribir(){
	printf("(%g,%g)",x,y);
}

float TipoPunto::Distancia(TipoPunto p){
	float deltaX, deltaY;
	
	deltaX = x - p.x;
	deltaY = y - p.y;
	return sqrt (deltaX*deltaX + deltaY*deltaY);
}
int main()
{
	TipoPunto a,b;
	
	bool seguir = true;
	
	while(seguir){
		try{
			a.Leer();
			b.Leer();
			printf("Segmento: ");
			a.Escribir();
			printf(" ");
			b.Escribir();
			printf("Longitud: %f\n", a.Distancia(b));

		}catch (TipoPuntoError e){
			seguir = false;
			return 1;
		}
	}
	
	return 0;

}
