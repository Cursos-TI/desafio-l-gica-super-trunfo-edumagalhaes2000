#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para exibir o resultado final
void exibir_resultado(char nome1[], char nome2[], float soma1, float soma2) {
    printf("\n=== RESULTADO FINAL ===\n\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n\n", nome2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n\n", nome2, soma2);

    if (soma1 > soma2) {
        printf("Vencedor: %s\n", nome1);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }
}

// Função para gerar um número aleatório dentro de um intervalo
float gerar_aleatorio(float min, float max) {
    return min + (rand() / (RAND_MAX / (max - min)));
}

int main() {
    // ----- Cartas geradas automaticamente -----
    char nome1[] = "Brasil", nome2[] = "Argentina"; // Nomes das cartas
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    int pontos1, pontos2;

    // Inicializando o gerador de números aleatórios
    srand(time(NULL));

    // Gerando dados para a Carta 1 (Brasil)
    populacao1 = rand() % 200000000 + 100000000; // População entre 100 e 300 milhões
    area1 = gerar_aleatorio(500000.0, 9000000.0); // Área entre 500.000 e 9.000.000 km²
    pib1 = gerar_aleatorio(500.0, 3000.0); // PIB entre 500 e 3000 bilhões
    pontos1 = rand() % 50 + 1; // Entre 1 e 50 pontos turísticos
    densidade1 = populacao1 / area1;

    // Gerando dados para a Carta 2 (Argentina)
    populacao2 = rand() % 50000000 + 30000000; // População entre 30 e 80 milhões
    area2 = gerar_aleatorio(200000.0, 3000000.0); // Área entre 200.000 e 3.000.000 km²
    pib2 = gerar_aleatorio(100.0, 1000.0); // PIB entre 100 e 1000 bilhões
    pontos2 = rand() % 30 + 1; // Entre 1 e 30 pontos turísticos
    densidade2 = populacao2 / area2;

    // ----- Menu para os atributos -----
    int atributos[3]; // Array para armazenar os 3 atributos escolhidos
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1 = 0, soma2 = 0;

    // Atribuindo valores fixos para o menu de escolha
    printf("\n=== SUPER TRUNFO - NIVEL MESTRE ===\n\n");
    for (int i = 0; i < 3; i++) {
        printf("Escolha o atributo %d:\n", i + 1);
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n");
        printf("Opcao: ");
        scanf("%d", &atributos[i]);

        // Verificando se o jogador escolheu o mesmo atributo mais de uma vez
        for (int j = 0; j < i; j++) {
            if (atributos[i] == atributos[j]) {
                printf("Erro: Voce nao pode escolher o mesmo atributo duas vezes!\n");
                return 0;
            }
        }
    }

    // ----- Captura e comparação dos valores dos atributos -----
    for (int i = 0; i < 3; i++) {
        switch (atributos[i]) {
            case 1: // População
                valor1_c1 = populacao1;
                valor1_c2 = populacao2;
                break;
            case 2: // Área
                valor1_c1 = area1;
                valor1_c2 = area2;
                break;
            case 3: // PIB
                valor1_c1 = pib1;
                valor1_c2 = pib2;
                break;
            case 4: // Pontos Turísticos
                valor1_c1 = pontos1;
                valor1_c2 = pontos2;
                break;
            case 5: // Densidade Demográfica
                valor1_c1 = densidade1;
                valor1_c2 = densidade2;
                break;
            default:
                printf("Opcao invalida!\n");
                return 0;
        }

        // Ajuste para densidade (menor vence)
        soma1 += (atributos[i] == 5 ? -valor1_c1 : valor1_c1);
        soma2 += (atributos[i] == 5 ? -valor1_c2 : valor1_c2);
    }

    // ----- Exibição do Resultado -----
    exibir_resultado(nome1, nome2, soma1, soma2);

    return 0;
}