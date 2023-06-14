#include <stdio.h>
#include <ctype.h>

int contarConsoantes(char frase[]) {
    int contador = 0;
    int i = 0;

    while (frase[i] != '\0') {
        char c = tolower(frase[i]);

        if (c >= 'a' && c <= 'z') {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                contador++;
            }
        }

        i++;
    }

    return contador;
}

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int quantidadeConsoantes = contarConsoantes(frase);

    printf("Quantidade de consoantes: %d\n", quantidadeConsoantes);

    return 0;
}
