#include <stdio.h>
 
int main() {
    //Movimentação da torre 5 casas para a direita
    printf("Movimentação da Torre\n");
    for(int i = 0; i < 5; i++){
    printf("Direita \n");
    }
    
    printf("\n");
    //Movimentação do Bispo cinco casas na diagonal para cima a direira
    printf("Movimentação do bispo\n");
    int Bispo = 1;
    
    while (Bispo <= 5) {
        printf("Cima, Direita\n");
        Bispo++;
    }
    
    printf("\n");
    
    //Movimentação da Rainha, oito casas a esquerda
    
    int Rainha = 0;
    printf("Movimentação da rainha");
    
    do{
        printf("Esquerda\n");
        Rainha++;
    } while (Rainha <= 8);
    
    return 0;
}
