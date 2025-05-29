#include <stdio.h>

//Código do Projeto Super Trunfo - Primeira Etapa - coleta dos dados das cartas

int main() {
    //Configurações variaveis carta 1
    char estado1[20];
    char codigo1[4];
    char nomeCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int numPontosTuristicos1;

    //Configurações variaveis carta 2
    char estado2[20];
    char codigo2[4];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;

//Instruções e leitura dos dados da Carta 1
printf("Cadastro da Carta 1:\n");

//Usuário insere os dados do Estado
printf("Digite a letra do Estado de A à H: ");
scanf("%s", estado1);

//Usuário insere o código da carta 
printf("Digite o código da carta (ex: A01, B03): ");
scanf("%s", codigo1);

//Usuário insere o nome da cidade
printf("Digite o nome da cidade: ");
getchar(); // Limpa o '\n' deixado pelo scanf anterior
fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // Remove o '\n' do final

//Usuário insere a população da cidade
printf("Digite o número da população da cidade: ");
scanf("%d", &populacao1);

//Usuário insere a área da cidade
printf("Digite a área da cidade (em km²): ");
scanf("%f", &area1);

//Usuário insere o PIB da cidade
printf("Digite o PIB da cidade (em milhões): ");
scanf("%f", &pib1);

//Usuário insere o número de pontos turísticos da cidade
printf("Digite o número de pontos turísticos da cidade: ");
scanf("%d", &numPontosTuristicos1);



//Instruções e leitura dos dados da Carta 2
printf("\nCadastro da Carta 2:\n");

//Usuário insere os dados do Estado
printf("Digite a letra do Estado de A à H: ");
scanf(" %S", &estado2);

//Usuário insere o código da carta
printf("Digite o código da carta (ex: A01, B03): ");
scanf(" %S", &codigo2);

//Usuário insere o nome da cidade
printf("Digite o nome da cidade: ");
getchar(); // Limpa o '\n' deixado pelo scanf anterior
fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; // Remove o '\n' do final

//Usuário insere a população da cidade
printf("Digite o número da população da cidade: ");
scanf(" %d", &populacao2);

//Usuário insere a área da cidade
printf("Digite a área da cidade (em km²): ");
scanf(" %f", &area2);

//Usuário insere o PIB da cidade
printf("Digite o PIB da cidade (em milhões): ");
scanf(" %f", &pib2);

//Usuário insere o número de pontos turísticos da cidade
printf("Digite o número de pontos turísticos da cidade: ");
scanf(" %d", &numPontosTuristicos2);

// Exibição dos dados da Carta 1
printf("\nDados da Carta 1:\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f milhões\n", pib1);
printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);

// Exibição dos dados da Carta 2
printf("\nDados da Carta 2:\n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f milhões\n", pib2);


printf("encerrado o cadastro das cartas.\n");
// Fim do cadastro das cartas
printf("Pressione Enter para completar...");
getchar(); // Espera o usuário pressionar Enter
// Limpa o buffer de entrada
getchar();

return 0;
}
// Fim da Primeira Etapa do Projeto Super Trunfo
