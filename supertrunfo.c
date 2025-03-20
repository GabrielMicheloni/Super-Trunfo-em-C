#include <stdio.h>

// Desafio Super Trunfo;
// 1- Cadastro de cartas com suas respectivas informações/dados;
// 2- Leitura das informações/dados;
// 3- Saída das informações/dados.

typedef struct {
    char estado[50];
    char cidade[50];
    char codigo[50];
    float populacao; // Em milhões
    float area; // Em Km²
    float pib; // Em bilhões
    int pontos_turisticos;
    float super_poder; // Novo campo para armazenar o Super Poder
} Carta;

int main() {
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
    float densidade_populacional1 = (carta1.populacao * 1e6) / carta1.area; // População em habitantes, área em Km²
    float pib_per_capita1 = (carta1.pib * 1e9) / (carta1.populacao * 1e6); // PIB em reais, população em habitantes

    // Calculando a densidade populacional e o PIB per capita para a Carta 2
    float densidade_populacional2 = (carta2.populacao * 1e6) / carta2.area; // População em habitantes, área em Km²
    float pib_per_capita2 = (carta2.pib * 1e9) / (carta2.populacao * 1e6); // PIB em reais, população em habitantes

    // Calculando o Super Poder para a Carta 1
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + carta1.pontos_turisticos + pib_per_capita1 + (1 / densidade_populacional1);

    // Calculando o Super Poder para a Carta 2
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + carta2.pontos_turisticos + pib_per_capita2 + (1 / densidade_populacional2);

    // Exibindo os dados da Carta 1
    printf("Carta 1: \n");
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Código: %s\n", carta1.codigo);
    printf("População: %.3f milhões\n", carta1.populacao);
    printf("Área: %.3f km²\n", carta1.area);
    printf("PIB: %.3f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n\n", carta1.super_poder);

    // Exibindo os dados da Carta 2
    printf("Carta 2: \n");
    printf("Estado: %s\n", carta2.estado);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Código: %s\n", carta2.codigo);
    printf("População: %.3f milhões\n", carta2.populacao);
    printf("Área: %.3f km²\n", carta2.area);
    printf("PIB: %.3f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n\n", carta2.super_poder);

    // Comparando as cartas atributo por atributo
    printf("Comparação das Cartas:\n");

    // Comparação de População
    printf("População: %s venceu (%d)\n", carta1.populacao > carta2.populacao ? "Carta 1" : "Carta 2", carta1.populacao > carta2.populacao);

    // Comparação de Área
    printf("Área: %s venceu (%d)\n", carta1.area > carta2.area ? "Carta 1" : "Carta 2", carta1.area > carta2.area);

    // Comparação de PIB
    printf("PIB: %s venceu (%d)\n", carta1.pib > carta2.pib ? "Carta 1" : "Carta 2", carta1.pib > carta2.pib);

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: %s venceu (%d)\n", carta1.pontos_turisticos > carta2.pontos_turisticos ? "Carta 1" : "Carta 2", carta1.pontos_turisticos > carta2.pontos_turisticos);

    // Comparação de Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: %s venceu (%d)\n", densidade_populacional1 < densidade_populacional2 ? "Carta 1" : "Carta 2", densidade_populacional1 < densidade_populacional2);

    // Comparação de PIB per Capita
    printf("PIB per Capita: %s venceu (%d)\n", pib_per_capita1 > pib_per_capita2 ? "Carta 1" : "Carta 2", pib_per_capita1 > pib_per_capita2);

    // Comparação de Super Poder
    printf("Super Poder: %s venceu (%d)\n", carta1.super_poder > carta2.super_poder ? "Carta 1" : "Carta 2", carta1.super_poder > carta2.super_poder);

    return 0;
}
