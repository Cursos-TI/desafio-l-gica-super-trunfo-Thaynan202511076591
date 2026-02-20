#include <stdio.h>

int main() {
    // Variáveis Carta 1
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;

    // Variáveis Carta 2
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;

    // Variáveis do Jogo e de Decisão
    int opcao1, opcao2;
    float valorCarta1_Atributo1, valorCarta2_Atributo1;
    float valorCarta1_Atributo2, valorCarta2_Atributo2;
    int pontosCarta1 = 0, pontosCarta2 = 0;

    // --- Cadastro de Cartas ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);

    // --- Menu Dinâmico ---
    printf("\n==================================\n");
    printf("   ESCOLHA DO 1o ATRIBUTO\n");
    printf("==================================\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    printf("\n==================================\n");
    printf("   ESCOLHA DO 2o ATRIBUTO\n");
    printf("==================================\n");
    printf("Escolha um atributo diferente (1, 2 ou 3): ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("\nAviso: Voce escolheu o mesmo atributo duas vezes! O jogo usara os mesmos valores para ambas as rodadas.\n");
    }

    // --- Lógica de Decisão Complexa (Definindo os valores para a Batalha) ---
    
    // Capturando os valores do 1º atributo escolhido usando Switch
    switch(opcao1) {
        case 1:
            valorCarta1_Atributo1 = (float) populacao1;
            valorCarta2_Atributo1 = (float) populacao2;
            break;
        case 2:
            valorCarta1_Atributo1 = area1;
            valorCarta2_Atributo1 = area2;
            break;
        case 3:
            valorCarta1_Atributo1 = pib1;
            valorCarta2_Atributo1 = pib2;
            break;
        default:
            valorCarta1_Atributo1 = 0;
            valorCarta2_Atributo1 = 0;
            break;
    }

    // Capturando os valores do 2º atributo escolhido usando If aninhado (If-Else If)
    if (opcao2 == 1) {
        valorCarta1_Atributo2 = (float) populacao1;
        valorCarta2_Atributo2 = (float) populacao2;
    } else if (opcao2 == 2) {
        valorCarta1_Atributo2 = area1;
        valorCarta2_Atributo2 = area2;
    } else if (opcao2 == 3) {
        valorCarta1_Atributo2 = pib1;
        valorCarta2_Atributo2 = pib2;
    } else {
        valorCarta1_Atributo2 = 0;
        valorCarta2_Atributo2 = 0;
    }

    // --- Lógica Avançada: Operadores Ternários ---
    
    // Se o valor da Carta 1 for maior, ela ganha 1 ponto. Se não, soma 0.
    pontosCarta1 += (valorCarta1_Atributo1 > valorCarta2_Atributo1) ? 1 : 0;
    pontosCarta2 += (valorCarta2_Atributo1 > valorCarta1_Atributo1) ? 1 : 0;

    // Repete a lógica para o segundo atributo
    pontosCarta1 += (valorCarta1_Atributo2 > valorCarta2_Atributo2) ? 1 : 0;
    pontosCarta2 += (valorCarta2_Atributo2 > valorCarta1_Atributo2) ? 1 : 0;

    // --- Exibição de Resultados ---
    printf("\n==================================\n");
    printf("         RESULTADO FINAL\n");
    printf("==================================\n");
    printf("Pontos da Carta 1 (%s): %d\n", nome1, pontosCarta1);
    printf("Pontos da Carta 2 (%s): %d\n", nome2, pontosCarta2);

    // Operador ternário aninhado para decidir o texto final de quem ganhou ou se deu empate
    pontosCarta1 > pontosCarta2 ? printf("\n>>> VENCEDORA: Carta 1 (%s) <<<\n", nome1) : 
    (pontosCarta2 > pontosCarta1 ? printf("\n>>> VENCEDORA: Carta 2 (%s) <<<\n", nome2) : 
    printf("\n>>> O JOGO TERMINOU EM EMPATE! <<<\n"));

    return 0;
}