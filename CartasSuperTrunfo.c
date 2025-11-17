#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

      
    //Dados da Primeira Cidade
    //Variáveis para uso
//Primeiro estado
char estado1[15];

//Código da Carta
char código[4];

//Nome da Cidade
char cidade[15];

//População da cidade
int população;

//Área da Cidade
int Área;

//PIB da cidade
float PIB;

//Pontos Turisticos da cidade
int Pontos;


//Entradas de dados no programa
//Para o usuátio completar-

//Nome do Estado
printf("Nome do Estado: \n");
scanf("%14s", estado1);

//Código da Carta
printf("Digite o código da carta: \n");
scanf(" %s", código);

//Nome da Cidade
printf("Nome da Cidade: \n");
scanf("%s", cidade);

//População
printf("Populção: \n");
scanf("%d", &população);

//Área da Cidade
printf("Área: \n");
scanf("%d", &Área);

//PIB
printf("PIB: \n");
scanf("%.2f", &PIB);

//Numero de Pontos Turisticos
printf("Pontos Turisticos: \n");
scanf("%d", &Pontos);

//Visualização dos dados
//Linha após linha
printf("Estado: %s\n", estado1);
printf("Código: %s\n", código);
printf("Nome da Cidade %s\n", cidade);
printf("População: %d\n", população);
printf("Área: %d\n", Área);
printf("PIB: %f\n", PIB);
printf("Pontos Turisticos: %d\n", Pontos);


return 0;
} 
