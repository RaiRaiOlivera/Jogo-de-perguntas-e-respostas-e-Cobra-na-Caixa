#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ShowDoMilhao(){

 char resposta;
    int pontuacao = 0;
    
    printf("Bem vindo ao jogo perguntas e respostas, esteja preparado, ja vai começar!! \n Pergunta numero 1:\n");
    printf("Quais desses sao operadores logicos?\n");
    printf("A) Ou, E, Também \nB) Ou, E, Ou exclusivo \nC) E, Logico, Claro \nD) Ou, E, E exclusivo \nResponda:");
    scanf(" %c", &resposta);
    
    if(resposta == 'B' || resposta == 'b'){
        printf("Parabens, alternativa correta!\n");
        pontuacao++;
    }else{
        printf("Alternativa incorreta, esperava mais :(, mas vamos lá");
    }
    
    printf("Pergunta numero 2:\nA raiz quadrada de 4 + 12 tem como resultado:\n");
    printf("A) 14\nB) 4 \nC) 6\nD)16\nResponda: ");
    scanf(" %c", &resposta);
    
    if(resposta == 'A' || resposta == 'a'){
        printf("Parabens, alternativa correta!\n");
        pontuacao++;
    }else{
        printf("Alternativa incorreta, esperava mais :(, mas vamos lá\n");
    }
    printf("Pergunta numero 3:\nQual a capital do estado PA?\n");
    printf("A) Curitiba\nB) Fortaleza \nC) Belem\nD)Florianopolis\nResponda: ");
    scanf(" %c", &resposta);
    
    if(resposta == 'C' || resposta == 'c'){
        printf("Parabens, alternativa correta!\n");
        pontuacao++;
    }else{
        printf("Alternativa incorreta, esperava mais :(, mas vamos lá\n");
    }
    printf("Pergunta numero 4:\nQual a montanha mais alta do mundo?\n");
    printf("A) Pao de Acucar\nB) Duna de Salinas \nC) Monte Everaldo\nD) Monte Everest\nResponda: ");
    scanf(" %c", &resposta);
    
    if(resposta == 'D' || resposta == 'd'){
        printf("Parabens, alternativa correta!\n");
        pontuacao++;
    }else{
        printf("Alternativa incorreta, esperava mais :(, mas vamos lá\n");
    }
    printf("Pergunta numero 5:\nQual o maior planeta do sistema solar?\n");
    printf("A) Saturno\nB) Plutão \nC) Jupiter\nD)Terra\nResponda: ");
    scanf(" %c", &resposta);
    
    if(resposta == 'C' || resposta == 'c'){
        printf("Parabens, alternativa correta!\n");
        pontuacao++;
    }else{
        printf("Alternativa incorreta, esperava mais :(, mas vamos lá\n");
    }
    printf("Quiz finalizado, seus pontos finais foram iguais a: %d\n", pontuacao);
    return 0;
}



int CobraNaCaixa(){
    srand(time(NULL));
    int c1, c2, c3, c4, c5 = 0;

    srand(time(0));

    int random = rand() % 6;

    switch(random){
        case 1: 
        c1 = 1;
        break;
        case 2:
        c2 = 1;
        break;
        case 3:
        c3 = 1;
        case 4:
        c4 = 1;
        break;
        case 5:
        c5 = 1;
        break;
        default:
        printf("erro! erro!!!!!!!!!!");
        break;
    }

    int random2 = rand() % 6;
    while (1){
        if(random2 != random){
            break;
        } else {
            random2  = rand()%6;
        }
    }

    switch(random2){
        case 1: 
        c1 = 2;
        break;
        case 2:
        c2 = 2;
        break;
        case 3:
        c3 = 2;
        case 4:
        c4 = 2;
        break;
        case 5:
        c5 = 2;
        break;
        default:
        printf("erro! erro!!!!!!!!!!");
        break;
    }

    int val1 = 1;
    int val2 = 1;
    int val3 = 1;
    int val4 = 1;
    int val5 = 1;

    char jogador1[20];
    char jogador2[20];

    printf("insira seu nome, jogador 1: ");
    scanf("%s", &jogador1);
    printf("insira seu nome, jogador 2: ");
    scanf("%s", &jogador2);

    printf("COBRA NA CAIXA\n");
    printf("escolha uma caixa de 1 a 5 (digite o numero no teclado). Os jogadores jogam em turnos revezados.\n");
    printf("Se encontrarem o botão, vocês vencem. Caso contrário, é uma derrota.\n");

    int i;
    for(i = 0; i < 5; i++){
        int decisao;
        if(i%2 != 0){
        printf("escolha sua caixa, %s. Você ainda tem %d caixas restantes.", jogador1, 5 - i);
        } else {
        printf("escolha sua caixa, %s. Você ainda tem %d caixas restantes.", jogador2, 5 - i);
        }
        scanf("%d", &decisao);
        switch(decisao){
            case 1:
            if(val1 == 0){
                printf("essa caixa já foi escolhida!\n");
                i--;
            } else if(c1 == 1){
                printf("Você achou o botão! vitória!\n");
                main();
                break;
            } else if (c1 == 2){
                printf("Você achou a cobra! Derrota.\n");
                main();
                break;
            } else {
                printf("essa caixa esta vazia.\n");
                val1 = 0;
            }
            break;

            case 2:
            if(val2 == 0){
                printf("essa caixa já foi escolhida!\n");
                i--;
            } else if(c2 == 1){
                printf("Você achou o botão! vitória!\n");
                main();
                break;
            } else if (c2 == 2){
                printf("Você achou a cobra! Derrota.\n");
                main();
                break;
            } else {
                printf("essa caixa esta vazia.\n");
                val2 = 0;
            }
            break;

            case 3:
            if(val3 == 0){
                printf("essa caixa já foi escolhida!\n");
                i--;
            } else if(c3 == 1){
                printf("Você achou o botão! vitória!\n");
                main();
                break;
            } else if (c3 == 2){
                printf("Você achou a cobra! Derrota.\n");
                main();
                break;
            } else {
                printf("essa caixa esta vazia.\n");
                val3 = 0;
            }
            break;

            case 4:
            if(val4 == 0){
                printf("essa caixa já foi escolhida!\n");
                i--;
            } else if(c4 == 1){
                printf("Você achou o botão! vitória!\n");
                main();
                break;
            } else if (c4 == 2){
                printf("Você achou a cobra! Derrota.\n");
                main();
                break;
            } else {
                printf("essa caixa esta vazia.\n");
                val4 = 0;
            }
            break;

            case 5:

            if(val5 == 0){
                printf("essa caixa já foi escolhida!\n");
                i--;
            } else if(c5 == 1){
                printf("Você achou o botão! vitória!\n");
                main();
                break;
            } else if (c5 == 2){
                printf("Você achou a cobra! Derrota.\n");
                main();
                break;
            } else {
                printf("essa caixa esta vazia.\n");
                val5 = 0;
            }
            break;
            
           default:
            printf("insira um numero valido!!\n");
            i--;
        }   

        
    }
}

int main(){


while (1){
    printf("JOGOS\n\n escolha o que você deseja jogar:\n");
    printf("(1) pergunta e respostas\n(2) cobra na caixa\n(3) sair\n");
    int escolha;
    scanf("%d", &escolha);

    switch(escolha){
        
        case 1:
        ShowDoMilhao();
        break;
    

        case 2:
        CobraNaCaixa();
        break;

        case 3:
        exit(0);
        break;

        default:
        printf("insira um numero valido!!!");
    }
}
}