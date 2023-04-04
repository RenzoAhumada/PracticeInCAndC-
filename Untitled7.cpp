#include<stdio.h>
void messageForWelcome(void);
int age;
int main(){
	///funcion de bienvenida
	messageForWelcome();
	
	//ingreso de los datos
	printf("Ingrese la edad de la persona: ");
	scanf("%d", &age);
	///procesamiento de los datos y devolucion
	if(age<=1){
		printf ("La categoria es: Recien nacido");
	}
	if ((age<=5) && (age>=2)){
		printf("La categoria es: infante");
	}
	if ((age<=12)&&(age>5)){
		printf("La categoria es: Niño");
	}
	
	if ((age<=18)&&(age>12)){
		printf("La categoria es: Adolescente");
	}
	
	if ((age<=25)&&(age>18)){
		printf("La categoria es: Adulto joven");
		
	}
	if ((age<=35)&&(age>25)){
		printf("La categoria es: Adulto");
	}
		if ((age<=50)&&(age>35)){
		printf("La categoria es: Adulto mayor");
	}
		
	if (age>50){
		printf("La categoria es: Anciano");
	}	
}

void messageForWelcome(void){
	
	printf("Bienvenenido aca se le dira la categoria de la persona segun su edad");
	"/n";
	printf("Le dejara ingresar para el calculo correspondiente");
	"/n";	
}

