#include <stdio.h>

int main(){
    printf("desafio super trunfo\n");
    printf("novo commit\n");
    char estado;
    char codigo;
    char cidade;
    int população;
    float area;
    float pib
    int pontos Turisticos;

     for (int i = 0; i < 2; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

        printf("Estado (letra de A a H): ");
        scanf(" %c", &cartas [i].estado);
        // espaço antes do %c para ignorar enter

        printf("Código da Carta (ex: A01): ");
        scanf("%s", &cartas[i].codigo);

        printf("Nome da Cidade: ");
        scanf(" %[^\n]", cartas[i].cidade); // lê até o enter, inclusive espaços

        printf("População: ");
        scanf("%d", &cartas[i].populacao);

        printf("Área (km²): ");
        scanf("%f", &cartas[i].area);

        printf("PIB (em bilhões): ");
        scanf("%f", &cartas[i].pib);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    // Mostra as cartas
    for (int i = 0; i < 2; i++) {
        printf("\n--- Carta %d ---\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].cidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
    }

    return 0;
}
    