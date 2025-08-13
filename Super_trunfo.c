#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // dados a serem coletados
    char Estado[3];
    char codigo_carta[4];
    char cidade[50];
    char buffer[50]; // para leitura temporária de strings
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // coleta de dados
    printf("A qual estado pertence essa cidade? ");
    fgets(Estado, sizeof(Estado), stdin);
    Estado[strcspn(Estado, "\n")] = '\0';

    printf("Digite um código para identificar a cidade: ");
    fgets(codigo_carta, sizeof(codigo_carta), stdin);
    codigo_carta[strcspn(codigo_carta, "\n")] = '\0';

    printf("Qual o nome da cidade? ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Quantas pessoas habitam nela? ");
    fgets(buffer, sizeof(buffer), stdin);
    populacao = atoi(buffer);

    printf("Qual o tamanho da cidade? ");
    fgets(buffer, sizeof(buffer), stdin);
    area = atof(buffer);

    printf("Qual o seu valor PIB? ");
    fgets(buffer, sizeof(buffer), stdin);
    pib = atof(buffer);

    printf("Quantos pontos turisticos tem a cidade? ");
    fgets(buffer, sizeof(buffer), stdin);
    pontos_turisticos = atoi(buffer);

    // exibindo as informações
    printf("\nCidade: %s | Estado: %s\n", cidade, Estado);
    printf("Código da carta: %s\n", codigo_carta);
    printf("O tamanho da cidade é de %.2f km² com %d habitantes\n", area, populacao);
    printf("O seu PIB é de %.2f e tem %d pontos turísticos\n", pib, pontos_turisticos);

    return 0;
}
