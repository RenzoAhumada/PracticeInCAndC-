#include<stdio.h>
int main() {
    int dues, year,penalty, rechard, total;

    printf("Ingrese el valor de la multa: ");
    scanf("%d", &penalty);

    printf("�La multa es del a�o anterior? 1 S� / 0 No: ");
    scanf("%d", &year);

    if (year == 1) {
        penalty += 45;
    }

    printf("�Est� pagando otra financiaci�n? (1: S� / 0: No): ");
    scanf("%d", &rechard);

    if (rechard == 1) {
        printf("No puede acceder a esta facilidad de pago.");
    } else {
        printf("Ingrese la cantidad de cuotas: ");
        scanf("%d", &dues);

        total = penalty * (1 + (dues + 4));
        dues = total / dues;

        printf("El valor de cada cuota es: %.2f\n", dues);
    }

    return 0;
}
	

