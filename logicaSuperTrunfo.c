#include <stdio.h>

int main() {
    // Definição das variáveis para a Carta 1
    char estado1, codigo1[4], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Definição das variáveis para a Carta 2
    char estado2, codigo2[4], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1; // Convertendo PIB para valor real

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // --- EXIBIÇÃO DOS DADOS ---
    printf("\n============================\n");
    printf("CARTA 1: %s (%s)\n", nome1, codigo1);
    printf("População: %lu\n", populacao1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    
    printf("\nCARTA 2: %s (%s)\n", nome2, codigo2);
    printf("População: %lu\n", populacao2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("============================\n");

    // --- COMPARAÇÃO (Nível Novato: População) ---
    printf("\n--- RESULTADO DA COMPARAÇÃO (ATRIBUTO: POPULAÇÃO) ---\n");

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}