#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int opcao;
    int cidadeVencedora;
    int resultadoCarta1;
    int resultadoCarta2;

    printf("Escolha o atributo para comparação\n");
    printf("1.Pontos Turísticos\n");
    printf("2.População\n");
    printf("3.Área\n");
    printf("4.PIB\n");
    printf("5.PIB per Capta\n");
    printf("6.Densidade Populacional\n");
    scanf ("%d", &opcao);

    switch (opcao)
    {
     
       case 1:
        printf("Digite os Pontos Turísticos da Primeira Carta: \n");
        scanf("%d", &resultadoCarta1);
         printf("Digite os Pontos Turísticos da Segunda Carta: \n");
        scanf("%d", &resultadoCarta1, resultadoCarta2);
       if (resultadoCarta1 > resultadoCarta2)
    {
        printf("Carta1 Venceu!\n");
    }   else {
        printf("Carta2 Venceu!");
    }
    break;
      case 2:
        printf("Digite a População da Primeira Carta: \n");
        scanf("%d", &resultadoCarta1);
         printf("Digite a População da Segunda Carta: \n");
        scanf("%d", &resultadoCarta1, resultadoCarta2);
       if (resultadoCarta1 > resultadoCarta2)
    {
        printf("Carta1 Venceu!\n");
    }   else {
        printf("Carta2 Venceu!");
    }
    break;
      case 3:
        printf("Digite a Área da Primeira Carta: \n");
        scanf("%d", &resultadoCarta1);
         printf("Digite a Área da Segunda Carta: \n");
        scanf("%d", &resultadoCarta1, resultadoCarta2);
       if (resultadoCarta1 > resultadoCarta2)
    {
        printf("Carta1 Venceu!\n");
    }   else {
        printf("Carta2 Venceu!");
    }
    break;
      case 4:
        printf("Digite o PIB da Primeira Carta: \n");
        scanf("%d", &resultadoCarta1);
         printf("Digite o PIB da Segunda Carta: \n");
        scanf("%d", &resultadoCarta1, resultadoCarta2);
       if (resultadoCarta1 > resultadoCarta2)
    {
        printf("Carta1 Venceu!\n");
    }   else {
        printf("Carta2 Venceu!");
    }
    break;
      case 5:
        printf("Digite o PIB Per Capta da Primeira Carta: \n");
        scanf("%d", &resultadoCarta1);
         printf("Digite o PIB Per Capta da Segunda Carta: \n");
        scanf("%d", &resultadoCarta1, resultadoCarta2);
       if (resultadoCarta1 > resultadoCarta2)
    {
        printf("Carta1 Venceu!\n");
    }   else {
        printf("Carta2 Venceu!");
    }
    break;
    case 6:
        printf("Digite Densidade Populacional da Primeira Carta: \n");
        scanf("%f", &resultadoCarta1);
         printf("Digite a Densidade Populacional da Segunda Carta: \n");
        scanf("%f", &resultadoCarta1, resultadoCarta2);
       if (resultadoCarta1 < resultadoCarta2)
    {
        printf("Carta1 Venceu!\n");
    }   else {
        printf("Carta2 Venceu!");
    }
    break;

    }
    
    
    
    
    
    
    
    
    
    }

   