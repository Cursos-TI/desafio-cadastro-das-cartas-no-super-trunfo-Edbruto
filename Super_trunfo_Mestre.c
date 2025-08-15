#include <stdio.h>

int main() {
    //Parametros dos dados.
    char estado[3];
    char codigo_carta[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    double Densidade_populacional;
    double PIB_per_capita;


    //Mensagem de boas-vindas
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Vamos coletar algumas informações sobre a cidade.\n");

    //Coleta dos dados.
    printf("A qual estado pertence essa cidade? \n");
    scanf("%2s", estado);

    printf("Digite um código para identificar a cidade: \n");
    scanf("%3s", codigo_carta);

    printf("Qual o nome da cidade? \n");
    scanf("%s", cidade);

    printf("Quantas pessoas habitam nela? \n");
    scanf("%i", &populacao);

    printf("Qual o tamanho da cidade (em km²)? \n");
    scanf("%f", &area);

    printf("Qual o seu valor do PIB? \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos tem a cidade? \n");
    scanf("%d", &pontos_turisticos);

    // Caulculando a densidade populacional
    Densidade_populacional = (float) populacao / area;

    // Calculando o PIB per capita
    PIB_per_capita = (float) pib / populacao;

    // Calculando o Super Trunfo
    float super_trunfo = (float) area / populacao;

    // Somando e fazendo a média das informações
    float cart_1 = (populacao + area + pib + pontos_turisticos) / 4;
    float informações_finais1 = super_trunfo + cart_1;

    // Exibindo as informações
    printf("\nCidade: %s | Estado: %s\n", cidade, estado);
    printf("Código da carta: %s\n", codigo_carta);
    printf("O tamanho da cidade é de %.2f km² com %d habitantes\n", area, populacao);
    printf("O seu PIB é de R$ %.2f e tem %d pontos turísticos\n", pib, pontos_turisticos);
    printf("A densidade populacional é de %.2ld habitantes por km²\n", Densidade_populacional);
    printf("O PIB per capita é de R$ %.2ld\n", PIB_per_capita);
    printf("O Super Trunfo da cidade é de %.2f\n", super_trunfo);
    printf("\nMédia das informações da carta: %.2f\n", cart_1);

    // Segunda carta do Super Trunfo
    printf("\n\n");
    printf("\n Insira a segunda carta do Super Trunfo!\n");
    
    // Carta 2
    //Parametros dos dados.
    char estado2[3];
    char codigo_carta2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    double Densidade_populacional2;
    double PIB_per_capita2;

    //Mensagem de boas-vindas
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Vamos coletar algumas informações sobre a cidade.\n");

    //Coleta dos dados.
    printf("A qual estado pertence essa cidade? \n");
    scanf("%2s", estado2);

    printf("Digite um código para identificar a cidade: \n");
    scanf("%3s", codigo_carta2);

    printf("Qual o nome da cidade? \n");
    scanf("%s", cidade2);

    printf("Quantas pessoas habitam nela? \n");
    scanf("%i", &populacao2);

    printf("Qual o tamanho da cidade (em km²)? \n");
    scanf("%f", &area2);

    printf("Qual o seu valor do PIB? \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem a cidade? \n");
    scanf("%d", &pontos_turisticos2);

    // Caulculando a densidade populacional
    Densidade_populacional = (float) populacao2 / area2;

    // Calculando o PIB per capita
    PIB_per_capita = (float) pib2 / populacao2;

    // Calculando o Super Trunfo
    float super_trunfo2 = (float) area2 / populacao2;

    // Somando e fazendo a média das informações
    float cart_2 = (populacao2 + area2 + pib2 + pontos_turisticos2) / 4;
    float informações_finais2 = super_trunfo2 + cart_2;

    // Exibindo as informações
    printf("\nCidade: %s | Estado: %s\n", cidade2, estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("O tamanho da cidade é de %.2f km² com %d habitantes\n", area2, populacao2);
    printf("O seu PIB é de R$ %.2f e tem %d pontos turísticos\n", pib2, pontos_turisticos2);
    printf("A densidade populacional é de %.2ld habitantes por km²\n", Densidade_populacional2);
    printf("O PIB per capita é de R$ %.2ld\n", PIB_per_capita2);
    printf("O Super Trunfo da cidade é de %.2f\n", super_trunfo2);


    // comparando as cartas
    printf("\nComparando as cartas...\n");
    printf("Média das informações da carta 1: %.2f\n", cart_1);
    printf("Média das informações da carta 2: %.2f\n", cart_2);
    printf("Super Trunfo da carta 1: %.2f\n", super_trunfo);
    printf("Super Trunfo da carta 2: %.2f\n", super_trunfo2);
    if (informações_finais1 > informações_finais2) {
        printf("A carta 1 é melhor que a carta 2!\n");
    }   else if (informações_finais1 < informações_finais2) {
        printf("A carta 2 é melhor que a carta 1!\n");
    }
    else {
        printf("As cartas são iguais!\n");
    }
    // Finalizando o jogo
    printf("\n");
    printf("Fim do jogo!\n");
    printf("Obrigado por jogar Super Trunfo!\n");

    return 0;
}
