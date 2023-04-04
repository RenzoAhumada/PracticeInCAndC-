#include <stdio.h> 
void messageForWelcome(void);
int main (){
	
	double money1, money2, money50, money25, money10, money05, total;
	
	///Funcion de bienvenida
	messageForWelcome();
	
	///Ingreso de datos
	printf("Ingrese la cantidad de monedas de 1$ que tiene ");
	scanf("%if", &money1);
	printf("Ingrese la cantidad de monedas de 2$ que tiene ");
	scanf("%if", &money2);
	printf("Ingrese la cantidad de monedas de 0.50$ que tiene ");
	scanf("%if", &money50);
	printf("Ingrese la cantidad de monedas de 0.25$ que tiene ");
	scanf("%if", &money25);
	printf("Ingrese la cantidad de monedas de 0.10$ que tiene ");
	scanf("%if", &money10);
	printf("Ingrese la cantidad de monedas de 0.05$ que tiene ");
	scanf("%if", &money05);
	
	///Calculo de los datos
	total = money1 + money2*2 + money50*0.50+money25*025+money10*0.10+money05*0.05;
	
	
	///Devolucion de los datos
	printf("La catidad de dinero es %", total);
	
}

void messageForWelcome(void){
	printf("Bienvenenido al calculador de dinero");
	"/n";
	printf("Le dejara ingresar el dinero que tenga disponible");
	"/n";	
}

