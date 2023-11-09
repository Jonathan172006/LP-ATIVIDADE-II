#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0, soma_pares = 0, soma_impares = 0;
    float media_pares, media_impares;

    printf("Digite números inteiros. A leitura terminará quando um valor negativo for digitado.\n");

    do {
        printf("Digite um número: ");
        scanf("%d", &num);

        if(num < 0) {
            break;
        }

        if(num % 2 == 0) {
            pares++;
            soma_pares += num;
        } else {
            impares++;
            soma_impares += num;
        }
    } while(1);

    if(pares > 0) {
        media_pares = (float) soma_pares / pares;
        printf("Média aritmética dos números pares: %.2f\n", media_pares);
    }

    if(impares > 0) {
        media_impares = (float) soma_impares / impares;
        printf("Média aritmética dos números impares: %.2f\n", media_impares);
    }

    printf("Foram digitados %d números pares e %d números impares.\n", pares, impares);

    return 0;
}
