#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  /// Carta 1

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    /// carta 2

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2; 

  // Área para entrada de dados

  /// Carta 1 ///

    printf("Estado (A a H):\n");
    scanf(" %c", &estado1);

    printf("Código da Carta (Exp. A01):\n");
    scanf("%s", codigo1);

    printf("Nome da Cidade (sem espaço):\n");
    scanf("%s", cidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área (em km2):\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontos1);


   /// Carta 2 ///

   printf("Estado (A a H):\n");
    scanf(" %c", &estado2);

    printf("Código da Carta (Exp. A01):\n");
    scanf("%s", codigo2);

    printf("Nome da Cidade (sem espaço):\n");
    scanf("%s", cidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área (em km2):\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade


  //// Exibição de dados da carta 1 ////

   printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f Km2\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turístico: %d\n", pontos1);

   //// Exibição de dados da carta 2 ////

   printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km2\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turístico: %d\n", pontos2);

return 0;
} 