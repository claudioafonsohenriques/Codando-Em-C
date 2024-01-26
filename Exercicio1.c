#include <stdio.h>

int contarPalavras(char frase[]) {
    int contador = 0;
    int i = 0;

    while (frase[i] != '\0') {
        if (frase[i] == ' ') {
            contador++;
        }
        i++;
    }

    return contador + 1;
}

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int quantidadePalavras = contarPalavras(frase);

    printf("Quantidade de palavras: %d\n", quantidadePalavras);
 printf("Fim...");
    return 0;
}
