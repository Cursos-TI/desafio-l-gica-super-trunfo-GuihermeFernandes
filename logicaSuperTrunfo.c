#include <stdio.h>


int main() {

    int populacao, turista, populacao2, turista2;
    char estado[10], nome[20], codigo[5], estado2[10], nome2[20], codigo2[5];
    float pib, area, pib2, area2, desidade, ppc, desidade2, ppc2;

    printf("Para o desafio do Super Trufo insira as seguintes informações: \n");
    
    
    printf("Estado: ");
    scanf("%s", &estado);

    printf("Codigo: ");
    scanf("%s", &codigo);

    printf("Nome da cidade: ");
    scanf("%s", &nome);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Turistas: ");
    scanf("%d", &turista);

    desidade = populacao / area;
    ppc = pib / populacao;



    printf("\nInsira as informações da segunda carta: \n");

    printf("Estado: ");
    scanf("%s", &estado2);

    printf("Codigo: ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", &nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Turistas: ");
    scanf("%d", &turista2);

    desidade2 = populacao2 / area2;
    ppc2 = pib2 / populacao2;
    

    printf("\nAs cartas são as seguinte:\n");
    
    printf("\n***Primeira Carta***\n");
    printf("\nEstado: %s\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f KM²\nPIB: %.2f bilhões de reais\nNumero de turistas: %d\ndesidade populacional: %.2f hab/km²\nPIB Per Capita: %.2f reais\n", estado, codigo,nome,populacao,area,pib,turista,desidade, ppc);
    printf("\n***Segunda Carta***\n");
    printf("\nEstado: %s\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f KM²\nPIB: %.2f bilhões de reais\nNumero de turistas: %d\ndesidade populacional: %.2f hab/km²\nPIB Per Capita: %.2f reais\n", estado2, codigo2,nome2,populacao2,area2,pib2,turista2,desidade2,ppc2);


    printf("\n***O resultado das compracoes***\n");

    if (populacao>populacao2)
    {
        printf("\nCarta 1 venceu em populacao\n");
    } else{
        printf("\nCarta 2 venceu em populacao\n");
    }

    if (area>area2)
    {
        printf("Carta 1 venceu em area\n");
    } else{
        printf("Carta 2 venceu em area\n");
    }

    if (pib>pib2)
    {
        printf("Carta 1 venceu em PIB\n");
    } else{
        printf("Carta 2 venceu em PIB\n");
    }

    if (ppc>ppc2)
    {
        printf("Carta 1 venceu em PIB Per Capita\n");
    } else{
        printf("Carta 2 venceu em PIB Per Capita\n");
    }

    if (desidade<desidade2)
    {
        printf("Carta 1 venceu em Densidade populacional\n");
    } else{
        printf("Carta 2 venceu em Densidade populacional\n");
    }

    if (turista>turista2)
    {
        printf("Carta 1 venceu em Turistas\n");
    } else{
        printf("Carta 2 venceu em Turistas\n");
    }
    
return 0;
}
}
