#include <stdio.h>
#define texto "Cartas do Super Trunfo."

int main(){
    printf("%s\n", texto);

    //definir as variaveis carta 1

    char estado1[50];
    char codigo1[50];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

//receber dados carta 1

    printf("Carta 1:\n");

printf("Digite o Estado:\n");
scanf("%s", estado1);

printf("Digite o Código da Carta:\n");
scanf("%s", codigo1);

printf("Digite o Nome da Cidade:\n");
scanf("%s", cidade1);

printf("Digite a População:\n");
scanf("%d", &populacao1);

printf("Digite a Área:\n");
scanf("%f", &area1);

printf("Digite o PIB:\n");
scanf("%f", &pib1);

printf("Digite o Número de Pontos Turísticos:\n");
scanf("%d", &pontos1);

// densidade = populacao / area; 
// pibpercapita = pib / populacao;

    float densidade1 = populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;


//definir variaveis carta 2

    printf("Carta 2:\n");

    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

//receber dados carta 2

printf("Digite o Estado:\n");
scanf(" %s", estado2);

printf("Digite o Código da Carta:\n");
scanf("%s", codigo2);

printf("Digite o Nome da Cidade:\n");
scanf("%s", cidade2);

printf("Digite a População:\n");
scanf("%d", &populacao2);

printf("Digite a Área:\n");
scanf("%f", &area2);

printf("Digite o PIB:\n");
scanf("%f", &pib2);

printf("Digite o Número de Pontos Turísticos:\n");
scanf("%d", &pontos2);

// densidade = populacao / area; 
// pibpercapita = pib / populacao;

    float densidade2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

//resultados da carta 1

    printf("\n\n");
    printf("Carta 1\n");

printf("Estado: %s.\n", estado1);
printf("Código da Carta: %s.\n", codigo1);
printf("Nome da Cidade: %s.\n", cidade1);
printf("População: %d.\n", populacao1);
printf("Área: %.2f km².\n", area1);
printf("PIB: %.2f bilhões de reais.\n", pib1);
printf("Número de Pontos Turísticos: %d.\n", pontos1);


    printf("Densidade Populacional: %.2f hab/km². \n", densidade1);
    printf("PIB per Capita: %.2f reais. \n", pibpercapita1);

//resultados da carta 2

    printf("\n\n");
    printf("Carta 2\n");

printf("Estado: %s.\n", estado2);
printf("Código da Carta: %s.\n", codigo2);
printf("Nome da Cidade: %s.\n", cidade2);
printf("População: %d.\n", populacao2);
printf("Área: %.2f km².\n", area2);
printf("PIB: %.2f bilhões de reais.\n", pib2);
printf("Número de Pontos Turísticos: %d.\n", pontos2);

    printf("Densidade Populacional: %.2f hab/km². \n", densidade2);
    printf("PIB per Capita: %.2f reais. \n", pibpercapita2);


// comparar um atributo da carta 1 com a carta 2 
// atributo: PIB

// determinar a carta vencedora
    // maior valor vence [exceto densidade populacional]

//exibir resultado da comparação, carta, atributo e valores das duas cartas 
   
    printf("\n\n");
    printf("Comparação - PIB\n");

    printf("Carta 1: %.2f bilhões de reais. \n", pib1);
    printf("Carta 2: %.2f bilhões de reais. \n", pib2);
    
    printf("\n");
if(pib1 > pib2){
    printf("Carta 1 venceu!\n");
    
}else{
    printf("Carta 2 venceu!\n");
}

}