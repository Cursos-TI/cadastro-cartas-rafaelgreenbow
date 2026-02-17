#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char letra; //%s
  char codcarta[3];
  char cidade[50];
  int populacao, pontosturisticos; //%d
  float area, pib, dens, pibpc; //%f
  
  char letra2; //%s
  char codcarta2[3];
  char cidade2[50];
  int populacao2, pontosturisticos2; //%d
  float area2, pib2, dens2, pibpc2; //%f

  // Área para entrada de dados Carta 1

  printf("\nOlá, seja bem vindo ao cadastro de carta do SuperTrunfo\n");
  printf("A seguir você fará o cadastro da Carta 1\n");

    printf("\nDigite aqui a letra do estado: ");
    scanf(" %c", &letra);

    printf("Digite aqui o código da carta: ");
    scanf(" %s", codcarta);

    printf("Digite aqui o nome da Cidade: ");
    scanf(" %[^\n]", &cidade);

    printf("Digite aqui o número da população: ");
    scanf("%d", &populacao);

    printf("Digite aqui a área (em km²): ");
    scanf("%f", &area);

    printf("Digite aqui o número do PIB: ");
    scanf("%f", &pib);

    printf("Digite aqui o número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos);

    dens = (populacao / area);
    pibpc = (pib / populacao);

  // Área para exibição dos dados da cidade

    printf("\nDados da Carta 1\n");
    printf("Estado: %c\n", letra);
    printf("Código: %c\n", codcarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %f hab/km²\n", dens);
    printf("PIB per Capita: %f reais\n", pibpc);

    printf("\nA seguir faça o cadastro da Carta 2\n");

      // Área para entrada de dados Carta 2

    printf("\nDigite aqui a letra do estado: ");
    scanf(" %c", &letra2);

    printf("Digite aqui o código da carta: ");
    scanf(" %s", codcarta2);

    printf("Digite aqui o nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite aqui o número da população: ");
    scanf("%d", &populacao2);

    printf("Digite aqui a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite aqui o número do PIB: ");
    scanf("%f", &pib2);

    printf("Digite aqui o número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    dens2 = (float)(populacao2 / area2);
    pibpc2 = (float)(pib2 / populacao2);

  // Área para exibição dos dados da cidade

    printf("\nDados da Carta 2\n");
    printf("Estado: %c\n", letra2);
    printf("Código: %c\n", codcarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %f hab/km²\n", dens2);
    printf("PIB per Capita: %f reais\n", pibpc2);



// Área para comparação entre as cartas

    printf("\nComparação entre as cartas\n");

    printf("A carta 1 tem mais população que a carta 2? %s\n", populacao > populacao2 ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("A carta 1 tem mais área que a carta 2? %s\n", area > area2 ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("A carta 1 tem mais PIB que a carta 2? %s\n", pib > pib2 ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("A carta 1 tem mais pontos turísticos que a carta 2? %s\n", pontosturisticos > pontosturisticos2 ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("A carta 1 tem maior densidade populacional que a carta 2? %s\n", dens > dens2 ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("A carta 1 tem maior PIB per capita que a carta 2? %s\n", pibpc > pibpc2 ? "Carta 1 Venceu" : "Carta 2 Venceu");
    
return 0;
} 
