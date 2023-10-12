#include <stdio.h>
#include <stdlib.h>


#define MAX_ROWS 100
#define MAX_COLS 2  // Suponhamos que haja 3 colunas (Nome, Idade, Cidade)

int lerarquivo() {
    FILE *arquivo;
    arquivo = fopen("C:\\Users\\netos\\Desktop\\Outros\\testes-leituradearquivos\\arquivo.csv", "r"); // Substitua "seuarquivo.csv" pelo nome do seu arquivo CSV

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char matriz[MAX_ROWS][MAX_COLS][255];  // Supondo que cada valor pode ter at� 255 caracteres
    int linhas = 0;

    while (fscanf(arquivo, "%[^;];%[^\n]\n", matriz[linhas][0], matriz[linhas][1]) != EOF) {
        linhas++;
    }

    fclose(arquivo);
    // Agora voc� tem os dados do arquivo CSV na matriz. Voc� pode us�-los como necess�rio.

    // Exemplo de como imprimir os dados:
    for (int i = 0; i < linhas-4; i=i+5) {
        printf("%s               :%s\n", matriz[i  ][0], matriz[i  ][1]);
        printf("%s              :%s\n",  matriz[i+1][0], matriz[i+1][1]);
        printf("%s               :%s\n", matriz[i+2][0], matriz[i+2][1]);
        printf("%s       :%s\n",         matriz[i+3][0], matriz[i+3][1]);
        printf("%s  :%s\n\n",            matriz[i+4][0], matriz[i+4][1]);
    }

    printf("\n\n\n\n\n\n");

    return 0;
}


int main(){
    printf("DADOS DO ARQUIVO:\n\n\n\n");
    lerarquivo();
    return 0;
}