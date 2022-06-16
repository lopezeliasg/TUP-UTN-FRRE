#include <stdio.h>
#include <conio.h>
int fibonacci(int n){
	//Declaracion de variables.
	int primeros = 10;
	int primer_n = 0;
	int siguiente_n = 1;
	for (int i = 1; i<=primeros; i++){
		printf("%d ",primer_n);
		int suma = primer_n+siguiente_n;
		primer_n = siguiente_n;
		siguiente_n = suma;
	}
}
int main(int argc, char *argv[]) {
	//Declaracion de variables.
	int n;
	int z = fibonacci(n); //Llamar a la funcion.
	//Mostrar resultado.
	printf(" - Fibonacci de primeros 10",z);
	getch();
	return 0;
}

