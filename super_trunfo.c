#include<stdio.h>

int main(){
    char estado1[2],estado2[2],codigo1[4],codigo2[4],cidade1[20],cidade2[20];
    int populacao1,populacao2,pontos1,pontos2,comppop,respop, comparea, resarea, comppib, respib, comppontos,respontos, compdens, resdens,comppibpc,respibpc,compsuper,ressuper;
    float area1,area2,pib1,pib2,dens1,dens2, pibpc1, pibpc2,SuperPoder1, SuperPoder2;

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

    dens1=(float)populacao1/area1;
    pibpc1=pib1*1000000000/populacao1;
    dens2=(float)populacao2/area2;
    pibpc2=pib2*1000000000/populacao2;

    SuperPoder1 = (float)populacao1+area1+pib1+(float)pontos1+pibpc1+(-dens1);
    SuperPoder2 = (float)populacao2+area2+pib2+(float)pontos2+pibpc2+(-dens2);


    comppop = populacao1>populacao2;
    respop = 2-comppop;
    comparea = area1>area2;
    resarea = 2 - comparea;
    comppib = pib1>pib2;
    respib = 2 - comppib;
    comppontos = pontos1>pontos2;
    respontos = 2 - comppontos;
    compdens = dens1<dens2;
    resdens = 2-compdens;
    comppibpc = pibpc1>pibpc2;
    respibpc = 2- comppibpc;
    compsuper = SuperPoder1>SuperPoder2;
    ressuper = 2 -compsuper;

    printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n\n", estado1,codigo1,cidade1,populacao1,area1,pib1,pontos1,dens1,pibpc1);
    printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n\n", estado2,codigo2,cidade2,populacao2,area2,pib2,pontos2,dens2,pibpc2);


    printf("Comparação de Cartas:\nPopulação: Carta %d venceu(%d)\nÁrea: Carta %d venceu(%d)\nPIB: Carta %d venceu(%d)\nPontos Turísticos: Carta %d venceu(%d)\nDensidade Populacional: Carta %d venceu(%d)\nPIB per Capita: Carta %d venceu(%d)\nSuper Poder: Carta %d venceu(%d)\n",respop,comppop,resarea,comparea,respib,comppib,respontos,comppontos,resdens,compdens,respibpc,comppibpc,ressuper,compsuper);
    return 0;
}

