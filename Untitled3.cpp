#include <stdio.h> 
void messageForWelcome(void);
int main(){
	
	int iva, total, km, totalxkm, lumps, valueLumps, valueForIva;
	///Funcion de bienvenida
	messageForWelcome();
	
	///Ingreso de datos
	printf("Ingrese la cantidad de km realizados: ");
	scanf("%d", &km);
	printf("Ingrese la cantidad de bultos llevados: ");
	scanf("%d", &lumps);
	
	///Calculo de los datos
	totalxkm = km * 20;
	valueLumps = lumps * 40;
	total = totalxkm + valueLumps;
	iva = total*1.21;
	valueForIva = iva + total;
	
	
	////Devolucion
	printf("El total a cobrar es de: %d , el total del iva es de: %d , el total sin iva es de: %d", valueForIva , iva, total);
	
}
void messageForWelcome(void){
	
	printf("Bienvenenido al calculador de Kilometros y bultos");
	"/n";
	printf("Le dejara ingresar para el calculo correspondiente");
	"/n";	
}
