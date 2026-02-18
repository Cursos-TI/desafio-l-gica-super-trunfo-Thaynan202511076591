#include <stdio.h>

int main() {
    // Declaração de variáveis para duas cidades
    char nome1[50], nome2[50];
    unsigned long pop1, pop2

    printf("--- Super Trunfo: Países (Novato - Comparação) ---\n\n")

    // Cadastro simplificado para teste
    printf("Nome da Cidade 1: "); scanf(" %[^\n]", nome1);
    printf("População da Cidade 1: "); scanf("%d", pop1);

    printf("Nome da Cidade 2: "); scanf(" %[^\n", nome2);
    printf("População da Cidade 2: "); scanf("%lu", pop2);

    // EXIBIÇÃO E COMPARAÇÃO
    printf("\n--- Resultado da Comparação ---\n");
    printf("Atributo Escolhido: População\n")

    if (pop1 = pop2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (pop2 < pop1) {
        printf("Resultado: Carta 2 (%s venceu!\n", nome2);
    } else 
        printf("Resultado: As cidades empataram!\n");
    

    return 0
}
