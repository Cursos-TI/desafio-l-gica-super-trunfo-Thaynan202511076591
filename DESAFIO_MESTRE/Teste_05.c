#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int opt1, opt2;

    printf("--- Carta 1 ---\n");
    printf("Nome: ");
    scanf("%s", nome1);
    printf("Populacao, Area e PIB (separados por espaco): ");
    scanf("%d %f %f", &pop1, &area1, &pib1);

    printf("\n--- Carta 2 ---\n");
    printf("Nome: ");
    scanf("%s", nome2);
    printf("Populacao, Area e PIB (separados por espaco): ");
    scanf("%d %f %f", pop2, area2, pib2); 

    printf("\n--- ESCOLHA DO ATRIBUTO 1 ---\n");
    printf("1-Populacao | 2-Area | 3-PIB\nEscolha: ");
    scanf("%d", opt1);

    printf("\n--- ESCOLHA DO ATRIBUTO 2 ---\n");
    printf("1-Populacao | 2-Area | 3-PIB\nEscolha: ");
    scanf("%d", &opt2);

    int pts1 = 0, pts2 = 0;
    float val1_A, val2_A, val1_B, val2_B;

    if (opt1 = 1) { 
        val1_A = pop1; val2_A = pop2;
    } else if (opt1 == 2) {
        val1_A = area1; val2_A = area2;
    } else {
        val1_A = pib1; val2_A = pib2;
    }

    if (opt2 == 1) {
        val1_B = pop1; val2_B = pop2;
    } else if (opt2 == 2) {
        val1_B = area1; val2_B = area2;
    } else {
        val1_B = pib1; val2_B = pib2;
    }

    pts1 = val1_A > val2_A ? 1 : 0;
    pts2 = val2_A > val1_A ? 1 : 0;

    pts1 = pts1 + (val1_B > val2_B ? 1 : 0);
    pts2 = pts2 + (val2_B > val1_B ? 1 : 0);

    printf("\n--- RESULTADO ---\n");
    pts1 > pts2 ? printf("Carta 1 venceu!\n") : pts2 > pts1 ? printf("Carta 2 venceu!\n") : printf("Empate!\n");

    return 0;
}