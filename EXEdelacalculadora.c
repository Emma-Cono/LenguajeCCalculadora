#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	

    float num1, num2, resultado;
    char operador;
    
    
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    system("cls");
    
    
    printf("%.f",num1);
    printf("\nIngrese el operador (+, -, *, /): ");
    scanf(" %c", &operador);  // El espacio antes de %c evita leer caracteres adicionales del buffer
    system("cls");
    
    
    printf("%.f  %c",num1,operador);
    printf("\nIngrese el segundo numero: ");
    scanf("%f", &num2);
    system("cls");
    
    
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("El resultado de la suma es: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("El resultado de la resta es: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("El resultado de la multiplicacion es: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("El resultado de la división es: %.2f\n", resultado);
            } else {
                printf("Error: no se puede dividir por cero.\n");
            }
            break;
        default:
            printf("Error: operador inválido.\n");
            break;
    }


	
	return 0;
}
