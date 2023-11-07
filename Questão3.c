#include <stdio.h>
#include <stdlib.h>

int main() {

    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f",&nota);
    system("cls || clear");

    if(nota >= 9) {
        printf("\nexcelecente");
    }
    else if(nota >= 7) {
        printf("\nbom");
    }
    else if(nota >= 5) {
        printf("\nrazoael");
    }
    else {
        printf("\ninsuficiente");
    }
    return 0;
}