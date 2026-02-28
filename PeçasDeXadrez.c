#include <stdio.h>

//Recursividade das peças
//Movimento da Torre
void moverTorre(int casas){
    if (casas > 0){
    printf("Direita\n");
    moverTorre(casas - 1);
    }
}

//Movimento do Bispo
   void moverBispo(int casas){
       if (casas > 0){
       printf("Direita, Cima\n");
       moverBispo(casas - 1);
   }
   }   
   
   //Movimento da Rainha
   void moverRainha(int casas){
       if (casas > 0){
       printf("Esquerda\n");
       moverRainha(casas - 1);
   }
}


//Comandos das peças
int main() {
    
//Torre    
printf("Movimento da torre\n") ;   
    int moviment = 5;
moverTorre(moviment);

 printf("\n");
 
 //Bispo
printf("Movimento do Bispo\n");
int Bispo = 5;
moverBispo(Bispo);

printf("\n");

//Rainha
 printf("Movimento da rainha");
int Rainha = 9;
moverRainha(Rainha);

printf("\n");

//Movimento em "L' do cavalo com 
 // Movimento do Cavalo
    printf("Movimentação do cavalo\n");
    
    int A = 1;
    
    for(int C = 1; C <=1; C++){
        while(A <= 2) {
            printf("Baixo\n");
            A++;
        }
        printf("Esquerda\n");
    }
    
    
    return 0;
}
