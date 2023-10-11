#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>


typedef struct {
    int numero;
    int secao;
    int valido;
} Ticket;

typedef struct {
    char nome[255];
    float preco;
} Sessao;

#define NUMSES  4
int main(){

    Sessao ses[NUMSES];

    strcpy(ses[0].nome, "sessao de arte moderna        ");
    ses[0].preco = 10;
    strcpy(ses[2].nome, "sessao de arte espacial       ");
    ses[1].preco = 15;
    strcpy(ses[1].nome, "sessao de inovacoes espaciais ");
    ses[2].preco = 20;
    strcpy(ses[3].nome, "sessao de inovacoes modernas  ");
    ses[3].preco = 25;



    int n_sessoes = sizeof(ses) / sizeof(ses[0]);

    printf("Sessoes disponiveis:\n\n");
    for (int i=0; i < n_sessoes; i++){
    printf("        %d - %s- R$%.2f \n", i+1, ses[i].nome, ses[i].preco);
    }

    return 0;
}