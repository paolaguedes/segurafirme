#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Construa um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo.
Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo que não tenha
números repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada. */
int main(){
srand(time(NULL));
int bingo[5][5], verifica[5][5], igual=0, cont=0;
printf("------------------------\n");
printf("   numeros sorteados\n");
printf("------------------------\n");
do{
for(int i=0;i<5;i++)
    for(int j=0;j<5;j++){
 bingo[i][j]= rand()%99;//gera os numeros aletorios
    }

for(int i=0;i<5;i++){// vai percorrer o vetor ja gerado
    for(int j=0;j<5;j++){
if(bingo[i][j]==verifica[i][j]){
igual++;//se fo igual vem pra ca
 bingo[i][j]= rand()%99;
}
if(igual==0)//se nao tiver numero repetido vai pro cont
cont++
    }
}
}while(cont<25);// repete ate ter 25 num diferentes sorteados

for(int i=0;i<5;i++)
    for(int j=0;j<5;j++){
 bingo[i][j]= rand()%99;
 printf("|%d| ",bingo[i][j]);
    }
printf("\n");

    system("pause");
    return 0;
}