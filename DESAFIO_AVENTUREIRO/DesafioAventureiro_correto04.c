#include <stdio.h>

int main() {
    // Variáveis das Cartas
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    int opcaoMenu;

    // Cadastro
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);

    // Menu Interativo
    printf("\n=============================\n");
    printf("   MENU DE COMPARACAO\n");
    printf("=============================\n");
    printf("1 - Comparar por Populacao (com desempate por Area)\n");
    printf("2 - Comparar por Area (com desempate por Populacao)\n");
    printf("=============================\n");
    printf("Escolha uma opcao (1 ou 2): ");
    scanf("%d", &opcaoMenu);

    printf("\n--- Resultado da Batalha ---\n");

    // Lógica com Switch e Ifs aninhados
    switch (opcaoMenu) {
        case 1:
            printf("Atributo principal: Populacao\n");
            
            if (populacao1 > populacao2) {
                printf("A vencedora e a Carta 1 (%s)!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("A vencedora e a Carta 2 (%s)!\n", nome2);
            } else {
                // Comparação Aninhada (Desempate)
                printf("Houve um empate na populacao! Comparando a Area...\n");
                
                if (area1 > area2) {
                    printf("No desempate, a vencedora e a Carta 1 (%s)!\n", nome1);
                } else if (area2 > area1) {
                    printf("No desempate, a vencedora e a Carta 2 (%s)!\n", nome2);
                } else {
                    printf("Inacreditavel! Empate duplo!\n");
                }
            }
            break; // O break é muito importante para parar o switch!

        case 2:
            printf("Atributo principal: Area\n");
            
            if (area1 > area2) {
                printf("A vencedora e a Carta 1 (%s)!\n", nome1);
            } else if (area2 > area1) {
                printf("A vencedora e a Carta 2 (%s)!\n", nome2);
            } else {
                // Comparação Aninhada (Desempate)
                printf("Houve um empate na area! Comparando a Populacao...\n");
                
                if (populacao1 > populacao2) {
                    printf("No desempate, a vencedora e a Carta 1 (%s)!\n", nome1);
                } else if (populacao2 > populacao1) {
                    printf("No desempate, a vencedora e a Carta 2 (%s)!\n", nome2);
                } else {
                    printf("Inacreditavel! Empate duplo!\n");
                }
            }
            break;

        default:
            // Caso o usuário digite um número que não é 1 nem 2
            printf("Opcao invalida! Por favor, reinicie o jogo e escolha 1 ou 2.\n");
            break;

            return 0;
            } // <- Certifique-se de que esta chave está aqui para fechar o int main()!

        }