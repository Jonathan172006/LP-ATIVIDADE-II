#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade;

    printf("Digite sua idade: ");
    scanf("%d",&idade);
    system("cls || clear");

    if(idade >= 18) {
        printf("\nAcesso permitido");
    }
    else (idade >= 17) {
        printf("\nAcesso negado");
    }
    return 0;
}