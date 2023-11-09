#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Número não primo");
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                printf("Número não primo");
                break;
            }
        }
        if (i > num / 2) {
            printf("Número primo");
        }
    }

    return 0;
}
