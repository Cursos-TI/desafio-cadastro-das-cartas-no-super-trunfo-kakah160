#include <stdio.h>

int main(){
    printf("desafio super trunfo\n");
    printf("novo commit\n");
    char estado[10];
    char codigo [5];
    char cidade [50];
    int população;
    int pontosTuristicos;
    float area;
    float pib;
    /*
    divisão (/)
    */

    printf("digite seu estado: \n");
    scanf("%s", estado);

    printf("codigo: \n");
    scanf("%s", codigo);

    printf("nome da cidade: \n");
    scanf("%s", cidade);

    printf("total de habitantes: \n");
    scanf("%d", &população);

    printf("area: \n");
    scanf("%f", &area);

    printf("pib: \n");
    scanf("%f", &pib);

    printf("pontos turisticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("carta 1! \n");
    printf("estado: %s \n", estado);
    printf("codigo de carta: %s%s \n", estado, codigo);
    printf("cidade: %s \n", cidade);
    printf("habitantes: %d \n" ,população);
    printf("area: %f \n", area);
    printf("pib: %f \n", pib);
    printf("pontos Turisticos: %d \n", pontosTuristicos);

divisao = população / area;
   printf("habitantes por area: %f\n", divisao);

divisao = pib / população;
   printf("PIB per capita: %f\n", divisao);
   pib / população;



    return 0;
}

