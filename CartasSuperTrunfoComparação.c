#include <stdio.h>

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

PPC = (float) PIB / população;
densidade = (float) população / Área;



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

PPC2 = (float) PIB2 / população2;
densidade2 = (float) população2 / Área2;




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




//Densidade invertida
float densidadeinv = 1 / densidade;
float densidadeinv2 = 1 / densidade2;




//DESAFIO NOVATO - TEMA 2 - Comparando as cartas
//Usar if-else para comparar os parâmetros das cartas de Super Trunfo


//Comparar população das cartas
printf("COMPARAÇÃO DAS CARTAS \n");
printf("Comparação de população \n");

if (população > população2) {
   printf("Carta 1 %s venceu! \n", cidade);
} else {
  printf("Carta 2 %s venceu! \n", cidade2);
}



//Comparar Área
printf("Comparação de Área \n");
if (Área > Área2) {
printf("Carta 1 %s venceu! \n", cidade);
} else {
printf("Carta 2 %s venceu! \n", cidade2);
}


//Comparar PIB
printf("Comparação do PIB \n");
if (PIB > PIB2) {
 printf("Carta 1 %s venceu! \n", cidade);
} else { 
 printf("Carta 2 %s venceu! \n", cidade2);
}


//Comparando os pontos turisticos
printf("Comparação dos Pontos Turisticos \n");
if (Pontos > Pontos2) {
printf("Carta 1 %s venceu! \n", cidade);
} else {
printf("Carta 2 %s venceu! \n", cidade2);
}


//Comparando o PIB per Capita
printf("Comparação do PIB per capita \n");
if (PPC > PPC2) {
printf("Carta 1 %s venceu! \n", cidade);
} else {
printf("Carta 2 %s venceu! \n", cidade2);
}


//Comparando Densidade Demográfica
printf("Comparando Densidade Demográfica \n");
if (densidadeinv < densidadeinv2) {
printf("Carta 1 %s venceu! \n", cidade);
} else {
printf("Carta 2 %s venceu! \n", cidade2);
}


return 0;
} 
