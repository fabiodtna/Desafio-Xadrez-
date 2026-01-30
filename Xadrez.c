#include <stdio.h>
#include <stdlib.h>

int main(){

        // tabuleiro 
        char Tabuleiro[8][8];

        // limpar tabuleiro
        int cleartable(){
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    Tabuleiro[i][j] = '#';
                }
            }
        }

        // montar tabuleiro 
        int montartable(){
            for (int i = 0; i < 8; i++) {
                printf("  ");
                for (int j = 0; j < 8; j++) {
                        printf("%c ", Tabuleiro[i][j]);
                    }
                printf("\n");
                }
            printf("\n");
        }


        // variaveis das funçoes 
        int opcao = 0;
        int mover = 0;
        int sair = 1;

    printf("Jogo Xadrez com Torre Bispo e Rainha \n \n");

    do{
        // Começo do jogo! 
        cleartable();
        printf("Escolha uma das peças para fazer um movimento! \n");
        printf("1 = Torre ## 2 = Bispo ## 3 = Rainha \n \n");

        montartable();

        scanf("%d", &opcao);

        // limpar console!
            #ifdef _WIN32
                system("cls"); 
            #else
                system("clear"); 
            #endif

        // opçoes para se escolher qual peça usar 
        switch(opcao) {
            case 1:
                cleartable();    
                Tabuleiro[7][0] = 'T';
                montartable();
                printf("Foi escolhido a Torre! \n");

                printf(" ## Escolha uma Opção ## \n\n"
                        "1 = Mover para horizontal para direita -> \n"
                        "2 = Mover para vertical para cima ^ \n ");
                
                scanf("%d", &mover);
                
                
                // mover peça e pra onde ela ira!
                switch(mover){
                    case 1: 
                            printf("Mover para horizontal para direita -> \n");
                            cleartable();
                            Tabuleiro[7][7] = 'T';
                            montartable();  
                        break;

                    case 2:
                        printf("Mover para vertical para cima ^ \n");
                        cleartable();
                        Tabuleiro[0][0] = 'T';
                        montartable();  
                    break;

                    default: 
                        printf("Nenhuma das opçoes a cima!");
                    
                }


                break;
            case 2:
                cleartable();
                Tabuleiro[7][2] = 'B';
                montartable();
                printf("Foi escolhido a Bispo! \n");

                printf(" ## Escolha uma Opção ## \n\n"
                        "1 = Mover para diagonal para direita -> \n"
                        "2 = Mover para diagonal para esquerda <- \n ");

                scanf("%d", &mover);
                switch(mover){
                    case 1: 
                            printf("Mover para horizontal para direita -> \n");
                            cleartable();
                            Tabuleiro[2][7] = 'B';
                            montartable();  
                        break;

                    case 2:
                            printf("Mover para vertical para cima ^ \n");
                            cleartable();
                            Tabuleiro[5][0] = 'B';
                            montartable();  
                        break;

                    default: 
                        printf("Nenhuma das opçoes a cima!");
                    
                }
                break;
            case 3:
                cleartable();
                Tabuleiro[7][3] = 'R';
                montartable();
                printf("Foi escolhido a Rainha! \n");

                printf(" ## Escolha uma Opção ## \n\n"
                        "1 = Mover para horizontal para direita -> \n"
                        "2 = Mover para horizontal para esquerda <- \n "
                        "3 = Mover para diagonal para direita <- \n "
                        "4 = Mover para diagonal para esquerda <- \n "
                        "5 = Mover para vertical para cima ^ \n ");

                scanf("%d", &mover);
                switch(mover){
                    case 1: 
                            printf("Mover para horizontal para direita -> \n");
                            cleartable();
                            Tabuleiro[7][7] = 'R';
                            montartable();  
                        break;

                    case 2:
                            printf(" Mover para horizontal para esquerda <- \n");
                            cleartable();
                            Tabuleiro[7][0] = 'R';
                            montartable();  
                        break;

                    case 3: 
                            printf("Mover para diagonal para esquerda <- \n");
                            cleartable();
                            Tabuleiro[4][0] = 'R';
                            montartable();  
                        break;

                    case 4: 
                            printf("Mover para diagonal para direita <- \n");
                            cleartable();
                            Tabuleiro[3][7] = 'R';
                            montartable();  
                        break;

                    case 5: 
                            printf("Mover para vertical para cima ^ \n");
                            cleartable();
                            Tabuleiro[0][3] = 'R';
                            montartable();  
                        break;

                    default: 
                        printf("Nenhuma das opçoes a cima!");
                    
                }
                break;
            default:
                printf("Nenhuma das opçoes escolhidas! \n");
                break;
        }

    printf("sair do jogo? sim == 1 nao == 0 \n ");
    scanf("%d", &sair);


    // sair do jogo se digitado 1 no final!
    }while(sair != 1);

}




