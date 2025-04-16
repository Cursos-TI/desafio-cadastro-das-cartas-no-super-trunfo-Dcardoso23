#include <stdio.h>
#include <string.h>

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

   getchar(); // limpa o buffer antes da proxima leitura com fgets é a mesma coisa que voce apagar um caractere no final de um texto tipo um ~ que faria o leitor interpretar errado

   printf("\n Cadastro de Carta 2:\n");

   printf("Digite um Estado (ex: Rio de Janeiro): ");
   fgets(estado2, sizeof(estado2), stdin); // sizeof define o tamanho maximo a ser lido
   estado2[strcspn(estado2, "\n")] = '\0';

   printf("Digite o Codigo da Carta (ex: B1): ");
   fgets(codigo2, sizeof(codigo2), stdin); // sizeof define o tamanho maximo a ser lido
   codigo2[strcspn(codigo2, "\n")] = '\0';

   printf("Digite o Nome da Cidade (ex: São Francisco de Itabapoana): ");
   fgets(nomeCidade2, sizeof(nomeCidade2), stdin); // sizeof define o tamanho maximo a ser lido
   nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

   printf("Digite a População: ");
   scanf("%d", &populacao2);

   printf("Area: (em km2): ");
   scanf("%f", &area2);

   printf("PIB: (em bilhoes) ");
   scanf("%f", &pib2);

   printf("Digite o Numero de Pontos Turisticos: ");
   scanf("%d", &pontosTuristicos2);

   printf("\n--- Dados das Cartas ---\n\n");
   printf("Carta 1:\n");
   printf("Estado: %s\n", estado);
   printf("codigo: %s\n", codigo);
   printf("Nome da Cidade: %s\n", nomeCidade);
   printf("População: %d\n", populacao);
   printf("Area: %.2f km2\n", area); // %.2f é um especificador de formato utilizado para formatar e exibir  o valor como um numero de ponto flutuante co duas casas decimais
   printf("PIB %.2f Bilhões de reais\n", pib);
   printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);

   printf("\nCarta 2:\n");
   printf("Estado: %s\n", estado2);
   printf("codigo: %s\n", codigo2);
   printf("Nome da Cidade: %s\n", nomeCidade2);
   printf("População: %d\n", populacao2);
   printf("Area: %.2f km2\n", area2); // %.2f é um especificador de formato utilizado para formatar e exibir  o valor como um numero de ponto flutuante co duas casas decimais
   printf("PIB %.2f Bilhões de reais\n", pib2);
   printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

   return 0;
}
