#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void lb() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

void printar(int opcao);
void printar2(char pergunta[]);


int main(){
        while (true){
            int op, *p;
            char s[]="qual é seu nivel de satisfação";
            // p=&s[0];
            printar2(s);
            printf("opcao: ");
            scanf("%d", &op);
            // lb();
            // s = getchar();
            // printf("%d", s);
            // system("pause");
            // printar(op);
            system("pause");
            system("cls");
    }
        return 0;
}

void printar(int opcao){

    if (opcao == 1){
    printf("            BEM VINDO A TELA DE COMPRA\n\n\n\n\n\n\n");
    printf("            selecione seu ticket:\n");
    printf("            --->Inteira\n");
    printf("                Meia\n\n\n\n");
    }       
    if (opcao ==         2){
    printf("            BEM VINDO A TELA DE COMPRA\n\n\n\n\n\n\n");
    printf("            selecione seu ticket:\n");
    printf("                Inteira\n");
    printf("            --->Meia\n\n\n\n");
    }
}


void printar2(char pergunta[]){



    printf("%s", pergunta);
    printf("\n 1 - Muito satisfeito");
    printf("\n 2 - Satisfeito");
    printf("\n 3 - Neutro");
    printf("\n 1 - Pouco satisfeito");
    printf("\n 2 - Insatisfeito");
}