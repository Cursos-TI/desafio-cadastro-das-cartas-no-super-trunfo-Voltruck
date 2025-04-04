#include <stdio.h>
struct Cidade {
   // Estrutura para armazenar os dados da carta que serão usadas
    char estado;
    char codigo[10];
    char Nome_Cidade[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};
    // Aqui contêm a estrutura do Codigo da Primeira Cidade

// Codigo que eu criei para informar o estágio de qual Carta você está¹;
     int main(){
        struct Cidade cidade1, cidade2;
        printf("Carta 1\n");

    printf("Digite Uma letra de 'A' a 'H': \n");
    scanf("%s", &cidade1.estado);

    printf("Digite A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", &cidade1.codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1.Nome_Cidade);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &cidade1.populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &cidade1.area);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &cidade1.pib);

    printf("Digite a quantidade de pontos turísticos que possui na cidade: \n");
    scanf("%d", &cidade1.pontosTuristicos);

    
// Codigo que eu criei para informar o estágio de qual Carta você está²;
    printf("Carta 2\n"); 

         // Aqui contêm a estrutura do Codigo da Segunda Cidade:
    printf("Digite Uma letra de 'A' a 'H': \n");
    scanf("%s", &cidade2.estado);

    printf("Digite A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", &cidade2.codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2.Nome_Cidade);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &cidade2.populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &cidade2.area);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &cidade2.pib);

    printf("Digite a quantidade de pontos turísticos que possui na cidade: \n");
    scanf("%d", &cidade2.pontosTuristicos);

    return 0;

};