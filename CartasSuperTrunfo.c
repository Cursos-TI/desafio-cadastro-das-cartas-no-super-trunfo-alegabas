#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Definição das variáveis para cada atributo das cidades

        int turisticos, turisticos1;
        int populacao, populacao1;
        char estado[5], estado1[5];
        char codigo[5], codigo1[5];
        char cidade[15], cidade1[15];
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

        // Imprimir dados inseridos da primeira carta

        printf("\nCarta 1: \n");
        printf("Estado: %s\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %f\n", area);
        printf("PIB: %f\n", pib);
        printf("Número de Pontos Turísticos: %d\n", turisticos);




    return 0;
}
