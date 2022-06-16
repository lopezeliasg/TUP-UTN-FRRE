#include <stdio.h>
#include <conio.h>
//Desarrollo de funcion.
int invertir(int n){
	//Inicializar en 0 las variables.
	int cifra = 0;
	int inverso = 0;
while(n!=0){
	//Mover digitos de izq a derecha.
	cifra = n%10;
	inverso = (inverso*10) + cifra;
	n/= 10;
}
return inverso; //Retornar valor inverso
}
int main() {
	int n,z;
	printf("Numero a invertir: "); //Pedir valor a invertir
	scanf("%d", &n);
	z = invertir(n); // Llamar a la funcion
	printf("El numero %d invertido es --> %d",n,z); //Mostar resultado
	getch();
	return 0;
}
