#include<stdio.h>
#include<stdlib.h>

int diasMes(int mes){
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    return diasMes
}

int main(){
    int dia, mes, ano;
    int diaAtual, mesAtual, anoAtual;

    printf("Digite sua data de nascimento:");
    scanf("%d / %d / %d", &dia, &mes, &ano);

    getchar();

    printf("Digite a data atual:");
    scanf("%d / %d / %d", &diaAtual, &mesAtual, &anoAtual);

    diasMes(mes);

    return 0;
}