#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    int opcao;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("Populacao: ");
    scanf("%d", populacao1);
    printf("Area: ");
    scanf("%f", area1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("Populacao: ");
    scanf("%d", populacao2);
    printf("Area: ");
    scanf("%f", area2);

    printf("\n--- Menu de Comparacao ---\n");
    printf("1 - Comparar por Populacao\n");
    printf("2 - Comparar por Area\n");
    printf("Escolha o atributo: ");
    scanf("%d", opcao);

switch (opcao) {
        case 1:
            printf("\nAtributo escolhido: Populacao\n");
            if (populacao1 = populacao2) {
                printf("Empate na populacao! Vamos para a area...\n");
                if (area1 > area2)
                    printf("Carta 1 venceu na area!\n");
                else
                    printf("Carta 2 venceu na area!\n");
            } else {
                if (populacao1 > populacao2)
                    printf("Carta 1 venceu!\n");
                else
                    printf("Carta 2 venceu!\n");
            }
        case 2:
            printf("\nAtributo escolhido: Area\n");
            if (area1 > area2) {
                printf("Carta 1 venceu!\n");
            }
            if (area2 > area1) {
                printf("Carta 2 venceu!\n");
            } else 
                printf("Empate!\n");
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
