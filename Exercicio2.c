#include <stdio.h>
#include <string.h>

void substituirPalavra(char frase[], char palavra[], char substituta[]) {
    char* posicao = strstr(frase, palavra);

    while (posicao != NULL) {
        strncpy(posicao, substituta, strlen(substituta));
        posicao = strstr(posicao + strlen(substituta), palavra);
    }
}

int main() {
    char frase[100];
    char palavra[20];
    char substituta[20];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite a palavra a ser substituída: ");
    scanf("%s", palavra);

    printf("Digite a palavra substituta: ");
    scanf("%s", substituta);

    substituirPalavra(frase, palavra, substituta);

    printf("Frase modificada: %s\n", frase);

    return 0;
}
