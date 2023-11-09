#include <stdio.h>
#include <stdbool.h>
#include <time.h>

// Calcula o valor do desconto com base no valor da compra e no dia da semana
double calcular_desconto(double valor_compra, int dia_semana) {
    if (valor_compra <= 100000) {
        return 0;
    }
    
    if (dia_semana >= 1 && dia_semana <= 5) {
        return valor_compra * 0.10;
    }
    else {
        return valor_compra * 0.15;
    }
}

// Verifica se o dia é de semana
bool is_dia_semana(int dia) {
    if (dia >= 1 && dia <= 5) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    double valor_compra;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int dia = tm.tm_wday;
    
    printf("Digite o valor da compra: ");
    scanf("%lf", &valor_compra);
    
    double desconto = calcular_desconto(valor_compra, dia);
    
    if (desconto > 0) {
        printf("O valor do desconto é: R$%.2lf\n", desconto);
    }
    else {
        printf("Não há desconto disponível para essa compra.\n");
    }
    
    return 0;
}
