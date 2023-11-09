#include <stdio.h>

const char* define_clima(int temperatura) {
    if (temperatura > 25) {
        return "ensolarado";
    } else if (temperatura < 15) {
        return "chuvoso";
    } else {
        return "nublado";
    }
}

int main() {
    int temperatura_externa;
    printf("Digite a temperatura externa em graus Celsius: ");
    scanf("%d", &temperatura_externa);

    const char* clima = define_clima(temperatura_externa);
    printf("O clima é %s com uma temperatura de %d graus Celsius.\n", clima, temperatura_externa);

    return 0;
}
