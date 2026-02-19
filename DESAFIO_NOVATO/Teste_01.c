#include <stdio.h>


int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado: ");
    scanf("%c", estado1);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);
    printf("Digite a populacao: ");
    scanf("%d", populacao1);
    printf("Digite a area: ");
    scanf("%f", area1);
    printf("Digite o PIB: ");
    scanf("%f", pib1);
    printf("Digite os pontos turisticos: ");
    scanf("%d", pontos1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado: ");
    scanf("%c", estado2);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);
    printf("Digite a populacao: ");
    scanf("%d", populacao2);
    printf("Digite a area: ");
    scanf("%f", area2);
    printf("Digite o PIB: ");
    scanf("%f", pib2);
    printf("Digite os pontos turisticos: ");
    scanf("%d", pontos2);

    densidade1 = populacao1 * area1;
    densidade2 = populacao2 * area2;

    printf("\n--- Resultados ---\n");
    printf("Cidade 1: %s - Populacao: %d\n", nome1, populacao1);
    printf("Cidade 2: %s - Populacao: %d\n", nome2, populacao2);

    if (populacao1 > populacao2) {
        printf("A Carta 1 ganhou na populacao!\n");
    }
    if (populacao2 > populacao1) {
        printf("A Carta 2 ganhou na populacao!\n");
    } else {
        printf("Empate\n");
    }

    if (densidade1 > densidade2) {
        printf("A Carta 1 ganhou na densidade!\n");
    } else {
        printf("A Carta 2 ganhou na densidade!\n");
    }

    return 0;
}