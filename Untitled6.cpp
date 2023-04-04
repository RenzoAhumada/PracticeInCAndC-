#include <stdio.h>
void messageForWelcome(void);
int calculatingSalary(void);
///Se las declara variables globales para poder utilizarlas tambien en las funciones
int salary, days, absence, total;
int main(){
	char nameForEmploye[35];
	//Funcion bienvenida
	messageForWelcome();
	//Ingreso de datos
	printf("Ingrese nombre del trabajador: ");
	scanf ("%s", nameForEmploye);
	printf ("Ingrese sueldo x dia: ");
	scanf("%d", &salary);
	printf("Ingrese los dias laborados: ");
	scanf("%d", &days);
	printf("Ingrese las inasistencias del señor %s: ", nameForEmploye);
	scanf("%d", &absence);
	
	//Procesamiento de datos
	
	total = calculatingSalary();
	
	///Devolucion
	printf("EL señor %s debe de cobrar un total de %d por la cantidad de dias de %d y la cantidad de inansistencias %d ",nameForEmploye, total, days, absence);
}

void messageForWelcome(void){
	
	printf("Bienvenenido al calculador de salario");
	"/n";
	printf("Le dejara ingresar para el calculo correspondiente");
	"/n";	
}

int calculatingSalary(void){
	total=salary * days - absence * salary;
	return total;
}
