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

    // variáveis Carta 1
    char estado_1;
    char cod_carta_1[3];
    char cidade_1[20];
    int populacao_1;
    float area_km_1;
    float pib_1;
    int pontos_turisticos_1;

    // variáveis Carta 2
    char estado_2;
    char cod_carta_2[3];
    char cidade_2[20];
    int populacao_2;
    float area_km_2;
    float pib_2;
    int pontos_turisticos_2;

    // Entrada de Dados para a Carta 1

    printf("Vamos iniciar com as informações da Carta 1!\n");
    printf("\nInstruções:\n");
    printf("\nPara Estado, digitar uma letra em maiusculo de 'A' a 'H'.\n");
    printf("\nO Código da Carta deve ser a letra escolhida para o Estado,\nseguida de um número de 01 a 04 (ex.: A01, B03).\n");
    
    // Solicitar ao usuário para prosseguir
    printf("\nPressione Enter para iniciar a entrada de dados.");
    getchar();

    printf("\nDigite o Estado para a Carta 1 no formato solicitado: \n");
    scanf("%c", &estado_1);

    printf("Digite o Código da Carta 1 no formato solicitado: \n");
    scanf("%s", &cod_carta_1);

    printf("Digite a Cidade da Carta 1: \n");
    scanf("%s", &cidade_1);

    printf("Digite a População da Carta 1: \n");
    scanf("%d", &populacao_1);

    printf("Digite a Área em Km2 da Carta 1: \n");
    scanf("%f", &area_km_1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de Pontos Turísticos da Carta 1: \n");
    scanf("%d", &pontos_turisticos_1);

    // Dados para a Carta 2
    
    printf("\nAgora, vamos inserir as informações da Carta 2!\n");

    getchar();

    printf("\nDigite o Estado para a Carta 2 no formato solicitado: \n");
    scanf("%c", &estado_2);

    printf("Digite o Código da Carta 2 no formato solicitado: \n");
    scanf("%s", &cod_carta_2);

    printf("Digite a Cidade da Carta 2: \n");
    scanf("%s", &cidade_2);

    printf("Digite a População da Carta 2: \n");
    scanf("%d", &populacao_2);

    printf("Digite a Área em Km2 da Carta 2: \n");
    scanf("%f", &area_km_2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de Pontos Turísticos da Carta 2: \n");
    scanf("%d", &pontos_turisticos_2);

    // Apresentação da Carta 1

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", cod_carta_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km2\n", area_km_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);

    // Apresentação da Carta 2

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", cod_carta_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km2\n", area_km_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);

    return 0;
}
