#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("C:\\Users\\netos\\Documents\\Programacao\\C\\PIM\\PIM\arquivo.csv", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char linha[1024];
    while (fgets(linha, sizeof(linha), arquivo)) {
        char *token = strtok(linha, ",");
        while (token != NULL) {
            // Faça algo com o token (campo)
            printf("Token: %s\n", token);
            token = strtok(NULL, ",");
        }
    }

    fclose(arquivo);
    return 0;
}
