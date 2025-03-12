#include<stdio.h>

int main(){
    char estado1[2],estado2[2],codigo1[4],codigo2[4],cidade1[20],cidade2[20];
    int populacao1,populacao2,pontos1,pontos2;
    float area1,area2,pib1,pib2;

    printf("Informe a letra do Estado, de A a H, da Carta 1:\n");
    scanf("%s", estado1);
    printf("Informe a letra do Estado, de A a H, da Carta 2:\n");
    scanf("%s", estado2);

    printf("Informe o código da Carta 1, sendo a letra do estado seguido de um número de 01 a 04, com três dígitos:\n");
    scanf("%s", codigo1);
    printf("Informe o código da Carta 2, sendo a letra do estado seguido de um número de 01 a 04, com três dígitos:\n");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade da Carta 1:\n");
    scanf("%s",cidade1);
    printf("Informe a nome da cidade da Carta 2:\n");
    scanf("%s",cidade2);
    
    printf("Informe a população da cidade da Carta 1:\n");
    scanf("%d", &populacao1);
    printf("Informe a população da cidade da Carta 2:\n");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade da Carta 1:\n");
    scanf("%f", &area1);
    printf("Informe a área da cidade da Carta 2:\n");
    scanf("%f", &area2);

    printf("Informe a PIB da cidade da Carta 1:\n");
    scanf("%f", &pib1);
    printf("Informe a PIB da cidade da Carta 2:\n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da cidade da Carta 1:\n");
    scanf("%d", &pontos1);
    printf("Informe o número de pontos turísticos da cidade da Carta 2:\n");
    scanf("%d", &pontos2);

    printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f Km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n", estado1,codigo1,cidade1,populacao1,area1,pib1,pontos1);
    printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f Km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n", estado2,codigo2,cidade2,populacao2,area2,pib2,pontos2);

    return 0;
}

