#include <stdio.h>
#include <conio.h>
//Desarrollar funcion factorial para el triangulo.
int factorial(int n){
	int resultado = 1;
	for (int i = 1; i <= n; i++){
		resultado = resultado*i;
	}
	return resultado;
}
	
int main(){
	//Variables para los for y pedir un numero para el triangulo.
	int i, n, c;
	printf("Ingrese un numero entero para el triangulo de pascal: ");
	scanf("%d",&n);
	for (i = 0; i < n; i++) //Iteracion for segun numero ingresado
	{
		for (c = 0; c <= (n - i - 2); c++){ //Espacios de izq a derecha
			printf(" ");
		}
		for (c = 0 ; c <= i; c++){ //Usar la funcion factorial para n!/k!(n-k)!
			printf("%d ", factorial(i)/(factorial(c)*factorial(i-c)));
		}
		
		printf("\n");
	}
	getch();
	return 0;
}
