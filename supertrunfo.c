#include <stdio.h>

    // Desafio Super Trunfo;
    // 1- Cadastro de cartas com suas respectivas informações/dados;
    // 2- Leitura das informações/dados;
    // 3- Saída das informações/dados.

     typedef struct{
        char estado[50];
        char cidade[50];
        char codigo[50];
        float populacao; // Em milhões
        float area; // Em Km²
        float pib; // Em bilhões
        int pontos_turisticos; 
  } Carta;

    int main(){

        // Carta 1
        Carta carta1 = {
            .estado = "Bahia",
            .cidade = "Salvador",
            .codigo = "B01",
            .populacao = 2.418, // Em milhões
            .area = 693.442, // Em Km²
            .pib = 62.954, // Em bilhões
            .pontos_turisticos = 15
        };


        // Carta 2
        Carta carta2 = {
            .estado = "Ceara",
            .cidade = "Fortaleza",
            .codigo = "C02",
            .populacao = 2.574, // Em milhões
            .area = 312.353, // Em Km²
            .pib = 73.0, // Em bilhões
            .pontos_turisticos = 25
        };

        // Calculando a densidade populacional e o PIB per capita para a Carta 1

        float densidade_populacional1 = (carta1 .populacao * 1e6) / carta1.area; // População em habitantes, área em Km²
        float pib_per_capita1 = (carta1 .pib * 1e9) / (carta1 .populacao * 1e6); // PIB em reais, população em habitantes

         // Calculando a densidade populacional e o PIB per capita para a Carta 2
         float densidade_populacional2 = (carta2 .populacao * 1e6) / carta2.area; // População em habitantes, área em Km²
        float pib_per_capita2 = (carta2 .pib * 1e9) / (carta2 .populacao * 1e6); // PIB em reais, população em habitantes



        //Exibindo os dados da Carta 1
        printf("Carta 1: \n");
        printf("Estado: %s\n", carta1.estado);
        printf("Cidade: %s\n", carta1.cidade);
        printf("Código: %s\n", carta1.codigo);
        printf("População: %.3f milhões\n", carta1.populacao);
        printf("Área: %.3f km²\n", carta1.area);
        printf("PIB: %.3f bilhões\n", carta1.pib);
        printf("Pontos Turísticos %d\n\n", carta1.pontos_turisticos);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
        printf("PIB per Capita: %.2f reais\n\n", pib_per_capita1);



        //Exibindo os dados da Carta 2
        printf("Carta 2: \n");
        printf("Estado: %s\n", carta2.estado);
        printf("Cidade: %s\n", carta2.cidade);
        printf("Código: %s\n", carta2.codigo);
        printf("População: %.3f milhões\n", carta2.populacao);
        printf("Área: %.3f km²\n", carta2.area);
        printf("PIB: %.3f bilhões\n", carta2.pib);
        printf("Pontos Turísticos %d\n\n", carta2.pontos_turisticos);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("PIB per Capita: %.2f reais\n\n", pib_per_capita2);


        return 0;
    }
