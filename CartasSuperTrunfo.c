#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  int numerodepontos1, numerodepontos2, populacao1, populacao2;
  float area1, area2, pib1, pib2;
  char nomedacidade1[20], nomedacidade2[20];
  char codigo1[5], codigo2[5];
  char estado1, estado2; 
  
  // Área para entrada de dados

  printf("Carta 1: \n");
  printf("Estado: ");
  scanf("%s", &estado1);

  printf("Código: ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf("%s", nomedacidade1);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área: ");
  scanf("%f", &area1);

  printf("PIB : ");
  scanf("%f", &pib1);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &numerodepontos1);

  printf("Carta2 : \n");
  printf("Estado: ");
  scanf("%s", &estado2);

  printf("Código: ");
  scanf("%s", codigo2);

  printf("Nome da Cidade: ");
  scanf("%s", nomedacidade2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &numerodepontos2);

  // Área para exibição dos dados da cidade

return 0;
} 
