#include <stdio.h>

int main() {
    int product_code;
    float price;

    printf("Por favor, digite o código do produto (1 - Camiseta, 2 - Calça, 3 - Sapato): ");
    scanf("%d", &product_code);

    switch (product_code) {
        case 1:
            price = 20.0;
            printf("Produto selecionado: Camiseta - Preço: R$ %.2f", price);
            break;
        case 2:
            price = 50.0;
            printf("Produto selecionado: Calça - Preço: R$ %.2f", price);
            break;
        case 3:
            price = 80.0;
            printf("Produto selecionado: Sapato - Preço: R$ %.2f", price);
            break;
        default:
            printf("Código do produto inválido. Por favor, tente novamente.");
            break;
    }

    return 0;
}
