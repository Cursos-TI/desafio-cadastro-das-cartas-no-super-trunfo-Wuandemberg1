#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {


    // Estado 1

    char codigo [20]; // Declara uma variável para armazenar o código da cidade
    char nome[50]; // Declara uma variável para armazenar o nome do estado
    int populacao; // Declara uma variável para armazenar a população da cidade
    float area; // Declara uma variável para armazenar a área da cidade
    float pib; // Declara uma variável para armazenar o PIB da cidade
    int pontos; // Declara uma variável para armazenar o número de pontos turísticos da cidade

    printf("Digite o código da cidade\n"); // descrição do que o usuário deve fazer
    scanf("%s", codigo); // lê o código da cidade
    printf("Digite o nome do estado\n"); // descrição do que o usuário deve fazer
    scanf("%s", nome); // lê o nome do estado
    printf("Digite a população\n"); //descrição do que o usuário deve fazer
    scanf("%d", &populacao); // lê a população
    printf("Digite a área\n");// descrição do que o usuário deve fazer
    scanf("%f", &area); // lê a área
    printf("Digite o pib\n");// descrição do que o usuário deve fazer
    scanf("%f", &pib); //lê o pib
    printf("Digite o número de pontos turísticos\n");// descrição do que o usuário deve fazer
    scanf("%d", &pontos); // lê o número de pontos turísticos
    printf(("\n")); // pula uma linha
   
   
    printf("O código da cidade é: %s\n", codigo); // Exibe o código da cidade
    printf("O nome do estado é: %s\n", nome); // Exibe o nome do estado
    printf("A população é: %d\n", populacao); // Exibe a população
    printf("Á area é: %.2f\n", area); // Exibe a área
    printf("O pib é: %.2f\n", pib); // Exibe o PIB
    printf("O número de pontos turísticos é: %d\n", pontos); // Exibe o número de pontos turísticos
    printf(("\n")); // pula uma linha







    //Estado 2

    char codigo2 [20]; // Declara uma variável para armazenar o código da cidade
    char nome2[50]; // Declara uma variável para armazenar o nome do estado
    int populacao2; // Declara uma variável para armazenar a população da cidade
    float area2; // Declara uma variável para armazenar a área da cidade
    float pib2; // Declara uma variável para armazenar o PIB da cidade
    int pontos2; // Declara uma variável para armazenar o número de pontos turísticos da cidade

    printf("Digite o código da cidade\n"); // descrição do que o usuário deve fazer
    scanf("%s", codigo2); // lê o código da cidade
    printf("Digite o nome do estado\n"); // descrição do que o usuário deve fazer
    scanf("%s", nome2); // lê o nome do estado
    printf("Digite a população\n"); //descrição do que o usuário deve fazer
    scanf("%d", &populacao2); // lê a população
    printf("Digite a área\n");// descrição do que o usuário deve fazer
    scanf("%f", &area2); // lê a área
    printf("Digite o pib\n");// descrição do que o usuário deve fazer
    scanf("%f", &pib2); //lê o pib
    printf("Digite o número de pontos turísticos\n");// descrição do que o usuário deve fazer
    scanf("%d", &pontos2); // lê o número de pontos turísticos
    printf(("\n")); // pula uma linha
    
   
    printf("O código da cidade é: %s\n", codigo2); // Exibe o código da cidade
    printf("O nome do estado é: %s\n", nome2); // Exibe o nome do estado
    printf("A população é: %d\n", populacao2); // Exibe a população
    printf("Á area é: %.2f\n", area2); // Exibe a área
    printf("O pib é: %.2f\n", pib2); // Exibe o PIB
    printf("O número de pontos turísticos é: %d\n", pontos2); // Exibe o número de pontos turísticos



    

    return 0;
}

