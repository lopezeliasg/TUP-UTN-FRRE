#include <stdio.h>
#include <conio.h>
//Desarrollo de funcion. Si es 1, detenerla.
int factorial(int numero)
{
	if (numero <= 1)
		return 1;
	return numero*factorial(numero-1);
}
int main(){
	int numero;
	printf("Ingrese numero: "); //Pedir Nro.
	scanf("%d",&numero);
	int factorialNumero = factorial(numero); //Llamar a la funcion.
	printf("El factorial de %d es %d",numero,factorialNumero); //Mostrar
	getch();
	return 0;
}
