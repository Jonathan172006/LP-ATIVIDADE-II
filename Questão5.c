#include <stdio.h>

void welcomeMessage(int languageChoice) {
    switch (languageChoice) {
        case 1:
            printf("Welcome to the software development team!\n");
            break;
        case 2:
            printf("¡Bienvenido al equipo de desarrollo de software!\n");
            break;
        case 3:
            printf("Bienvenue dans l'équipe de développement logiciel!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }
}

int main() {
    int languageChoice;
    printf("Please choose your preferred language (1 - English, 2 - Spanish, 3 - French): ");
    scanf("%d", &languageChoice);
    welcomeMessage(languageChoice);
    return 0;
}
