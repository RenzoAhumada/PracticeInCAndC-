#include <stdio.h>

int main(){
	
	int num1, num2, num3, high, minor;
	///Ingreso de datos
	printf("Ingrese el numero 1: ");
	scanf("%d", &num1);
	printf("Ingrese el numero 2: ");
	scanf("%d", &num2);
	printf("Ingrese el numero 3: ");
	scanf("%d", &num3);
	///Procesamiento de datos
	if (num1>num2){
		high=num1;
		minor = num2;
	}else {
		high = num2;
		minor = num1;
	}
	if (high<num3){
		high = num3;
	}
	if(minor> num3){
		minor = num3;
	}
	///Devolucion
	printf ("EL numero mayor es el: %d y el menor es el: %d", high, minor );
}
