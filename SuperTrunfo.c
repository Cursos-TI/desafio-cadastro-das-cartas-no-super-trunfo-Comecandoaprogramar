#include <stdio.h>

// Definição da estrutura da carta
struct Carta {
    char estado;
    char codigo[4];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1, carta2;
    
    // Carta 1
    printf("Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta1.nome_cidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em Km²): ");
    scanf("%f", &carta1.area);
    printf("PIB:");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    printf("\n");

    //Carta 2
    printf("Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Código da carta (ex: B03): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta2.nome_cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em Km²): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    printf("\n");

    // Exibição dos dados da carta 1

    printf("Carta 1:\n");
    printf(" Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de pontos turísticos: %d\n", carta1.pontos_turisticos);
    printf("\n");

    // Exibição dos dados da carta 2
    printf("Dados da carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %2f bilhões de reais\n", carta2.pib);
    printf("Número de pontos turísticos: %d\n", carta2.pontos_turisticos);
    printf("\n");

    return 0;
    
}
