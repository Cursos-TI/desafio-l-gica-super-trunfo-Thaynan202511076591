#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;

    // Cadastro da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (Ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1); 
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area em km2: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (Ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    // Exibição dos Dados
    printf("\n--- Dados Cadastrados ---\n");
    printf("Carta 1: %s (%s) - População: %d | Densidade: %.2f\n", nome1, codigo1, populacao1, densidade1);
    printf("Carta 2: %s (%s) - População: %d | Densidade: %.2f\n", nome2, codigo2, populacao2, densidade2);

    // Comparação 1: População (Maior vence)
    printf("\n--- Comparacao: Populacao ---\n");
    if (populacao1 > populacao2) {
        printf("A Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("A Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Deu empate na populacao!\n");
    }

    // Comparação 2: Densidade Populacional (Menor vence, conforme regra)
    printf("\n--- Comparacao: Densidade Populacional ---\n");
    if (densidade1 < densidade2) {
        printf("A Carta 1 (%s) venceu!\n", nome1);
    } else if (densidade2 < densidade1) {
        printf("A Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Deu empate na densidade populacional!\n");
    }

    return 0;
}