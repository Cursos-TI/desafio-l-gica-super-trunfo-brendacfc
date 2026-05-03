#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define texto "Cartas do Super Trunfo."
        // DESAFIO NÍVEL MESTRE
// carta 1 - usuario
// carta 2 - computador

int main(){
    printf("%s\n", texto);

    //definir as variaveis carta 1 
    // USUARIO

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

    float densidade1 = populacao1 / area1;

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


//definir variaveis carta 2
// COMPUTADOR 

   // printf("Carta 2:\n");

    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    //gerar dados carta 2

// População
populacao2 = rand() % 100 + 1;

// Área 
area2 = rand() % 100 + 1;

// PIB 
pib2 = rand() % 100 + 1;

// Número de pontos turísticos
pontos2 = rand() % 100 + 1;

// densidade = populacao / area; 

    float densidade2 = populacao2 / area2;

// Densidade demográfica
densidade2 = rand() % 100 + 1;

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

printf("\n\n");

    printf("Densidade Populacional: %.2f hab/km². \n", densidade2);


        // comparar dois atributos

        // CARTA 1, usuario 
        // CARTA 2, computador 


// escolha do atributo 1 - menu , swith (resultado1 = atributo1 > atributo2 ? 1 : 0; ) , comparação usando o operador ternario 
// escolha do atributo 1 , gantatir que seja diferente ( atributo1 == atributo2 ) , if else swith 

        int resultado1, resultado2;
        char atributo1, atributo2;

            // atributo 1


        printf("Digite a letra referente ao primeiro atributo que deseja comparar:\n");
        printf("P. População \n");
        printf("A. Área \n");
        printf("I. PIB \n");
        printf("T. Número de pontos turísticos \n");
        printf("D. Densidade demográfica \n");
            scanf(" %c", &atributo1);

        
        switch (atributo1){

    case 'P':
    case 'p': // populacao
        printf("Atributo escolhido população \n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;
    
    case 'A':
    case 'a': // area
        printf("Atributo escolhido área \n");
        resultado1 = area1 > area2 ? 1 : 0;
    break;

    case 'I':
    case 'i': // PIB
        printf("Atributo escolhido PIB \n");
        resultado1 = pib1 > pib2 ? 1 : 0;
    break;

    case 'T':
    case 't': // pontos turísticos
        printf("Atributo escolhido pontos turísticos \n");
        resultado1 = pontos1 > pontos2 ? 1 : 0;
    break;

    case 'D':
    case 'd': // densidade 
                // maior valor vence [exceto densidade populacional]
        printf("Atributo escolhido densidade populacional \n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
    break;
        
    default:    
        printf("Opção inválida!\n");
    break;
        }

        // atributo 2

        printf("\n\n");

    printf("Digite a letra referente ao segundo atributo que deseja comparar:\n");
        printf("P. População \n");
        printf("A. Área \n");
        printf("I. PIB \n");
        printf("T. Número de pontos turísticos \n");
        printf("D. Densidade demográfica \n");
            scanf(" %c", &atributo2);

        if(atributo1 == atributo2){
            printf("Mesmo atributo escolhido, opção inválida!\n");
        } else {
            switch (atributo2){

    case 'P':
    case 'p': // populacao
        printf("Atributo escolhido população \n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;
    
    case 'A':
    case 'a': // area
        printf("Atributo escolhido área \n");
        resultado2 = area1 > area2 ? 1 : 0;
    break;

    case 'I':
    case 'i': // PIB
        printf("Atributo escolhido PIB \n");
        resultado2 = pib1 > pib2 ? 1 : 0;
    break;

    case 'T':
    case 't': // pontos turísticos
        printf("Atributo escolhido pontos turísticos \n");
        resultado2 = pontos1 > pontos2 ? 1 : 0;
    break;

    case 'D':
    case 'd': // densidade 
                // maior valor vence [exceto densidade populacional]
        printf("Atributo escolhido densidade populacional \n");
        resultado2 = densidade1 < densidade2 ? 1 : 0;
    break;
        
    default:    
        printf("Opção inválida!\n");
    break;
        }
    }
            // resultado da comparação

    if (resultado1 && resultado2){
        printf("Parabéns, você venceu! \n");
    } else if ((resultado1 != resultado2)){
        printf("Houve um empate! \n");
    } else {
        printf("Infelizmente, você perdeu! \n");
    }


printf("\n\n");



}