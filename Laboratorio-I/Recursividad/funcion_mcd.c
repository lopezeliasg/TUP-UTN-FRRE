/*Escriba una función recursiva MCD que regrese el máximo común divisor de x y de y.
El máximo común divisor de los enteros x e y es el número más grande que divide en forma
completa tanto a x como a y. El mcd de x y de y, se define en forma recursiva como sigue: Si
y es igual a 0, entonces gcd (de x, y) es x; de lo contrario mcd (de x, y) es igual a mcd(y,
x%y).*/
#include <stdio.h>
#include <conio.h>
//Desarrollo de la funcion.
int mcd(int x, int y)
{
	if (y == 0){
		return x;
	} else {
		return mcd(y,x%y);
	}
}
int main(int argc, char *argv[]) {
	int x, y, z;
	printf("MCD\n");
	printf("\nValor de X: ");
	scanf("%d",&x);
	printf("\nValor de Y: ");
	scanf("%d",&y);
	//Llamada a la funcion.
	z = mcd(x,y);
	printf("MCD de %d y %d: %d",x,y,z);
	getch();
	return 0;
	

}

