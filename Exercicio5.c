#include <stdio.h>
#include <ctype.h>

void criptografarFrase(char frase[]) {
    int i = 0;

    while (frase[i] != '\0') {
        char c = tolower(frase[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            frase[i] = '#';
        }

        i++;
    }
}

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    criptografarFrase(frase);

    printf("Frase criptografada: %s\n", frase);

    return 0;
}
