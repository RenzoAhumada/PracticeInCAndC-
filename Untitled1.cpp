
#include <stdio.h> 
int main()
{
	
	int days,valueForDay,iva,totalValue,bar, value;
	
	///Ingreso de datos
    printf("Ingrese la cantidad de dias que se hospedaron");
	scanf("%d", &days);
	printf("Ingrese el valor de la habitación");
	scanf("%d", &valueForDay);
	
	///Calculo de los datos
	iva = valueForDay*1.21;
	totalValue = iva + valueForDay;
	bar = valueForDay / 3;
	value = bar + totalValue;
	
	/// Devolucion
	printf("El valor sin iva es de %d", valueForDay);
	printf("El valor del iva es de %d", iva);
	printf("El valor del frigobar es de %d", bar);
	printf("El valor a pagar es de %d", value);
}
