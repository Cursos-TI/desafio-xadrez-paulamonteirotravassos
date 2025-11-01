#include <stdio.h>

      /*  int main(){

         printf("*** Desafio Xadrez *** \n");

        int torre =5, bispo =5, rainha=8;

        // Usando o FOR --- Nivel Novato ---
        printf("Movimentação da Torre ( 5 Casas Para Direita): \n");   
        for( int i =1; i<=torre; i++) 
        {
            // A TORRE SE MOVE EM LINHA PARA A DIREITA   
            printf("Direita \n");
            
        } 
        
        printf("\n");

        // Usando o WHILE. ---Nivel iniciante ---
        printf("Movimentação Do Bispo ( 5 Casas na Diagonal para cima e para Direita): \n");
        int passos =0;
        while (passos < bispo)
        {
            // BISPO SE MOVE NA DIAGONAL,  DUAS DIREÇÕES, CIMA E DIREITA
            printf(" Cima Direita\n");
            passos++;
        }
        
        printf(" \n");

        // usando o DO WHILE    
        printf("Movimento da Rainha ( 8 casas para a Esquerda)\n");
        int passos_rainha = 0;

        do
        {
            printf("Esquerda\n");
            passos_rainha ++;

        } while (passos_rainha<rainha);
        
        printf("\n");

        // --- Nivel Mestre---
        printf("Movimentação Cavalo, 2 casas para Cima e 1 para a Esquerda:\n");

        for( int i=0; i<2; i++)
        {
            printf("Baixo\n");
        }

        int casa_esquerda=0;
        while(casa_esquerda<1)
        {
            printf("Esquerda\n");
            casa_esquerda++;
        } */

        
        // ---- Funções Recursivas ----

        // Torre -> movimento recursivo
        void moverTorre(int casas){
            if (casas == 0) return ;
            printf("Torre -> Direita\n");
            moverTorre(casas-1);
        }

        // Bispo -> movimento recursivo com loops aninhado
        void moverBispo( int casas){
            if (casas == 0) return;
            for (int i=0; i<1; i++){
                for(int j=0; j<1; j++){
                    printf("Bispo -> Direita\n");
                }
            }
            moverBispo (casas -1);
        }

        // Rainha -> movimento recursivo 
        void moverRainha( int casas){
            if ( casas == 0) return;
            printf("Rainha -> esquerda\n");
            moverRainha (casas -1);
        }

        int main (){

            printf("*** Desafio Xadrez Mestres ***\n");

            int torre=5, Bispo=5, rainha=8;

            // torre 
            printf("Movimentação da Torre (%d Casas Para Direita:)\n",torre);
            moverTorre(torre);
            printf("\n");
            
            //Bispo
            printf("Movimentação do Bispo (%d Casas Na Diagonal Cima Direita:)\n",Bispo);
            moverBispo(Bispo);
            printf("\n");

            //rainha
            printf("Movimentação da Rainha (%d Casas Para a Esquerda:)\n",rainha);
            moverRainha(rainha);
            printf("\n");

            //Cavalo 
            printf("Movimentação do cavalo (Em L: 2 Casas Para Cima e 1 Para a Direita):\n");
            for(int i=0; i<3; i++){
                if(i<2){
                    printf("Cavalo -> Cima\n");
                    continue;
                }
                if(i == 2){
                    int direita=0;
                    while(direita<1){
                        printf("Calavo -> Direita\n");
                        direita++;
                        break;
                    }
                }
            }



        return 0;
    }
