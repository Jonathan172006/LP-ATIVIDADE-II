#include <stdio.h>

void novoJogo() {
    printf("Iniciando um novo jogo.\n");
}

void carregarJogo() {
    printf("Carregando um jogo salvo.\n");
}

void configuracoes() {
    printf("Configurando as opções do jogo.\n");
}

int main() {
    int opcao;

    do {
        printf("\nEscolha uma opção:\n");
        printf("1 - Novo jogo\n");
        printf("2 - Carregar jogo\n");
        printf("3 - Configurações\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                novoJogo();
                break;
            case 2:
                carregarJogo();
                break;
            case 3:
                configuracoes();
                break;
            case 0:
                printf("Saindo do menu.\n");
                break;
            default:
                printf("Opção inválida, tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
