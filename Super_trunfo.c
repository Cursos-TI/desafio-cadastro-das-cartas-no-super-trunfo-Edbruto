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

    // Exibindo as informações
    printf("\nCidade: %s | Estado: %s\n", cidade, estado);
    printf("Código da carta: %s\n", codigo_carta);
    printf("O tamanho da cidade é de %.2f km² com %d habitantes\n", area, populacao);
    printf("O seu PIB é de R$ %.2f e tem %d pontos turísticos\n", pib, pontos_turisticos);
    
    return 0;
}
