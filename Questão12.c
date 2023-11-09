#include <stdio.h>

int main() {
    int n, i;
    float soma = 0, media;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        float nota;
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);

        soma += nota;
    }

    media = soma / n;
    printf("A média das notas é: %.2f\n", media);

    return 0;
}
