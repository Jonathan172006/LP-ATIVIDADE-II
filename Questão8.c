#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    for(i = numero; i >= 0; i--) {
        printf("%d ", i);
    }

    return 0;
}
