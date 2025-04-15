#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   char estado[30];
   char codigo[5];
   char nomeCidade[50];
   int populacao;
   float area;
   float pib;
   int pontosTuristicos;

   char estado2[30];
   char codigo2[5];
   char nomeCidade2[50];
   int populacao2;
   float area2;
   float pib2;
   int pontosTuristicos2;

   printf("Super Trunfo - Paises: \n");
   printf("Cadastro de Carta: \n");

   printf("Digite um Estado (ex: Sao paulo): ");
   fgets(estado, sizeof(estado), stdin); // sizeof define o tamanho maximo a ser lido
   estado[strcspn(estado, "\n")] = '\0'; // stdin indica que a entrada vem do teclado
   // O fgets mantém o caractere \n no final da string
   // strcspn(estado, "\n") retorna a posição do primeiro \n na string
   // o strcspn localiza o \n sua posição em seguida e o estado[...] = '\0'; substitui o \n pelo \0 que indica o fim da string

   printf("Digite o Codigo da Carta (ex: A1): ");
   fgets(codigo, sizeof(codigo), stdin); // sizeof define o tamanho maximo a ser lido
   codigo[strcspn(codigo, "\n")] = '\0';

   printf("Digite o Nome da Cidade (ex: Campinas): ");
   fgets(nomeCidade, sizeof(nomeCidade), stdin);
   nomeCidade[strcspn(nomeCidade, "\n")] = '\0';

   printf("Digite a População: ");
   scanf("%d", &populacao);

   printf("Area: (em km2): ");
   scanf("%f", &area);
   
   printf("PIB (em bilhoes): ");
   scanf("%f", &pib);

   printf("Digite Numeros de Pontos Turisticos: ");
   scanf("%d", &pontosTuristicos);

    return 0;
}
