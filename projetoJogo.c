#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    int opcao = 0;
    srand(time(NULL));
    
   while( opcao != 4){

        printf("======MENU DE JOGOS======\n");
         printf("1. Pergunta e resposta\n");
          printf("2. Cobra na caixa\n");
           printf("3. Gousmas war\n");
            printf("4. Sair\n");
                scanf("%d", &opcao);
    
    // JOGO 1: PERGUNTAS E RESPOSTAS
    if(opcao == 1){
        // A variável jogarnovamente é usada para controlar o loop do jogo.
        int jogarnovamente;

        // O loop do-while é usado para garantir que o jogo seja executado pelo menos uma vez, e depois permite que o jogador escolha se deseja jogar novamente ou voltar ao menu principal.
         do {
            int score = 0;
            char resposta1, resposta2, resposta3, resposta4, resposta5;
         
        printf("==BEM VINDO AO PERGUNTAS E RESPOSTAS! Nesse jogo, voce tera 5 perguntas com 4 alternativas cada uma, ao acertar uma pergunta voce pontua 5 pontos==\n\n");

            printf("1) Qual o tamanho em bits de uma variavel double?\n");
                printf("a) 96\nb) 32\nc) 64\nd) 16\n");
                    scanf(" %c", &resposta1);

                    if(resposta1 == 'c' ){
                        printf("Resposta correta, voce ganhou 5 pontos\n");
                        score += 5;
                    }
                    else{
                        printf("Resposta incorreta, a resposta certa era letra c) 64\n");
                    }
                   
        printf("2) Qual a raiz de -1?\n");
                printf("a) 1\nb) i\nc) -1\nd) 10\n");
                    scanf(" %c", &resposta2);

                    if(resposta2 == 'b'){
                        printf("Resposta correta, voce ganhou 5 pontos\n");
                        score += 5;
                    }
                    else{
                        printf("Resposta incorreta, a resposta era b) i\n");
                    }

        printf("3) Qual proposicao apresenta um parentese opcional?\n");
                    printf("a) (p v q) ^ r\nb) (p -> q) v (r -> s)\nc) p <-> (q -> r)\nd) (p -> q) v r\n");
                        scanf(" %c", &resposta3);

                        if(resposta3 == 'c'){
                            printf("Resposta correta, voce ganhou 5 pontos\n");
                            score += 5;
                        }
                        else{
                            printf("Resposta incorreta, a resposta era c) p <-> (q -> r)\n");
                        } 
        printf("4) Quantos paises possui a America do Sul?\n");
                    printf("a) 10\nb) 11\nc) 13\nd) 12\n");
                        scanf(" %c", &resposta4);

                        if(resposta4 == 'd'){
                            printf("Resposta correta, voce ganhou 5 pontos\n");
                            score += 5;
                        }
                        else{
                            printf("Resposta incorreta, a resposta era d) 12\n");
                        } 
        printf("5) Quem ganhou o GOTY (Game of The Year) de 2018\n");
                    printf("a) God Of War\nb) Red Dead Redemption2\nc) Marvel: Spider-Man\nd) Elden Ring\n");
                        scanf(" %c", &resposta5);
                                
                        if(resposta5 == 'a'){
                            printf("Resposta correta, voce ganhou 5 pontos\n");
                            score += 5;
                        }
                        else{
                            printf("Resposta incorreta, a resposta era a) God of War\n");
                        } 
                            printf("Seu score foi: %d\n", score);

                            printf("\n1. Jogar novamente\n2. Voltar ao menu principal\nEscolha: ");
                                scanf("%d", &jogarnovamente);
                     } while(jogarnovamente == 1);
            }
                    
    //JOGO 2: COBRA NA CAIXA    
    
    if(opcao == 2)
    {
        int jogarnovamente2 = 1;
        while(jogarnovamente2 == 1){
            int caixacobra, caixabotao, escolha, turno;
            int nome1, nome2;
            int caixa1 = 0, caixa2 = 0, caixa3 = 0, caixa4 = 0, caixa5 = 0;
            int continuarjogo = 1;
        
            
        printf("==BEM VINDO AO COBRA NA CAIXA! A história do jogo se passa dentro de uma tumba egípcia onde dois exploradores ficaram presos. No centro da sala, há cinco caixas: uma delas contém o botão para abrir a porta que caso voce ache, ganha o jogo enquanto uma outra esconde uma cobra mortal e caso voce a encontre, perde o jogo. A cada rodada (final do jogo), o local do botão e da cobra muda de caixa de forma aleatória.==\n\n");

         printf(" 1) Alex\n 2) Joe\n 3) Marcos\n 4) Mortheus\n 5) Sasha\n 6) Rayleigh\n 7) Kayle\n");
            printf("Escolha o explorador 1: ");
             scanf("%d", &nome1);
             
            printf("Escolha o explorador 2: ");
             scanf("%d", &nome2);

            // Gerar aleatoriamente quem começa jogando
            turno = (rand() %2) + 1;
            printf("Quem comeca jogando e o explorador %d\n\n", turno);

            // Gerar aleatoriamente a posição do botão e da cobra
            caixabotao = (rand() %5) + 1;

            // Garantir que a cobra e o botão não estejam na mesma caixa
            do{
                caixacobra = (rand() %5) +1;
            }while(caixacobra == caixabotao);

            // Loop principal do jogo
            while(continuarjogo){
                printf("===Turno do jogador %d===\n", turno);
                printf("Escolha uma caixa de 1 a 5: ");
                scanf("%d", &escolha);

                int caixaAberta = 0; // serve para verificar se a caixa escolhida já foi aberta, caso seja verdade, a variável caixaAberta é setada para 1, indicando que a caixa já foi aberta, caso contrário, ela permanece 0, indicando que a caixa ainda não foi aberta. Essa verificação é importante para garantir que os jogadores não possam escolher caixas que já foram abertas anteriormente.

                if(escolha == 1 && caixa1 == 1){ // verifica se a caixa escolhida é a caixa 1 e se ela já foi aberta, caso seja verdade, a variável caixaAberta é setada para 1, indicando que a caixa já foi aberta
                    caixaAberta = 1; 
            }   else if (escolha == 2 && caixa2 == 1){//
                    caixaAberta = 1;
            }   else if (escolha == 3 && caixa3 == 1){//
                    caixaAberta = 1;
            }   else if (escolha == 4 && caixa4 == 1){//
                    caixaAberta = 1;
            }   else if (escolha == 5 && caixa5 == 1){//
                    caixaAberta = 1;
            }

                // Verificar se a escolha é válida e se a caixa já foi aberta
                if (escolha < 1 || escolha > 5){
                    printf("Caixa invalida. Tente novamente.\n");                               
                } else if(caixaAberta){
                    printf("Caixa ja foi aberta. Tente novamente.\n");
                }

                // Se a escolha for válida e a caixa ainda não tiver sido aberta será marcada como aberta
                else{
                    if(escolha == 1){
                        caixa1 = 1;
                    }
                    else if(escolha == 2){
                        caixa2 = 1;
                    }
                    else if(escolha == 3){
                        caixa3 = 1;
                    }
                    else if(escolha == 4){
                        caixa4 = 1;
                    }
                    else if(escolha == 5){
                        caixa5 = 1;
                    }

                    // Verificar o resultado da escolha
                   if( escolha == caixabotao){
                        printf("O BOTAO FOI ENCONTRADO! O explorador %d foi o vencedor \n", turno);
                        continuarjogo = 0;
                    } 
                    else if(escolha == caixacobra){
                        printf("A COBRA FOI ENCONTRADA! o explorador %d perdeu o jogo \n", turno);
                        continuarjogo = 0;
                    }
                    else{
                        printf("Caixa Vazia. Continue o jogo\n");
                        if(turno == 1){
                            turno = 2;
                        }
                        else{
                            turno = 1;}
                    }
                }
            }
                    printf("\n1. Jogar novamente\n2. Voltar ao menu principal\nEscolha: ");
                    scanf("%d", &jogarnovamente2);  
                }          
            }

            // JOGO 3: GOUSMAS WAR
            
            else if(opcao == 3){
            int jogarNovamente3 = 1;
            while(jogarNovamente3 == 1){
                
                int f1 = 1, f2 = 1, f3 = 1, f4 = 1;
                int turno = 1;
                int vencedor = 0;

                printf("==BEM VINDO AO GOUSMAS WAR! O jogo é baseado em dois jogadores, cada um controlando duas gousmas com o nivel de furia 1 cada uma. O objetivo é destruir as gousmas do adversário, fazendo com que a força delas ultrapasse 5 ou caia para 0 ou menos. Os jogadores podem escolher entre atacar a gousma do adversário ou dividir a força entre suas próprias gousmas. O jogo continua até que um dos jogadores perca ambas as gousmas, declarando o outro jogador como vencedor.==\n");

                // O loop principal do jogo, continua enquanto não houver um vencedor.
                while(vencedor == 0)
                {
                    printf("\n=====STATUS=====");
                    printf("\nJ1: %d %d\n", f1, f2);
                    printf("J2: %d %d\n", f3, f4);
                    
                    printf("\nTURNO DO JOGADOR %d\n", turno);
                    printf("1. ATACAR\n2. DIVIDIR\nESCOLHA SUA ACAO: ");

                    int acao;
                    scanf("%d", &acao);
                    while( acao < 1 || acao > 2){
                        printf("ACAO INVALIDA, ESCOLHA ENTRE 1 OU 2\nESCOLHA: ");
                        scanf("%d", &acao);
                    }
                    
                    //ATACAR
                    if(acao == 1)
                    {
                        int atacante, alvo;
                        printf("QUAL SUA GOSMA QUE IRA ATACAR (1 OU 2): ");
                        scanf("%d", &atacante);
                                              
                        if(turno == 1){
                            while((atacante == 1 && (f1 > 5 || f1 <= 0)) || (atacante == 2 && (f2 > 5 || f2 <=0 )) || (atacante < 1 || atacante > 2)){
                                printf("GOSMA JA DESTRUIDA OU INVALIDA, ESCOLHA A GOSMA ENTRE 1 OU 2: ");
                                scanf("%d", &atacante);
                            } 
                        } else {
                            while((atacante == 1 && (f3 > 5 || f3 <= 0)) || (atacante == 2 && (f4 > 5 || f4 <=0 )) || (atacante < 1 || atacante > 2)){
                                printf("GOSMA JA DESTRUIDA OU INVALIDA, ESCOLHA A GOSMA ENTRE 1 OU 2: ");
                                scanf("%d", &atacante);
                            }
                        } 
                        
                        // O jogador escolhe qual gosma inimiga irá atacar.
                        printf("QUAL GOSMA INIMIGA VOCE IRA ATACAR (1 OU 2): ");
                        scanf("%d", &alvo);
                        
                        if(turno == 1){
                            while((alvo == 1 && (f3 > 5 || f3 <= 0)) || (alvo == 2 && (f4 > 5 || f4 <=0 )) || (alvo < 1 || alvo > 2)){
                                printf("ALVO JA DESTRUIDO OU INVALIDO, ESCOLHA O ALVO ENTRE 1 OU 2: ");
                                scanf("%d", &alvo);
                            } 
                        } else {
                            while((alvo == 1 && (f1 > 5 || f1 <= 0)) || (alvo == 2 && (f2 > 5 || f2 <=0 )) || (alvo < 1 || alvo > 2)){
                                printf("ALVO JA DESTRUIDO OU INVALIDO, ESCOLHA O ALVO ENTRE 1 OU 2: ");
                                scanf("%d", &alvo);
                            }
                        }

                        // está alocando o valor da furia da gosma atacante para a variável forca, e depois adicionando esse valor à gosma alvo. 
                        int forca;
                        if(turno == 1){
                            if(atacante == 1) forca = f1;
                            else forca = f2;
                            
                            if( alvo == 1) f3 += forca;
                            else f4 += forca;
                        } else {
                            if(atacante == 1) forca = f3;
                            else forca = f4;
                            
                            if( alvo == 1) f1 += forca;
                            else f2 += forca;
                        }
                    } 

                    //DIVIDIR
                    else if (acao == 2) 
                    {
                        if (turno == 1 && f1 <= 1 && f2 <= 1) {
                            printf("\nAVISO: Voce nao tem gosmas com furia suficiente (maior que 1) para dividir! Escolha Atacar.\n\n");
                            continue; 
                        } 
                        else if (turno == 2 && f3 <= 1 && f4 <= 1) {
                            printf("\nAVISO: Voce nao tem gosmas com furia suficiente (maior que 1) para dividir! Escolha Atacar.\n\n");
                            continue; 
                        }

                        // SE TUDO ESTIVER OK, CONTINUA A DIVISÃO NORMALMENTE
                        int doadora, quantidade, maximo;
                        printf("DIGITE A GOSMA DOADORA (1 OU 2): ");
                        scanf("%d", &doadora);

                        if (turno == 1)
                        {
                            while((doadora == 1 && f1 <= 1 ) || (doadora == 2 && f2 <= 1) || (doadora < 1 || doadora > 2)){
                                printf("GOSMA INVALIDA OU SEM FURIA PRA DOAR, ESCOLHA UMA GOSMA VALIDA: ");
                                scanf("%d", &doadora);
                            }

                            // A quantidade máxima que pode ser doada é a furia da gosma doadora menos uma unidade, para garantir que a gosma doadora não seja destruída durante a divisão.
                            if(doadora == 1) maximo = f1 - 1;
                            else maximo = f2 - 1;
                                
                            printf("QUANTO QUER TRANSFERIR (1 A %d), PARA A OUTRA GOSMA: ", maximo);
                            scanf("%d", &quantidade);
                                
                            while( (quantidade < 1 || quantidade > maximo)) {
                                printf("VALOR INVALIDO (UM VALOR VALIDO PARA A DIVISAO EH A QUANTIDADE DE FURIA EM SUA MAO MENOS UMA UNIDADE): ");
                                scanf("%d", &quantidade);
                            }

                            // A gosma doadora tem sua furia reduzida pela quantidade doada, enquanto a outra gosma do mesmo jogador tem sua furia aumentada pela mesma quantidade. 
                            if(doadora == 1){
                                f1 -= quantidade;
                                f2 += quantidade;
                            } else{
                                f2 -= quantidade;
                                f1 += quantidade;
                            }   
                        } else {
                             while((doadora == 1 && f3 <= 1 ) || (doadora == 2 && f4 <= 1) || (doadora < 1 || doadora > 2)){
                                printf("GOSMA INVALIDA OU SEM FURIA PRA DOAR, ESCOLHA UMA GOSMA VALIDA: ");
                                scanf("%d", &doadora);
                            }
                            if(doadora == 1) maximo = f3 - 1;
                            else maximo = f4 - 1;
                                
                            printf("QUANTO QUER TRANSFERIR (1 A %d), PARA A OUTRA GOSMA: ", maximo);
                            scanf("%d", &quantidade);
                                
                            while( (quantidade < 1 || quantidade > maximo)) {
                                printf("VALOR INVALIDO (UM VALOR VALIDO PARA A DIVISAO EH A QUANTIDADE DE FURIA EM SUA MAO MENOS UMA UNIDADE): ");
                                scanf("%d", &quantidade);
                            }
                            if(doadora == 1){
                                f3 -= quantidade;
                                f4 += quantidade;
                            } else{
                                f4 -= quantidade;
                                f3 += quantidade;
                            }
                        }
                    }
                    
                    // Verificar se alguma gosma foi destruída
                    if (f1 > 5 || f1 <= 0) f1 = 0;
                    if (f2 > 5 || f2 <= 0) f2 = 0;
                    if (f3 > 5 || f3 <= 0) f3 = 0;
                    if (f4 > 5 || f4 <= 0) f4 = 0;

                    // Verificar se há um vencedor
                    if (f1 == 0 && f2 == 0) vencedor = 2;
                    else if (f3 == 0 && f4 == 0) vencedor = 1;
                    
                    // Alternar o turno
                    if(turno == 1) turno = 2;
                    else turno = 1;
                }

                printf("\nO JOGADOR %d FOI O VENCEDOR!!!\n", vencedor);
                printf("\n1. Jogar Novamente\n2. Sair para o menu principal.\nEscolha: ");
                scanf(" %d", &jogarNovamente3);
            }
        }
    }
    return 0;
}
