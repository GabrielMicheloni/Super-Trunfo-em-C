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

        //Exibindo os dados da Carta 1
        printf("Carta 1: \n");
        printf("Estado: %s\n", carta1.estado);
        printf("Cidade: %s\n", carta1.cidade);
        printf("Código: %s\n", carta1.codigo);
        printf("População: %.3f milhões\n", carta1.populacao);
        printf("Área: %.3f km²\n", carta1.area);
        printf("PIB: %.3f bilhões\n", carta1.pib);
        printf("Pontos Turísticos %d\n\n", carta1.pontos_turisticos);


        //Exibindo os dados da Carta 2
        printf("Carta 2: \n");
        printf("Estado: %s\n", carta2.estado);
        printf("Cidade: %s\n", carta2.cidade);
        printf("Código: %s\n", carta2.codigo);
        printf("População: %.3f milhões\n", carta2.populacao);
        printf("Área: %.3f km²\n", carta2.area);
        printf("PIB: %.3f bilhões\n", carta2.pib);
        printf("Pontos Turísticos %d\n\n", carta2.pontos_turisticos);


        return 0;
    }