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
    int atributo1, atributo2;
    int pontos_carta1 = 0, pontos_carta2 = 0;
    
    
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

    // Imprimir dados inseridos da primeira carta (São Paulo)

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


   // Menu interativo: O usuário escolhe dois atributos para determinar a carta vencedora

   printf("\nEscolha um primeiro atributo para comparação:\n");
   printf("1 - População\n");
   printf("2 - Área\n");
   printf("3 - PIB\n");
   printf("4 - Pontos Turísticos\n");
   printf("5 - Densidade Populacional\n");
   printf("6 - PIB Per Capita\n");
   printf("Escolha: ");
   scanf("%d", &atributo1); // Escolha do primeiro atributo
   printf("Escolha um segundo atributo para comparação:\n");
   printf("Escolha: "); // Escolha do segundo atributo
   scanf("%d", &atributo2);

   // Se o jogador escolher o mesmo atributo nas duas opções

   if (atributo1 == atributo2) {
   printf ("\nOs atributos escolhidos devem ser diferentes. Encerrando jogo!\n");

   return 0;
   
   }

   // Apresentação do resultado das comparações

   printf("\n### RESULTADO DA COMPARAÇÃO DE CARTAS ###\n");
   printf("Carta 1: São Paulo - Carta 2: Rio de Janeiro\n");

   // Comparação do primeiro atributo escolhido

   printf("\n*** Comparando o primeiro atributo ***\n");
   switch (atributo1) {
   case 1:
       printf("População - Carta 1: %d habitantes | População - Carta 2: %d habitantes\n", populacao1, populacao2);
       (populacao1 > populacao2) ? pontos_carta1++ : pontos_carta2++;
       break;
   case 2:
       printf("Área - Carta 1: %.2f km2 | Área - Carta 2: %.2f km2\n", area1, area2);
       (area1 > area2) ? pontos_carta1++ : pontos_carta2++;
       break;
   case 3:
       printf("PIB - Carta 1: R$ %.2f bilhões | PIB - Carta 2: R$ %.2f bilhões\n", pib1, pib2);
       (pib1 > pib2) ? pontos_carta1++ : pontos_carta2++;
       break;
   case 4:
       printf("Pontos turísticos - Carta 1: %d | Pontos turísticos - Carta 2: %d\n", pontos_turisticos1, pontos_turisticos2);
       (pontos_turisticos1 > pontos_turisticos2) ? pontos_carta1++ : pontos_carta2++;
       break;
   case 5:
       printf("Densidade populacional - Carta 1: %.2f hab/km2 | Densidade populacional - Carta 2: %.2f hab/km2\n", divisao1, divisao3);
       (divisao1 < divisao3) ? pontos_carta1++ : pontos_carta2++;
       break;
   case 6:
       printf("PIB per capita - Carta 1: R$ %.2f | PIB per capita - Carta 2: R$ %.2f\n", divisao2, divisao4);
       (divisao2 > divisao4) ? pontos_carta1++ : pontos_carta2++;
       break;
   default:
       printf("Opção inválida!\n");
       break;
   }

   // Comparação do segundo atributo escolhido

   printf("\n*** Comparando o segundo atributo ***\n");
   switch (atributo2) {
   case 1:
       printf("População - Carta 1: %d habitantes | População - Carta 2: %d habitantes\n", populacao1, populacao2);
       (populacao1 > populacao2) ? pontos_carta1++ : pontos_carta2++;
       break;
   case 2:
       printf("Área - Carta 1: %.2f km2 | Área - Carta 2: %.2f km2\n", area1, area2);
       (area1 > area2) ? pontos_carta1++ : pontos_carta2++;
       break;
   case 3:
       printf("PIB - Carta 1: R$ %.2f bilhões | PIB - Carta 2: R$ %.2f bilhões\n", pib1, pib2);
       (pib1 > pib2) ? pontos_carta1++ : pontos_carta2++;
       break;
   case 4:
       printf("Pontos turísticos - Carta 1: %d | Pontos turísticos - Carta 2: %d\n", pontos_turisticos1, pontos_turisticos2);
       (pontos_turisticos1 > pontos_turisticos2) ? pontos_carta1++ : pontos_carta2++;
       break;
   case 5:
       printf("Densidade populacional - Carta 1: %.2f hab/km2 | Densidade populacional - Carta 2: %.2f hab/km2\n", divisao1, divisao3);
       (divisao1 < divisao3) ? pontos_carta1++ : pontos_carta2++;
       break;
   case 6:
       printf("PIB per capita - Carta 1: R$ %.2f | PIB per capita - Carta 2: R$ %.2f\n", divisao2, divisao4);
       (divisao2 > divisao4) ? pontos_carta1++ : pontos_carta2++;
       break;
   default:
       printf("Opção inválida!\n");
       break;
   }

   // Resultado final após a escolha dos atributos e das comparações entre as duas cartas

   printf("\n*** RESULTADO FINAL ***\n");
   if(pontos_carta1 > pontos_carta2)
   {
       printf("Carta 1: 2 pontos | Carta 2: 0 pontos\n");
       printf("Carta 1 (São Paulo) venceu!\n");
   } else if(pontos_carta1 < pontos_carta2)
   {
       printf("Carta 1: 0 pontos | Carta 2: 2 pontos\n");
       printf("Carta 2 (Rio de Janeiro) venceu!\n");
   } else {
           printf("Carta 1: 1 ponto | Carta 2: 1 ponto\n");
           printf("Empate!\n");
       }
  
return 1;

}
