#include <stdio.h>
#include <string.h>

void substituirMeses(char frase[]) {
    char meses[12][10] = {
        "janeiro", "fevereiro", "marco", "abril",
        "maio", "junho", "julho", "agosto",
        "setembro", "outubro", "novembro", "dezembro"
    };

    char numeros[12][3] = {
        "01", "02", "03", "04",
        "05", "06", "07", "08",
        "09", "10", "11", "12"
    };

    for (int i = 0; i < 12; i++) {
        char* posicao = strstr(frase, meses[i]);

        while (posicao != NULL) {
            strncpy(posicao, numeros[i], strlen(numeros[i]));
            posicao = strstr(posicao + strlen(numeros[i]), meses[i]);
        }
    }
}

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    substituirMeses(frase);

    printf("Frase modificada: %s\n", frase);

    return 0;
}
