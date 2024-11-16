#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
       int pontos;
       int populacao;
       char nome [40];
       char codigo [30];
       float area;
       char estado[20];
       float PIB;
       float densidade = populacao / area;
       float pib = PIB / populacao; // PIB per capita.
       
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

       printf ("Digite o nome da cidade:   \n");
       scanf ("%s" ,&nome );

       printf ("Digite o código da carta:   \n");
       scanf ("%s" ,&codigo );

       printf ("Digite o estado:    \n");
       scanf ("%s" ,&estado );

       printf ("Digite a população:   \n");
       scanf ("%d" ,&populacao );

       printf ("Digite a área:     \n");
       scanf ("%f",&area );

       printf ("Digite o PIB:     \n");
       scanf ("%f" ,&PIB );


       printf ("Digite os pontos turísticos:   \n");
       scanf ("%d" ,&pontos );

       printf ("Nome da cidade: %s\n", nome);
       printf ("Código da carta: %s\n", codigo);
       printf ("Estado: %s\n", estado);
       printf ("População: %d\n", populacao);
       printf ("Área: %f\n", area);
       printf ("PIB: %f\n", PIB);
       printf ("Pontos Turísticos: %d\n", pontos);

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

    if (populacaoA > populacaoB) {
         printf("Cidade 1 tem maior população.\n");
     } else {
        printf("Cidade 2 tem maior população.\n");
     }



    return 0;
}
