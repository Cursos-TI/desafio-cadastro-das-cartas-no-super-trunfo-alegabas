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
    float divisao1, divisao2, divisao3, divisao4; // Calcula a densidade populacional e o PIB Per Capita
    int escolha;
    
    
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

    printf("\nCARTA 1\n");
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

    printf("\nCARTA 2\n");
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


    // Menu interativo: O jogador escolhe um atributo para determinar a carta vencedora

    printf("\nESCOLHA UM ATRIBUTO PARA COMPARAÇÃO:\n");
    printf("\n1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB Per Capita\n");
    printf("\nEscolha: ");
    scanf("%d", &escolha);

    // Imprime a carta vencedora após a escolha do jogador

    printf("\n### RESULTADO DA COMPARAÇÃO DE CARTAS ###\n");
    printf("Carta 1: São Paulo - Carta 2: Rio de Janeiro\n");


    // Estrutura switch para determinar o vencedor

    switch (escolha) {

    case 1: // Compara a população entre as duas cartas
        printf("Atributo de comparação: População\n");
        printf("Carta 1: %d habitantes\n", populacao1);
        printf("Carta 2: %d habitantes\n", populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 venceu!\n");
        } else if (populacao1 < populacao2) {
            printf("Resultado: Carta 2 venceu!\n");
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 2: // Compara a área entre as duas cartas
        printf("Atributo de comparação: Área\n");
        printf("Carta 1: %.2f km2\n", area1);
        printf("Carta 2: %.2f km2\n", area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 venceu!\n");
        } else if (area1 < area2) {
            printf("Resultado: Carta 2 venceu!\n");
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 3: // Compara o PIB entre as duas cartas
        printf("Atributo de comparação: PIB\n");
        printf("Carta 1: R$ %.2f bilhões\n", pib1);
        printf("Carta 2: R$ %.2f bilhões\n", pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 venceu!\n");
        } else if (pib1 < pib2) {
            printf("Resultado: Carta 2 venceu!\n");
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 4: // Compara o número de pontos turísticos entre as duas cartas
        printf("Atributo de comparação: Pontos Turísticos\n");
        printf("Carta 1: %d pontos turísticos\n", pontos_turisticos1);
        printf("Carta 2: %d pontos turísticos\n", pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("Resultado: Carta 1 venceu!\n");
        } else if (pontos_turisticos1 < pontos_turisticos2) {
            printf("Resultado: Carta 2 venceu!\n");
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 5: // Compara a densidade populacional entre as duas cartas (a menor vence)
        printf("Atributo de comparação: Densidade Populacional\n");
        printf("Carta 1: %.2f hab/km2\n", divisao1);
        printf("Carta 2: %.2f hab/km2\n", divisao3);
        if (divisao1 < divisao3) {
            printf("Resultado: Carta 1 venceu!\n");
        } else if (divisao1 > divisao3) {
            printf("Resultado: Carta 2 venceu!\n");
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 6: // Compara o PIB Per Capita entre as duas cartas
        printf("Atributo de comparação: PIB Per Capita\n");
        printf("Carta 1: R$ %.2f\n", divisao2);
        printf("Carta 2: R$ %.2f\n", divisao4);
        if (divisao2 > divisao4) {
            printf("Resultado: Carta 1 venceu!\n");
        } else if (divisao2 < divisao4) {
            printf("Resultado: Carta 2 venceu!\n");
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    default:
        printf("Opção inválida.\n");
        break;
}


    return 0;


}
