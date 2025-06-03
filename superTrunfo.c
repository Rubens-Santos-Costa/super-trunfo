//Primeiro desafio da materia Introdução à Programação de Computadores de Engenharia de Software
//Tema 1 - Super Trunfo em c: Fundamentos e Técnicas Avançadas


#include <stdio.h>

int main(){

    char estado;
    char codigo[3];
    char nomeCidade[20];
    int populacao;
    float areaCidadeKm;
    float PIB;
    int pontosTuristicos;


    char estadoDois;
    char codigoDois[3];
    char nomeCidadeDois[20];
    int populacaoDois;
    float areaCidadeKmDois;
    float PIBDois;
    int pontosTuristicosDois;
    
    // inicio do programa
    printf("\nBem-vindo ao Super Trunfo, voce podera inserir dados referentes ate duas cartas\n\n");

    //defini uma letra para o estado
    printf("Informe uma letra de A ate H para representar seu Estado\n");
    scanf("%c", &estado);
    
    //defini um codigo para cidade
    printf("Agora iremos definir o codigo da carta, o codigo da carta sera a letra anterior mais o numero que voce ira informar agora, voce devera informa um dos quatros numeros a seguir: 01,02,03 ou 04.\n");
    scanf("%s", codigo);

    //defini o nome da cidade
    printf("insira o nome da cidade: \n");
    scanf("%s", nomeCidade);

    // defini o numero de habitantes
    printf("informe o numero de habitantes da cidade: \n");
    scanf("%d", &populacao);

    // defini a area da cidade em Km
    printf("qual a area da cidade em Km quadrados: \n");
    scanf("%f", &areaCidadeKm);

    // defini o PIB da cidade
    printf("qual o PIB da cidade: \n");
    scanf("%f", &PIB);

    // defini a quantidade de pontos turisticos na cidade
    printf("Quantos pontos turisticos tem na cidade: \n");
    scanf("%d", &pontosTuristicos);
    
    //exibi os atributos da primeira carta

    printf(" \nA sua primeira carta tem os seguintes atributos: \n");
    printf("carta 1: \n");
    printf("\nEstado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area da cidade em Km: %f\n", areaCidadeKm);
    printf("PIB: %f\n", PIB);
    printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos);


    //repetir o procedimento, porém em variaveis diferentes para definir a carta nº 2
    printf("\nAgora vamos definir os atributos da segunda carta\n");


        //defini uma letra para o estado
        printf("Informe uma letra de A ate H para representar seu Estado\n");
        scanf(" %c", &estadoDois);
        
        //defini um codigo para cidade
        printf("Agora iremos definir o codigo da carta, o codigo da carta sera a letra anterior mais o numero que voce ira informar agora, voce devera informa um dos quatros numeros a seguir: 01,02,03 ou 04.\n");
        scanf("%s", codigoDois);
    
        //defini o nome da cidade
        printf("insira o nome da cidade: \n");
        scanf("%s", nomeCidadeDois);
    
        // defini o numero de habitantes
        printf("informe o numero de habitantes da cidade: \n");
        scanf("%d", &populacaoDois);
    
        // defini a area da cidade em Km
        printf("qual a area da cidade em Km quadrados: \n");
        scanf("%f", &areaCidadeKmDois);
    
        // defini o PIB da cidade
        printf("qual o PIB da cidade: \n");
        scanf("%f", &PIBDois);
    
        // defini a quantidade de pontos turisticos na cidade
        printf("Quantos pontos turisticos tem na cidade: \n");
        scanf("%d", &pontosTuristicosDois);

        //exibi os atributos da segunda carta carta

        printf(" \nA sua segunda carta tem os seguintes atributos: \n");
        printf("carta 2: \n");
        printf("\nEstado: %c\n", estadoDois);
        printf("Codigo: %s\n", codigoDois);
        printf("Nome da cidade: %s\n", nomeCidadeDois);
        printf("Populacao: %d\n", populacaoDois);
        printf("Area da cidade em Km: %f\n", areaCidadeKmDois);
        printf("PIB: %f\n", PIBDois);
        printf("Quantidade de pontos turisticos: %d\n", pontosTuristicosDois);

        printf(" \n*********************************** \n");
        printf(" \nRESULTADO FINAL: \n");
    
        //carta 1
        printf("carta 1: \n");
        printf("\nEstado: %c\n", estado);
        printf("Codigo: %s\n", codigo);
        printf("Nome da cidade: %s\n", nomeCidade);
        printf("Populacao: %d\n", populacao);
        printf("Area da cidade em Km: %f\n", areaCidadeKm);
        printf("PIB: %f\n", PIB);
        printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos);

        //carta 2
        printf("carta 2: \n");
        printf("\nEstado: %c\n", estadoDois);
        printf("Codigo: %s\n", codigoDois);
        printf("Nome da cidade: %s\n", nomeCidadeDois);
        printf("Populacao: %d\n", populacaoDois);
        printf("Area da cidade em Km: %f\n", areaCidadeKmDois);
        printf("PIB: %f\n", PIBDois);
        printf("Quantidade de pontos turisticos: %d\n", pontosTuristicosDois);
    return 0;
}