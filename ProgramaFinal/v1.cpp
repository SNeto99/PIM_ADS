#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

#define NUM_OP 4
#define TAM_SETA 5 //qnt q vc quer +1



void telainicial(char *setas);
char* opcao(int e, char *ponteiro);


int main(){
    int escolha = 0;
    char opcoes[NUM_OP][TAM_SETA];
    char *p = &opcoes[0][0];

    while (true)
    {   
        system("cls");
        char teclapressionada;
        // printf("opcao: %d\n", escolha);
        char *setas = opcao(escolha, p);
        telainicial(setas);
        int loop=true;
        while (loop == true){

            if (kbhit()) {
                teclapressionada = getch(); // Lê a tecla pressionada
                // printf("tecla: %d", teclapressionada);
                if (teclapressionada == -32) {

                    teclapressionada = getch();

                    if (teclapressionada == 72){
                        if (escolha == 0){
                            escolha = 3;
                        }
                        else if ((escolha > 0)&&(escolha <= 3)){
                            escolha--;
                        }
                    loop = false;
                    }
                    if (teclapressionada == 80){
                        if (escolha == 3){
                            escolha = 0;
                        }
                         else if ((escolha >= 0)&&(escolha < 3)){
                            escolha++;
                        }
                    loop = false;
                    }
                }
            }
        }
    }
}

char* opcao(int e, char *ponteiro){
    char *p0 = ponteiro;
    for (int i = 0; i < NUM_OP; i++)
    {   
        for (int j = 0; j < TAM_SETA-1; j++)
        {
            *ponteiro = ' ';
            ponteiro++;
        }
        *ponteiro = '\0';
        ponteiro++;

        
    }
    ponteiro = p0;
    ponteiro = ponteiro + (e*TAM_SETA);
    for (int i = 0; i < TAM_SETA-2; i++)
    {
    *ponteiro = '-';
    ponteiro++;
    }
    *ponteiro = '>';
    ponteiro++;
    *ponteiro = '\0';

    ponteiro=p0;
}


void telainicial(char *setas){
    
  char alternativas[][30] = {"Vender Bilhetes", "Validar Bilhetes", "Acessar Obras", "Resumo de Vendas"};

    printf("Bem vindo ao Programa de Administracao de Museus\n");
    printf("O que voce deseja fazer?\n\n");
    int cont=0;
    for (int i = 0; i < NUM_OP; i++)
    {
        for (int j = 0; j < TAM_SETA; j++)
        {
            if (j == TAM_SETA){
                cont++;
            }
            printf("%c", setas[cont]);
            cont++;
        }
        printf("%s\n", alternativas[i]);
    }
}
