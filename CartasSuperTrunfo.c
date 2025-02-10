#include <stdio.h>

int main() {
    char codigo1[4], codigo2[4];   // Códigos das cidades (ex: A01, B02)
    char cidade1[50], cidade2[50];  // Nomes das cidades
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    // Cadastro da primeira cidade
    printf("Digite o código da cidade 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade 1: ");
    scanf(" %[^\n]%*c", cidade1);  // Para aceitar espaços no nome
    printf("Digite a população da cidade 1 (somente números): ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade 1 em km² (ex: 123.45): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1 em bilhões (ex: 123.45): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda cidade
    printf("\nDigite o código da cidade 2 (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]%*c", cidade2);  // Para aceitar espaços no nome
    printf("Digite a população da cidade 2 (somente números): ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade 2 em km² (ex: 123.45): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2 em bilhões (ex: 123.45): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

    // Calcula a densidade populacional e PIB per capita das duas cidades
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Exibe as informações das cidades
    printf("\nInformações da Cidade 1 (%s):\n", codigo1);
    printf("Nome: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f unidades monetárias\n", pibPerCapita1);

    printf("\nInformações da Cidade 2 (%s):\n", codigo2);
    printf("Nome: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f unidades monetárias\n", pibPerCapita2);

    // Comparação pela População
    printf("\nComparação pela População:\n");
    if (populacao1 > populacao2) {
        printf("A cidade %s venceu com maior população.\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("A cidade %s venceu com maior população.\n", cidade2);
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    // Comparação pela Área
    printf("\nComparação pela Área:\n");
    if (area1 > area2) {
        printf("A cidade %s venceu com maior área.\n", cidade1);
    } else if (area2 > area1) {
        printf("A cidade %s venceu com maior área.\n", cidade2);
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }

    // Comparação pelo PIB
    printf("\nComparação pelo PIB:\n");
    if (pib1 > pib2) {
        printf("A cidade %s venceu com maior PIB.\n", cidade1);
    } else if (pib2 > pib1) {
        printf("A cidade %s venceu com maior PIB.\n", cidade2);
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }

    // Comparação pelo Número de Pontos Turísticos
    printf("\nComparação pelo Número de Pontos Turísticos:\n");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("A cidade %s venceu com mais pontos turísticos.\n", cidade1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("A cidade %s venceu com mais pontos turísticos.\n", cidade2);
    } else {
        printf("As duas cidades têm o mesmo número de pontos turísticos.\n");
    }

    return 0;
}
