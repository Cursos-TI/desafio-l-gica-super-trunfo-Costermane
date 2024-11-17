#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
       int pontos1;
       int populacao1;
       char nome1 [40];
       char codigo1 [30];
       float area1;
       char estado1[20];
       float PIB1;
       float densidade1 = populacao1 / area1;
       float pib1 = PIB1 / populacao1; // PIB per capita.
       int pontos2;
       int populacao2;
       char nome2 [40];
       char codigo2 [30];
       float area2;
       char estado2[20];
       float PIB2;
       float densidade2 = populacao2 / area2;
       float pib2 = PIB2 / populacao2; // PIB per capita.
       char cartaVencedora;
       char resultado;
     

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

       printf ("Digite o nome da 1° Cidade:   \n");
       scanf ("%s" ,&nome1 );

       printf ("Digite o código da 1° Carta:   \n");
       scanf ("%s" ,&codigo1 );

       printf ("Digite o 1° Estado:    \n");
       scanf ("%s" ,&estado1 );

       printf ("Digite a 1° População:   \n");
       scanf ("%d" ,&populacao1 );

       printf ("Digite a 1° Área:     \n");
       scanf ("%f",&area1 );

       printf ("Digite o 1° PIB:     \n");
       scanf ("%f" ,&PIB1 );

       printf ("Digite os Pontos Turísticos da 1° Carta:   \n");
       scanf ("%d" ,&pontos1 );

        printf ("Digite o nome da 2° Cidade:   \n");
       scanf ("%s" ,&nome2 );

       printf ("Digite o código da 2° Carta:   \n");
       scanf ("%s" ,&codigo2 );

       printf ("Digite o 2° Estado:    \n");
       scanf ("%s" ,&estado2 );

       printf ("Digite a 2° População:   \n");
       scanf ("%d" ,&populacao2 );

       printf ("Digite a 2° Área:     \n");
       scanf ("%f",&area2);

       printf ("Digite o 2° PIB:     \n");
       scanf ("%f" ,&PIB2);

       printf ("Digite os pontos turísticos da 2° Carta:   \n");
       scanf ("%d" ,&pontos2 );

       /*printf ("Nome da cidade: %s\n", nome);
       printf ("Código da carta: %s\n", codigo);
       printf ("Estado: %s\n", estado);
       printf ("População: %d\n", populacao);
       printf ("Área: %f\n", area);
       printf ("PIB: %f\n", PIB);
       printf ("Pontos Turísticos: %d\n", pontos);*/

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

      if (populacao1 >= populacao2) {
         printf("Cidade 1 tem maior População.\n");
     } else {
        printf("Cidade 2 tem maior População.\n");
     }

     if (pontos1 >= pontos2) {
         printf("Cidade 1 tem mais Pontos Turísticos.\n");
     } else {
        printf("Cidade 2 tem menos Pontos Turísticos.\n");
     }

      if (area1 >= area2) {
         printf("Cidade 1 tem maior Área.\n");
     } else {
        printf("Cidade 2 tem maior Área.\n");
     }

      if (PIB1 >= PIB2) {
         printf("Cidade 1 tem maior PIB.\n");
     } else {
        printf("Cidade 2 tem maior PIB.\n");
     }

      if (densidade1 >= densidade2) {
         printf("Cidade 1 tem maior Densidade.\n");
     } else {
        printf("Cidade 2 tem maior Densidade.\n");
     }

      if (pib1 >= pib2) {
         printf("Cidade 1 tem maior PIB Per Capita.\n");
     } else {
        printf("Cidade 2 tem maior PIB Per Capita.\n");
     }

   return 0;
}
