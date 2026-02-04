#include <stdio.h>

int main() {
    // ----- Cartas pré-cadastradas -----
    char nome1[] = "Brasil";
    char nome2[] = "Argentina";

    unsigned long int populacao1 = 214000000;
    unsigned long int populacao2 = 46000000;

    float area1 = 8515767.0;
    float area2 = 2780400.0;

    float pib1 = 1600.0;
    float pib2 = 640.0;

    int pontos1 = 20;
    int pontos2 = 15;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1 = 0, soma2 = 0;

    // ----- Menu do primeiro atributo -----
    printf("=== SUPER TRUNFO - NIVEL MESTRE ===\n\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    // ----- Menu do segundo atributo (dinâmico) -----
    printf("\nEscolha o SEGUNDO atributo:\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("\nErro: Voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // ----- Captura dos valores do atributo 1 -----
    switch (atributo1) {
        case 1:
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            break;
        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            break;
        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            break;
        case 4:
            valor1_c1 = pontos1;
            valor1_c2 = pontos2;
            break;
        case 5:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ----- Captura dos valores do atributo 2 -----
    switch (atributo2) {
        case 1:
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            break;
        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            break;
        case 3:
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            break;
        case 4:
            valor2_c1 = pontos1;
            valor2_c2 = pontos2;
            break;
        case 5:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ----- Ajuste para densidade (menor vence) -----
    soma1 = (atributo1 == 5 ? -valor1_c1 : valor1_c1) +
            (atributo2 == 5 ? -valor2_c1 : valor2_c1);

    soma2 = (atributo1 == 5 ? -valor1_c2 : valor1_c2) +
            (atributo2 == 5 ? -valor2_c2 : valor2_c2);

    // ----- Exibição do resultado -----
    printf("\n=== RESULTADO FINAL ===\n\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n\n", nome2);

    printf("Atributo 1 -> %s: %.2f | %s: %.2f\n",
           nome1, valor1_c1, nome2, valor1_c2);

    printf("Atributo 2 -> %s: %.2f | %s: %.2f\n\n",
           nome1, valor2_c1, nome2, valor2_c2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n\n", nome2, soma2);

    printf("Vencedor: ");
    printf(soma1 > soma2 ? "%s\n" :
           soma2 > soma1 ? "%s\n" :
           "Empate!\n",
           soma1 > soma2 ? nome1 : nome2);

    return 0;
}