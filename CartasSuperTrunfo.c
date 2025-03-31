#include <stdio.h>

int main() {
    
    // Definição das variáveis para cada atributo das cidades

    int pontos_turisticos2, pontos_turisticos1;
    int populacao2, populacao1;
    char estado2[5], estado1[5];
    char codigo2[5], codigo1[5];
    char cidade2[15], cidade1[20];
    float area2, area1;
    float pib2, pib1;
    float densidade_populacional2, densidade_populacional1;
    float pib_per_capita2, pib_per_capita1;
    float divisao1, divisao2, divisao3, divisao4;
    
    
    // Calcula a Densidade Populacional
    densidade_populacional2 = populacao2 / area2;
    densidade_populacional1 = populacao1 / area1;

    // Calcula o PIB per Capita
    pib_per_capita2 = (pib2 * 1e9) / populacao2;
    pib_per_capita1 = (pib1 * 1e9) / populacao1;


    // Entrada de dados da primeira carta (São Paulo)

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o código: ");
    scanf("%s", codigo1);

    getchar();
    printf("Digite o nome da cidade: ");
    fgets(cidade1, 20, stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados da segunda carta (Rio de Janeiro)

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o código: ");
    scanf("%s", codigo2);

    getchar();
    printf("Digite o nome da cidade: ");
    fgets(cidade2, 15, stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Imprimir dados inseridos da primeira carta

    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    divisao1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km2\n", divisao1);
    divisao2 = (pib1 * 1e9)  / (float) populacao1;
    printf("PIB per Capita: %.2f reais\n", divisao2);

    // Imprimir dados inseridos da segunda carta (Rio de Janeiro)

    printf("\nCarta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    divisao3 = (float) populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km2\n", divisao3);
    divisao4 = (pib2 * 1e9)  / (float) populacao2;
    printf("PIB per Capita: %.2f reais\n", divisao4);

    printf("\n--COMPARAÇÃO DE CARTAS--\n");

    // Comparação do atributo "População"
    printf("\nAtributo: População\n");
    printf("\nCarta 1 - São Paulo (SP): %d habitantes\n", populacao1);
    printf("Carta 2 - Rio de Janeiro (RJ): %d habitantes\n", populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }

    // Comparação do atributo "Área"
    printf("\nAtributo: Área\n");
    printf("\nCarta 1 - São Paulo (SP): %.2f km2\n", area1);
    printf("Carta 2 - Rio de Janeiro (RJ): %.2f km2\n", area2);

    if (area1 > area2) {
            printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    } else {
            printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }

    // Comparação do atributo "PIB"
    printf("\nAtributo: PIB\n");
    printf("\nCarta 1 - São Paulo (SP): R$ %.2f bilhões\n", pib1);
    printf("Carta 2 - Rio de Janeiro (RJ): R$ %.2f bilhões\n", pib2);

    if (pib1 > pib2) {
            printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    } else {
            printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }
    
    // Comparação do atributo "Pontos Turísticos"
    printf("\nAtributo: Pontos Turísticos\n");
    printf("\nCarta 1 - São Paulo (SP): %d pontos turísticos\n", pontos_turisticos1);
    printf("Carta 2 - Rio de Janeiro (RJ): %d pontos turísticos\n", pontos_turisticos2);

    if (pontos_turisticos1 > pontos_turisticos2) {
            printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    } else {
            printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }


    return 0;


}
