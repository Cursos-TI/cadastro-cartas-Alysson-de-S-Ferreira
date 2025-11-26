#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

      
    //Dados da Primeira Cidade
    //Variáveis para uso
    printf("Dados da Primeira Cidade \n");
char estado1[15];
char código[4];
char cidade[15];
int população;
int Área;
float PIB;
int Pontos;
float PPC;
float densidade;

//Nome do Estado
printf("Nome do Estado: \n");
scanf("%s", estado1);

//Código da Carta
printf("Digite o código da carta: \n");
scanf(" %3s", código);

//Nome da Cidade
printf("Nome da Cidade: \n");
scanf(" %s", cidade);

//População
printf("Populção: \n");
scanf(" %d", &população);

//Área da Cidade
printf("Área: \n");
scanf(" %d", &Área);

//PIB
printf("PIB: \n");
scanf(" %f", &PIB);

//Numero de Pontos Turisticos
printf("Pontos Turisticos: \n");
scanf("%d", &Pontos);

PPC = (float) (PIB / população);
densidade = (float) (população / Área);



//Dados da Segunda Cidade
printf("Segunda Cidade: \n");

//Váriaveis
char estado2[15];
char código2[4];
char cidade2[15];
int população2;
int Área2;
float PIB2;
int Pontos2;
float PPC2;
float densidade2;

//Nome do Estado
printf("Nome do Estado: \n");
scanf("%s", estado2);

//Código da Carta
printf("Digite o código da carta: \n");
scanf(" %3s", código2);

//Nome da Cidade
printf("Nome da Cidade: \n");
scanf(" %s", cidade2);

//População
printf("Populção: \n");
scanf(" %d", &população2);

//Área da Cidade
printf("Área: \n");
scanf(" %d", &Área2);

//PIB
printf("PIB: \n");
scanf(" %f", &PIB2);

//Numero de Pontos Turisticos
printf("Pontos Turisticos: \n");
scanf("%d", &Pontos2);

PPC2 = (float) (PIB2 / população2);
densidade2 = (float) (população2 / Área2);

//Saída de Dados das cidades

//Saída de Dados Primeira Cidade
//Amostragem na Tela
printf("Dados da Primeira Cidade -\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", código);
printf("Nome da Cidade %s\n", cidade);
printf("População: %d\n", população);
printf("Área: %d\n", Área);
printf("PIB: %.2f\n", PIB);
printf("Pontos Turisticos: %d\n", Pontos);
printf("PIB Per Capita: %.2f\n", PPC);
printf("Densidade Demográfica: %.2f\n", densidade);

//Saída de Dados da Segunda Cidade
//Amostragem na Tela
printf("Dados da Segunda Cidade -\n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", código2);
printf("Nome da Cidade %s\n", cidade2);
printf("População: %d\n", população2);
printf("Área: %d\n", Área2);
printf("PIB: %.2f\n", PIB2);
printf("Pontos Turisticos: %d\n", Pontos2);
printf("PIB Per Capita: %.2f\n", PPC2);
printf("Densidade Demográfica: %.2f\n", densidade2);



return 0;
} 
