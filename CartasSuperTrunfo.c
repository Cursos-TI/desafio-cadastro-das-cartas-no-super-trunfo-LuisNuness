#include <stdio.h>

int main() {
    char codigo[4];   // Código da cidade (ex: A01)
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    // Solicita o código da cidade
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);

    // Solicita os dados da cidade
    printf("Digite a população (somente números): ");
    scanf("%d", &populacao);

    printf("Digite a área em km² (use ponto para separar decimais, ex: 123.45): ");
    scanf("%f", &area);

    printf("Digite o PIB em bilhões (use ponto para separar decimais, ex: 123.45): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos);

    // Exibe os dados cadastrados
    printf("\nInformações da Cidade %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);

    return 0;
}