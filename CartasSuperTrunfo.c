#include <stdio.h>

//Teste Lucas Moradillo Pregueiro

int main() {

    printf("Desafio Super Trunfo - Países \n");

    char nome[50];
    char codigo[10];
    double populacao;
    double pib;
    double area;
    int turismo;


    printf("Digite o Nome da cidade: \n");
    scanf("%s", &nome);


    printf("Digite o Código da Cidade: \n");
    scanf("%s", &codigo);

    printf("Digite o tamanho da Populaçāo: \n");
    scanf("%e", &populacao);

    printf("Digite o PIB da cidade: \n");
    scanf("%e", &pib);

    printf("Digite a Área cidade: \n");
    scanf("%e", &area);

    printf("Digite quantos Pontos Turísticos tem a cidade: \n");
    scanf("%d", &turismo);

printf("Nome da cidade: - %s \n", nome);
printf("Código da Cidade: - %s \n", codigo);
printf("Populaçāo: - %e \n", populacao);
printf("PIB: - %e \n", pib);
printf("Área da cidade: - %e \n", area);
printf("Pontos Turísticos: - %d \n", turismo);

printf("Carta cadastrada com sucesso! \n");

    return 0;
}
