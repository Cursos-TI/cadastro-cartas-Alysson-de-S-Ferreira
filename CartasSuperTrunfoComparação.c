#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

      
    //Dados da Primeira Cidade
    //Variáveis para uso
    printf("Coloque os dados da Primeira Cidade \n");
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

//Váriáveis derivadas dos dados de scanf

//PIB per Capita
PPC = (float) PIB / população;

//Densidade Demográfica
densidade = (float) população / Área;

//Váriáveis derivadas do manuseio das anteriores

//Densidade Invertida
float densidadeinv = 1 / densidade;

//Super Poder da Carta
float Super = população + Área + PIB + Pontos + PPC + densidadeinv;




//Dados da Segunda Cidade
printf("Coloque os dados da segunda Cidade: \n");

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

//Váriáveis derivadas dos dados de scanf:

//PIB per Capita
PPC2 = (float) PIB2 / população2;

//Densidade Demográfica
densidade2 = (float) população2 / Área2;

//Váriáveis derivadas do manuseio das anteriores

//Densidade Invertida
float densidadeinv2 = 1 / densidade2;

//Super Poder da Carta
float Super2 = população2 + Área2 + PIB2 + Pontos2 + PPC2 + densidadeinv2;




//Saída de Dados das cidades

//Saída de Dados Primeira Cidade
//Amostragem na Tela
printf("- DADOS DA PRIMEIRA CIDADE -\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", código);
printf("Nome da Cidade %s\n", cidade);
printf("População: %d\n", população);
printf("Área: %d\n", Área);
printf("PIB: %.2f\n", PIB);
printf("Pontos Turisticos: %d\n", Pontos);
printf("PIB Per Capita: %.2f\n", PPC);
printf("Densidade Demográfica: %.2f\n", densidade);
printf("Super Poder da carta: %.2f\n", Super);



//Saída de Dados da Segunda Cidade
//Amostragem na Tela
printf("- DADOS DA SEGUNDA CIDADE - -\n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", código2);
printf("Nome da Cidade %s\n", cidade2);
printf("População: %d\n", população2);
printf("Área: %d\n", Área2);
printf("PIB: %.2f\n", PIB2);
printf("Pontos Turisticos: %d\n", Pontos2);
printf("PIB Per Capita: %.2f\n", PPC2);
printf("Densidade Demográfica: %.2f\n", densidade2);
printf("Super Poder da carta: %.2f\n", Super2);










//DESAFIO NOVATO - TEMA 2 - Comparando as cartas
//Usar if-else para comparar os parâmetros das cartas de Super Trunfo


//Comparar população das cartas
//printf("COMPARAÇÃO DAS CARTAS \n");
//printf("Comparação de população \n");

//if (população > população2) {
//   printf("Carta 1 %s venceu! \n", cidade);
//} else {
//  printf("Carta 2 %s venceu! \n", cidade2);
//}



//Comparar Área
//printf("Comparação de Área \n");
//if (Área > Área2) {
//printf("Carta 1 %s venceu! \n", cidade);
//} else {
//printf("Carta 2 %s venceu! \n", cidade2);
//}


//Comparar PIB
//printf("Comparação do PIB \n");
//if (PIB > PIB2) {
// printf("Carta 1 %s venceu! \n", cidade);
//} else { 
// printf("Carta 2 %s venceu! \n", cidade2);
//}


//Comparando os pontos turisticos
//printf("Comparação dos Pontos Turisticos \n");
//if (Pontos > Pontos2) {
//printf("Carta 1 %s venceu! \n", cidade);
//} else {
//printf("Carta 2 %s venceu! \n", cidade2);
//}


//Comparando o PIB per Capita
//printf("Comparação do PIB per capita \n");
//if (PPC > PPC2) {
//printf("Carta 1 %s venceu! \n", cidade);
//} else {
//printf("Carta 2 %s venceu! \n", cidade2);
//}


//Comparando Densidade Demográfica
//printf("Comparando Densidade Demográfica \n");
//if (densidadeinv < densidadeinv2) {
//printf("Carta 1 %s venceu! \n", cidade);
//} else {
//printf("Carta 2 %s venceu! \n", cidade2);
//}

// MENU INTERATIVO DO JOGO COM SWITCH 

int opçao;


printf("Vamos Jogar Super Trunfo \n");
printf("Escolha uma das opções para comparar: \n");
printf("1. População \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Pontos Turisticos \n");
printf("5. PIB per Capita \n");
printf("6. Densidade Demográfica \n");
printf("7. Super Poder \n");
scanf("%d", &opçao);

switch (opçao) {
    case 1:
    if (população > população2) {
        printf("A primeira Carta de código %s, cidade %s, do estado %s venceu!!! \n", código, cidade, estado1);
    } 
    else if (população < população2) {
        printf("A segunda carta de código %s, cidade %s , do estado %s venceu!!! \n", código2, cidade2, estado2);
    } 
    else {
        printf(" Houve empate!!! ");
    }
    break;
    
    case 2:
    if (Área > Área2) {
        printf("A primeira Carta de código %s, cidade %s, do estado %s venceu!!! \n", código, cidade, estado1);
    } 
    else if (Área < Área2) {
        printf("A segunda carta de código %s, cidade %s , do estado %s venceu!!! \n", código2, cidade2, estado2);
    } 
    else {
        printf(" Houve empate!!! ");
    }
    break;
    
    case 3:
    if (PIB > PIB2) {
        printf("A primeira Carta de código %s, cidade %s, do estado %s venceu!!! \n", código, cidade, estado1);
    } 
    else if (PIB < PIB2) {
        printf("A segunda carta de código %s, cidade %s , do estado %s venceu!!! \n", código2, cidade2, estado2);
    } 
    else {
        printf(" Houve empate!!! ");
    }
    break;
    
    case 4:
    if (Pontos > Pontos2) {
        printf("A primeira Carta de código %s, cidade %s, do estado %s venceu!!! \n", código, cidade, estado1);
    } 
    else if (Pontos < Pontos2) {
        printf("A segunda carta de código %s, cidade %s , do estado %s venceu!!! \n", código2, cidade2, estado2);
    } 
    else {
        printf(" Houve empate!!! ");
    }
    break;
    
    case 5:
    if (PPC > PPC2) {
        printf("A primeira Carta de código %s, cidade %s, do estado %s venceu!!! \n", código, cidade, estado1);
    } 
    else if (PPC < PPC2) {
        printf("A segunda carta de código %s, cidade %s , do estado %s venceu!!! \n", código2, cidade2, estado2);
    } 
    else {
        printf(" Houve empate!!! ");
    }
    break;
    
    case 6:
    if (densidadeinv < densidadeinv2) {
        printf("A primeira Carta de código %s, cidade %s, do estado %s venceu!!! \n", código, cidade, estado1);
    } 
    else if (densidadeinv > densidadeinv2) {
        printf("A segunda carta de código %s, cidade %s , do estado %s venceu!!! \n", código2, cidade2, estado2);
    } 
    else {
        printf(" Houve empate!!! ");
    }
    break;
    
    case 7:
    if (Super > Super2) {
        printf("A primeira Carta de código %s, cidade %s, do estado %s venceu!!! \n", código, cidade, estado1);
    } 
    else if (Super < Super2) {
        printf("A segunda carta de código %s, cidade %s , do estado %s venceu!!! \n", código2, cidade2, estado2);
    } 
    else {
        printf(" Houve empate!!! ");
    }
    break;
}





return 0;
} 
