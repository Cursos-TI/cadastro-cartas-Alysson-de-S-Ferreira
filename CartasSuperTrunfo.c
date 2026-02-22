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
printf("População: \n");
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

PPC = (float) PIB / população;
densidade = (float) população / Área;



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
printf("População: \n");
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

PPC2 = (float) PIB2 / população2;
densidade2 = (float) população2 / Área2;




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




//Densidade invertida
float densidadeinv = 1 / densidade;
float densidadeinv2 = 1 / densidade2;


//Comparação de variáveis
printf("Comparando os parametros das cidades: \n");
int PopulaçãoMaior = população > população2;
printf("A população maior é a da primeira cidade? %d\n", PopulaçãoMaior);

int AreaMaior = Área > Área2;
printf("A maior área é da primeira cidade? %d\n", AreaMaior);

int PIBMaior = PIB > PIB2;
printf("O maior PIB é o da primaira cidade? %d\n", PIBMaior);

int PPCMaior = PPC > PPC2;
printf("O maior PIB per Capita é o da primeira cidade? %d\n", PPCMaior);

int DensMaior = densidade > densidade2;
printf("A maior densidade é a da primeira cidade? %d\n", DensMaior);

int PontosMaior = Pontos > Pontos2;
printf("A primeira cidade tema mais pontos turisticos que a segunda? %d\n", PontosMaior);

//Criação de Super Poder
printf("Resultado das comparações \n");
float SuperPoder1 = população + Área + PIB + Pontos + PPC + densidadeinv;
float SuperPoder2 = população2 + Área2 + PIB2 + PPC2 + Pontos2 + densidadeinv2;
int Força = SuperPoder1 > SuperPoder2;

printf("O Super Poder da Primeira Carta é: %.2f\n", SuperPoder1);
printf("O Super Poder da Segunda Carta é: %.2f\n", SuperPoder2);
printf("A primeira carta é mais forte que a segunda? %d\n", Força);




return 0;
} 
