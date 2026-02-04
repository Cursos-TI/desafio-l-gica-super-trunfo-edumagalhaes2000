#include <stdio.h>

// Aluno: Eduardo Pereira Magalhães
// Super Trunfo - Nível Interatividade (Aventureiro)

int main() {
    // ----- Carta 1 -----
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1;
    int pontosTuristicos1;

    // ----- Carta 2 -----
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2;
    int pontosTuristicos2;

    int opcao;

    // ----- Cadastro da Carta 1 -----
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex:A01): ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;

    // ----- Cadastro da Carta 2 -----
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex:B02): ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;

    // ----- Menu Interativo -----
    printf("\nEscolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n--- Resultado da Comparacao ---\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n\n", nome2);

    switch (opcao) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %lu habitantes\n", nome1, populacao1);
            printf("%s: %lu habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s (Carta 1)\n", nome1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s (Carta 2)\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2)
                printf("Vencedor: %s (Carta 1)\n", nome1);
            else if (area2 > area1)
                printf("Vencedor: %s (Carta 2)\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhoes\n", nome1, pib1);
            printf("%s: %.2f bilhoes\n", nome2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s (Carta 1)\n", nome1);
            else if (pib2 > pib1)
                printf("Vencedor: %s (Carta 2)\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos\n", nome1, pontosTuristicos1);
            printf("%s: %d pontos\n", nome2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s (Carta 1)\n", nome1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s (Carta 2)\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade (menor vence)
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);

            if (densidade1 < densidade2)
                printf("Vencedor: %s (Carta 1)\n", nome1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s (Carta 2)\n", nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}