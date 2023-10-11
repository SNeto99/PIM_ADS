#include <stdio.h>
#include <stdlib.h>


#define MAX_ROWS 100
#define MAX_COLS 2  // Suponhamos que haja 3 colunas (Nome, Idade, Cidade)

int main() {
    FILE *arquivo;
    arquivo = fopen("C:\\Users\\netos\\Desktop\\Outros\\testes-leituradearquivos\\arquivo.csv", "r"); // Substitua "seuarquivo.csv" pelo nome do seu arquivo CSV

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char matriz[MAX_ROWS][MAX_COLS][255];  // Supondo que cada valor pode ter até 255 caracteres
    int linhas = 0;

    while (fscanf(arquivo, "%[^,],%[^\n]\n", matriz[linhas][0], matriz[linhas][1]) != EOF) {
        linhas++;
        printf("ok\n");
    }

    fclose(arquivo);
    // Agora você tem os dados do arquivo CSV na matriz. Você pode usá-los como necessário.

    // Exemplo de como imprimir os dados:
    for (int i = 0; i < linhas; i++) {
        printf("Nome: %s, Idade: %s\n", matriz[i][0], matriz[i][1]);
    }

    printf("\n\n\n\n\n\n %s", matriz[2][1]);

    return 0;
}
