/*Faça um programa que, utilizando registros, leia o nome e data de nascimento (dia mês ano) de n pessoas
(n = 40), calcule e mostre a idade de cada pessoa e o nome da pessoa mais velha. Suponha que não temos
duas (ou mais) pessoas com a mesma idade.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
typedef struct data{
int dia, ano, mes;
    }Tdt;
typedef struct cadastro{
   char nome[100];
   Tdt dnasc;
}Tcad;
Tcad contato[10];
int menor_ano=2022, menor_dia=32, menor_mes=13, idade[2], j=0;
char pessoa[100];
for(int i=0;i<2;i++){
printf("Informe seu nome: ");
scanf(" %[^\n]s",&contato[i].nome);

do{
printf("Informe o dia que nasceu: ");
scanf("%d",&contato[i].dnasc.dia);
if((contato[i].dnasc.dia<1) && (contato[i].dnasc.dia>31))
printf("dia invalido..");
}while((contato[i].dnasc.dia<1) && (contato[i].dnasc.dia>31));

do{
printf("Informe o mes que nasceu: ");
scanf(" %d",&contato[i].dnasc.mes);
if((contato[i].dnasc.mes<1) && (contato[i].dnasc.dia>12))
printf("dia invalido..");
}while((contato[i].dnasc.mes<1) && (contato[i].dnasc.dia>12));

do{
printf("Informe o ano que nasceu: ");
scanf("%d",&contato[i].dnasc.ano);
if(contato[i].dnasc.ano>2021)
printf("ano invalido..");
}while(contato[i].dnasc.ano>2021);


idade[i]=2021-contato[i].dnasc.ano;

if((contato[i].dnasc.ano<menor_ano)&&(contato[i].dnasc.dia<menor_dia)&&(contato[i].dnasc.mes<menor_mes))
    pessoa[i]=contato[i].nome;
    j++;
}

for(int i=0;i<2;i++){
printf("%s e a pessoa mais velha.\n\n",pessoa[j]);
printf("%s e sua idade: %d", contato[i].nome, idade);
}
    system("pause");
    return 0;
}