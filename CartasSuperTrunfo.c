#include <stdio.h>

int main() {
    
    // Definição das variáveis para cada atributo das cidades

        int turisticos, turisticos1;
        int populacao, populacao1;
        char estado[5], estado1[5];
        char codigo[5], codigo1[5];
        char cidade[15], cidade1[20];
        float area, area1;
        float pib, pib1;
        float divisao, divisao1, divisao2, divisao3;
        float densidade_populacional, densidade_populacional1;
        float pib_per_capita, pib_per_capita1;
        populacao = 12325000;
        area = 1521.11;
        pib = 699.28;
        populacao1 = 6748000;
        area1 = 1200.25;
        pib1 = 300.50;

        // Calcula a Densidade Populacional
        densidade_populacional = populacao / area;
        densidade_populacional1 = populacao1 / area1;

        // Calcula o PIB per Capita
        pib_per_capita = (pib * 1e9) / populacao;
        pib_per_capita1 = (pib1 * 1e9) / populacao1;


        // Entrada de dados da primeira carta (São Paulo)

        printf("Digite o estado: ");
        scanf("%s", estado);

        printf("Digite o código: ");
        scanf("%s", codigo);

        getchar();
        printf("Digite o nome da cidade: ");
        fgets(cidade, 15, stdin);

        printf("Digite a população: ");
        scanf("%d", &populacao);

        printf("Digite a área: ");
        scanf("%f", &area);

        printf("Digite o PIB: ");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &turisticos);

        // Entrada de dados da segunda carta (Rio de Janeiro)

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
        scanf("%d", &turisticos1);

        // Imprimir dados inseridos da primeira carta

        printf("\nCarta 1: \n");
        printf("Estado: %s\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km2\n", area);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Número de Pontos Turísticos: %d\n", turisticos);
        printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional);
        printf("PIB per Capita: %.2f reais\n", pib_per_capita);

        // Imprimir dados inseridos da segunda carta

        printf("\nCarta 2: \n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km2\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", turisticos1);
        printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
        printf("PIB per Capita: %.2f reais\n", pib_per_capita1);



    return 0;


}
