#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

void telainicial(char *setas);
char* opcao(int e, char *ponteiro);


int main(){
    int escolha = 1;
    char opcoes[4][4];
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
                
                if (teclapressionada == 119){
                    if (escolha == 0){
                        escolha = 3;
                    }
                    else if ((escolha > 0)&&(escolha <= 3)){
                        escolha--;
                    }
                loop = false;
                }
                if (teclapressionada == 115){
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

char* opcao(int e, char *ponteiro){
    char *p0 = ponteiro;
    for (int i = 0; i < 4; i++)
    {   
        for (int j = 0; j < 4; j++)
        {
            *ponteiro = ' ';
            ponteiro++;
        }
        
    }
    ponteiro = p0;
    ponteiro = ponteiro + (e*4);
    *ponteiro = '-';
    ponteiro++;
    *ponteiro = '-';
    ponteiro++;
    *ponteiro = '-';
    ponteiro++;
    *ponteiro = '>';
    ponteiro++;
    
    return p0;
}


void telainicial(char *setas){
    
    printf("Bem vindo ao Programa de Administracao de Museus\n");
    printf("O que voce deseja fazer?\n\n");

    printf("%c%c%c%cVender Bilhetes\n"  , setas[0] , setas[1] , setas[2],  setas[3] );
    printf("%c%c%c%cValidar Bilhetes\n" , setas[4] , setas[5] , setas[6],  setas[7] );
    printf("%c%c%c%cAcessar Obras\n"    , setas[8] , setas[9] , setas[10], setas[11]);
    printf("%c%c%c%cResumo de Vendas\n" , setas[12], setas[13], setas[14], setas[15]);

}
