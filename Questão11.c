#include <stdio.h>
#include <string.h>

void validateAccessCode(char* enteredCode) {
    char correctCode[] = "1234";
    if(strcmp(enteredCode, correctCode) == 0) {
        printf("Código de acesso correto! Bem-vindo!\n");
    } else {
        printf("Código de acesso incorreto! Tente novamente.\n");
    }
}

int main() {
    char enteredCode[5];
    while(1) {
        printf("Digite o código de acesso: ");
        scanf("%s", enteredCode);
        validateAccessCode(enteredCode);
    }
    return 0;
}
