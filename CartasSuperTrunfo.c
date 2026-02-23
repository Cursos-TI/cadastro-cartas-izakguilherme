#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  /// Carta 1

    char Estado1;
    char Código1[3];
    char Cidade1[50];
    int População1;
    float Area1;
    float PIB1;
    int Pontos1;

    /// carta 2

    char Estado2;
    char Código2[3];
    char Cidade2[50];
    int População2;
    float Area2;
    float PIB2;
    int Pontos2;

  // Área para entrada de dados

  /// Carta 1 ///

    printf("Carta 1\n");

    printf("Estado (A a H):\n");
    scanf("%c", &Estado1);

    printf("Códico da carta (Exp. A01):\n");
    scanf("%s", &Código1);

   printf("Nome da Cidade (sem espaço):\n");
   scanf("%s", &Cidade1);
   
   printf("População:\n");
   scanf("%d", &População1),

   printf("Area (em km2):\n");
   scanf("%f", &Area1);

   printf("PIB (em milhões de reais):\n");
   scanf("%f", &PIB1);

   printf("Numero de Pontos Turisticos:\n");
   scanf("%d", &Pontos1);

  // Área para exibição dos dados da cidade

   printf("Carta 1\n");
   printf("Estado: %c\n", Estado1);
   printf("Código da Carta: %s\n", Código1);
   printf("Nome da Cidade: %s\n", Cidade1);
   printf("Populaçãp: %d\n", População1);
   printf("Area em (km2): %f\n", Area1);
   printf("PIB: %f\n", PIB1);
   printf("Numero de Pontos Turisticos: %d\n", Pontos1);

return 0;
} 
