#include <stdio.h>
void messageForWelcome(void);
void calculation(int);
int main(){
	
	int entranceFor50, entranceFor25, billsFor50, billsFor25, totalBills, pay;
	///Funcion de bienvenida
	messageForWelcome();
	
	//ingreso de datos
	printf("Ingrese la cantidad de entradas de 50$ vendidas: ");
	scanf("%d", &entranceFor50);
	printf("Ingrese la cantidad de entradas de 25$ vendidas: ");
	scanf("%d", &entranceFor25);
	///Calculos correspondientes
	billsFor50 = entranceFor50 *1.12;
	billsFor25 = entranceFor25 *1.9;
	totalBills = billsFor50 + billsFor25;
	pay = entranceFor50*50 + entranceFor25*25 - totalBills;
	
	///Devolucion
	printf("Las ganacias son de: %d y los gastos son de un total de: %d", pay, totalBills);
	 
	 
}

void messageForWelcome(void){
	
	printf("Bienvenenido al calculador de ganancias y gasto de entradas");
	"/n";
	printf("Le dejara ingresar para el calculo correspondiente");
	"/n";	
}
