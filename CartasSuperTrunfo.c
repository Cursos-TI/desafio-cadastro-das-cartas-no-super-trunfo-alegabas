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

        // Imprimir dados inseridos da segunda carta

        printf("\nCarta 2: \n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km2\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", turisticos1);



    return 0;


}
