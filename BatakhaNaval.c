#include <stdio.h>

int main() {
    
    //Criação do tabuleiro 10x10 de Batalha Naval
    //Todos com valor = 0
    int tabuleiro [10][10] = {0};
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro [i][j] = 0;
        }
    }
    
         
    //Criação do návio vertical  
    //Posição no mapa
    int coluna = 4;
    int linha = 2;
    
    for(int i = 0; i < 3; i++){
        tabuleiro [linha + i][coluna] = 3;
        }
        
    //Criação do navio horizontal 
    //Posição no mapa
    int coluna1 = 6;
    int linha1 = 8;
    
    for(int j = 0; j < 3; j++){
        tabuleiro [linha1][coluna1 + j] = 3;
    }
        
    
    //Criação do primeiro navio diagonal 
    //Posição no mapa
    int coluna2 = 7;
    int linha2 = 2;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tabuleiro [linha2 - i][coluna2 - i] = 3;
        }
    }
    
    //Criação do segundo navio em diagonal
    
    int coluna3 = 3;
    int linha3 = 6;
    
    for(int i = 0; i < 3; i++){
        tabuleiro [linha3 - i][coluna3 - i] = 3;
    }
    
    //Criação do octaedro
    //Posição no mapa
    int coluna4 = 1;
    int linha4 = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) { 
           if (j % 2 != 0) {
                tabuleiro [linha4 + i][coluna4 + j] = 3; 
            } else if (i % 2 != 0){
                tabuleiro [linha4 + i][coluna4 + j] = 3;
            } else {
                tabuleiro [linha4 + i][coluna4 + j] = 0; 
            }  
        }
         
    }
    
   //Criação da cruz 
   //Posição no mapa 
   int coluna5 = 0; 
   int linha5 = 7; 
   
   for (int i = 0; i < 3; i++) { 
       for (int j = 0; j < 5; j++) { 
           if ((j % 2 == 0) && (j < 3) && (j > 1)) { 
               tabuleiro [linha5 + i][coluna5 + j] = 3; 
           } else if (i % 2 != 0){ 
               tabuleiro [linha5 + i][coluna5 + j] = 3; 
            } else { tabuleiro [linha5 + i][coluna5 + j] = 0; 
                
            }
       } 
   }
    
    //Criação do cone
    //Posição no mapa
    int linha6 = 4;
    int coluna6 = 7;   // coluna central do cone

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {

        if (j >= (2 - i) && j <= (2 + i)) {
            tabuleiro[linha6 + i][coluna6 - 2 + j] = 3;
        } else {
            tabuleiro[linha6 + i][coluna6 - 2 + j] = 0;
        }

        }
    } 
    //Exibição do mapa na tela
     for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
     }
     
    return 0;
}
