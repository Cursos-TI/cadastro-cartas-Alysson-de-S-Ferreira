#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

      
    //Dados da Primeira Cidade
    //Variáveis para uso
char estado1;
char código[4];
char cidade[15];
int população;
int Área;
float PIB;
int Pontos;

//Nome do Estado
printf("Nome do Estado: \n");
scanf("%s", estado1);

//Código da Carta
printf("Digite o código da carta: \n");
scanf("%s", código);

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
printf("Estado: %s\n", estado1);
printf("Código: %s\n", código);
printf("Nome da Cidade %s\n", cidade);
printf("População: %d\n", população);
printf("Área: %d\n", Área);
printf("PIB: %f\n", PIB);
printf("Pontos Turisticos: %d\n", Pontos);


return 0;
} 
