#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Estrutura para armazenar as cartas
typedef struct {
    char estado[3];
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para imprimir os dados de uma carta, incluindo os derivados
void imprimir_carta(Carta c) {
    float densidade = c.populacao / c.area;
    float pib_capita = c.pib / c.populacao;
    float super_trunfo = c.area / c.populacao;
    float media = (c.populacao + c.area + c.pib + c.pontos_turisticos) / 4.0f;

    printf("Cidade: %s | Estado: %s\n", c.cidade, c.estado);
    printf("Código da carta: %s\n", c.codigo);
    printf("População: %d habitantes\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: R$ %.2f\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: R$ %.2f\n", pib_capita);
    printf("Super Trunfo: %.4f\n", super_trunfo);
    printf("Média dos atributos: %.2f\n", media);
}

// Função para comparar duas cartas
float calcula_nota_final(Carta c) {
    float super_trunfo = c.area / c.populacao;
    float media = (c.populacao + c.area + c.pib + c.pontos_turisticos) / 4.0f;
    return super_trunfo + media;
}

int main() {
    srand(time(NULL));
    int jogadores, escolha1, escolha2, escolha_pc;
    float nota1, nota2;

    // Cartas fixas pré-definidas
    Carta cartas[4] = {
        {"SP", "A01", "Pindamonhangaba", 170000, 730.2f, 20000.0f, 8},
        {"RJ", "A02", "Rio de Janeiro", 6500000, 1200.0f, 360000.0f, 35},
        {"PE", "B13", "Recife", 1500000, 218.5f, 45000.0f, 22},
        {"DF", "C07", "Brasília", 3100000, 5802.0f, 260000.0f, 20}
    };

    printf("*** Escolha o modo de jogo: ***\n");
    printf("1 - 1 Jogador (você x computador)\n");
    printf("2 - 2 Jogadores\n");
    scanf("%d", &jogadores);

    if(jogadores == 1) {
        printf("\nCartas disponíveis:\n");
        for(int i=0; i<4; i++) {
            printf("Carta %d:\n", i+1);
            imprimir_carta(cartas[i]);
            printf("----------------------------\n");
        }
        printf("Escolha o número da sua carta: ");
        scanf("%d", &escolha1);
        escolha1--; // Corrige índice para array

        // Sorteia uma carta diferente para o computador
        do {
            escolha_pc = rand() % 4;
        } while(escolha_pc == escolha1);

        printf("\nSua carta:\n");
        imprimir_carta(cartas[escolha1]);

        printf("\nCarta do computador:\n");
        imprimir_carta(cartas[escolha_pc]);

        nota1 = calcula_nota_final(cartas[escolha1]);
        nota2 = calcula_nota_final(cartas[escolha_pc]);

        printf("\nResultado:\n");
        if (nota1 > nota2) {
            printf("Parabéns! Sua carta venceu!\n");
        } else if (nota1 < nota2) {
            printf("A carta do computador foi melhor.\n");
        } else {
            printf("Empate!\n");
        }
    }
    else if(jogadores == 2) {
        printf("\nCartas disponíveis:\n");
        for(int i=0; i<4; i++) {
            printf("Carta %d:\n", i+1);
            imprimir_carta(cartas[i]);
            printf("----------------------------\n");
        }
        printf("Jogador 1, escolha o número da sua carta: ");
        scanf("%d", &escolha1);
        escolha1--;

        do {
            printf("Jogador 2, escolha o número da sua carta (diferente do Jogador 1): ");
            scanf("%d", &escolha2);
            escolha2--;
            if(escolha2 == escolha1) {
                printf("Essa carta já foi escolhida pelo Jogador 1. Escolha outra.\n");
            }
        } while(escolha2 == escolha1 || escolha2<0 || escolha2>3);

        printf("\nJogador 1:\n");
        imprimir_carta(cartas[escolha1]);
        printf("\nJogador 2:\n");
        imprimir_carta(cartas[escolha2]);

        nota1 = calcula_nota_final(cartas[escolha1]);
        nota2 = calcula_nota_final(cartas[escolha2]);

        printf("\nResultado:\n");
        if (nota1 > nota2) {
            printf("Jogador 1 venceu!\n");
        } else if (nota1 < nota2) {
            printf("Jogador 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
    }
    else {
        printf("Opção inválida!\n");
    }

    printf("\nFim do jogo!\n");

    return 0;
}