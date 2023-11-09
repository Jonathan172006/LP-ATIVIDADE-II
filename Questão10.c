#include <stdio.h>

int main() {
    int num1, num2, op;
    float resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite a operação matemática (+, -): ");
    scanf("%d", &op);

    switch (op) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        default:
            printf("Operação inválida.\n");
            break;
    }

    return 0;
}
