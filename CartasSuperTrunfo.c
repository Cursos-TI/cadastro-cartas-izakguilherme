#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  /// Carta 1

    char Estado1;
    char Código1[3];
    char Cidade1[30];
    int População1;
    float Area1;
    float PIB1;
    int Pontos1;

    /// carta 2

    char Estado2;
    char Código2[3];
    char Cidade2[30];
    int População2;
    float Area2;
    float PIB2;
    int Pontos2;

  // Área para entrada de dados

  /// Carta 1 ///

    printf("Carta 1\n");

    printf("Estado (A a H):\n");
    scanf("%c", &Estado1);

    printf("Códico (Exp. A01):\n");
    scanf("%s", &Código1);

  // Área para exibição dos dados da cidade

   printf("Estado:%c\n", Estado1);
    printf("Código:%s\n", Código1);

return 0;
} 
