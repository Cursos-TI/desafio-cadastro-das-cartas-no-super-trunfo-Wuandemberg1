#include <stdio.h> // Biblioteca padrão para funções de entrada e saída


// Desafio Super Trunfo - Países

int main() {


    // Carta 1

    char estado[50]; // Declara uma variável para armazenar o nome do estado
    char codigo [20]; // Declara uma variável para armazenar o código da carta
    char cidade[50]; // Declara uma variável para armazenar o nome da cidade
    int populacao; // Declara uma variável para armazenar a população da cidade
    float area; // Declara uma variável para armazenar a área da cidade
    float pib; // Declara uma variável para armazenar o PIB da cidade
    int pontos; // Declara uma variável para armazenar o número de pontos turísticos da cidade

    printf("Digite o nome do estado\n"); // descrição do que o usuário deve fazer
    scanf("%s", estado); // lê o nome do estado
    printf("Digite o código da carta\n"); // descrição do que o usuário deve fazer
    scanf("%s", codigo); // lê o código da carta
    printf("Digite o nome da cidade\n"); // descrição do que o usuário deve fazer
    scanf("%s", cidade); // lé o nome da cidade
    printf("Digite a população\n"); //descrição do que o usuário deve fazer
    scanf("%d", &populacao); // lê a população
    printf("Digite a área\n");// descrição do que o usuário deve fazer
    scanf("%f", &area); // lê a área
    printf("Digite o pib\n");// descrição do que o usuário deve fazer
    scanf("%f", &pib); //lê o pib
    printf("Digite o número de pontos turísticos\n");// descrição do que o usuário deve fazer
    scanf("%d", &pontos); // lê o número de pontos turísticos
    printf(("\n")); // pula uma linha

    float densidade = populacao / area; // Declara uma variável para armazenar a densidade populacional da cidade
    float capita = pib / populacao; // Declara uma variável para armazenar o PIB per capita da cidade
   
    printf("O nome do estado é: %s\n", estado); // Exibe o nome do estado
    printf("O código da carta é: %s\n", codigo); // Exibe o código da carta
    printf("O nome da cidade é: %s\n", cidade); // Exibe o nome da cidade
    printf("A população é: %d\n", populacao); // Exibe a população
    printf("Á area é: %.2f Km²\n", area); // Exibe a área
    printf("O pib é: %.2f Reais\n", pib); // Exibe o PIB
    printf("O número de pontos turísticos é: %d\n", pontos); // Exibe o número de pontos turísticos
    printf("A densiadade populacional é: %.2f Hab/km²\n", densidade); // Exibe a densidade populacional
    printf("O pib per capita é: %.2f Reais\n", capita); // Exibe o PIB per capita
    printf(("\n")); // pula uma linha







    // Carta 2

    char estado2[50]; // Declara uma variável para armazenar o nome do estado
    char codigo2 [20]; // Declara uma variável para armazenar o código da carta
    char cidade2[50]; // Declara uma variável para armazenar o nome da cidade
    int populacao2; // Declara uma variável para armazenar a população da cidade
    float area2; // Declara uma variável para armazenar a área da cidade
    float pib2; // Declara uma variável para armazenar o PIB da cidade
    int pontos2; // Declara uma variável para armazenar o número de pontos turísticos da cidade

    printf("Digite o nome do estado\n"); // descrição do que o usuário deve fazer
    scanf("%s", estado2); // lê o nome do estado
    printf("Digite o código da carta\n"); // descrição do que o usuário deve fazer
    scanf("%s", codigo2); // lê o código da carta
    printf("Digite o nome da cidade\n"); // descrição do que o usuário deve fazer
    scanf("%s", cidade2); // lé o nome da cidade
    printf("Digite a população\n"); //descrição do que o usuário deve fazer
    scanf("%d", &populacao2); // lê a população
    printf("Digite a área\n");// descrição do que o usuário deve fazer
    scanf("%f", &area2); // lê a área
    printf("Digite o pib\n");// descrição do que o usuário deve fazer
    scanf("%f", &pib2); //lê o pib
    printf("Digite o número de pontos turísticos\n");// descrição do que o usuário deve fazer
    scanf("%d", &pontos2); // lê o número de pontos turísticos
    printf(("\n")); // pula uma linha

    
    float densidade2 = populacao2 / area2; // Declara uma variável para armazenar a densidade populacional da cidade
    float capita2 = pib2 / populacao2; // Declara uma variável para armazenar o PIB per capita da cidade
    
   
    printf("O nome do estado é: %s\n", estado2); // Exibe o nome do estado
    printf("O código da carta é: %s\n", codigo2); // Exibe o código da carta
    printf("O nome da cidade é: %s\n", cidade2); // Exibe o nome da cidade
    printf("A população é: %d\n", populacao2); // Exibe a população
    printf("Á area é: %.2f Km²\n", area2); // Exibe a área
    printf("O pib é: %.2f Reais\n", pib2); // Exibe o PIB
    printf("O número de pontos turísticos é: %d\n", pontos2); // Exibe o número de pontos turísticos
    printf("A densiadade populacional é: %.2f Hab/km²\n", densidade2); // Exibe a densidade populacional
    printf("O pib per capita é: %.2f Reais\n", capita2); // Exibe o PIB per capita
    printf(("\n")); // pula uma linha

    // Ínicio do jogo

    int  resultado1, resultado2;
    char  primeiroatributo, segundoatributo;



    printf("Bem vindo ao super trunfo!\n"); // Exibe uma mensagem de boas-vindas
    printf("Escolha o primeiro atributo!\n"); // Exibe uma mensagem pedindo para escolher o primeiro atributo
    printf("P. - População\n"); // Exibe a opção 1
    printf("A. - Área\n"); // Exibe a opção 2

    printf("Escolha a comparação:\n"); // Exibe uma mensagem pedindo para escolher a comparação
    scanf(" %c", &primeiroatributo);
    
    
    switch (primeiroatributo)

    {

    case 'P':
    case 'p':

        printf("Você escolheu a opção população!\n"); // Exibe a opção escolhida pelo usuário
        resultado1 = populacao >= populacao2 ? 1 : 0; // Verifica se a população da carta 1 é maior que a da carta 2
        break; // Sai do switch

        case 'A':
        case 'a':

        printf("Você escolheu a opção área!\n"); // Exibe a opção escolhida pelo usuário
        resultado1 = area >= area2 ? 1 : 0; // Verifica se a área da carta 1 é maior que a da carta 2
    

    default:
        printf("Opção de jogo inválida!\n"); // Exibe uma mensagem de erro
        break; // Sai do switch



    }


    printf("Escolha o segundo atributo!\n"); // Exibe uma mensagem pedindo para escolher o segundo atributo
    printf("Atenção: O segundo atributo não pode ser o mesmo que o primeiro!\n"); // Exibe uma mensagem de aviso
    printf("P. - População\n"); // Exibe a opção 1
    printf("A. - Área\n"); // Exibe a opção 2


    printf("Escolha a comparação: ");
    scanf(" %c", &segundoatributo); // Lê o segundo atributo escolhido pelo usuário

    if (primeiroatributo == segundoatributo) // Verifica se o segundo atributo é o mesmo que o primeiro
    {
        printf("Você escolheu o mesmo atributo!\n"); // Exibe uma mensagem de erro
        
    } else {

          switch (segundoatributo)
      {
         

         case 'A':
         case 'a':

              printf("Você escolheu a opção área!\n"); // Exibe a opção escolhida pelo usuário
              resultado2 = area > area2 ? 1 : 0; // Verifica se a área da carta 1 é maior que a da carta 2
              break; // Sai do switch

        case 'P':
        case 'p':
            
                printf("Você escolheu a opção população!\n"); // Exibe a opção escolhida pelo usuário
                resultado2 = populacao > populacao2 ? 1 : 0; // Verifica se a população da carta 1 é maior que a da carta 2
                break; // Sai do switch

              
         
        default:
              printf("Opção de jogo inválida!\n"); // Exibe uma mensagem de erro
              break; // Sai do switch



      }

      if (resultado1 && resultado2) // Verifica se o resultado da comparação é verdadeiro
      {
          printf("Você ganhou!\n"); // Exibe uma mensagem de vitória
      } else if (resultado1 != resultado2) // Verifica se o resultado da comparação é falso
      {
          printf("Você empatou!\n"); // Exibe uma mensagem de empate
      } else {
          printf("Você perdeu!\n"); // Exibe uma mensagem de derrota
      }
        




    }


    return 0;
}

