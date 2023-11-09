#include <stdio.h>

// Function to convert kilometers to miles
float kilometers_to_miles(float kilometers) {
    return kilometers * 0.621371;
}

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

int main() {
    int choice;
    float input, result;

    do {
        printf("\nEscolha uma conversão: \n");
        printf("1. Quilômetros para Milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("0. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Digite a quantidade em quilômetros: ");
                scanf("%f", &input);
                result = kilometers_to_miles(input);
                printf("%.2f quilômetros = %.2f milhas\n", input, result);
                break;

            case 2:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &input);
                result = celsius_to_fahrenheit(input);
                printf("%.2f Celsius = %.2f Fahrenheit\n", input, result);
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
