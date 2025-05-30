#include <stdio.h>
#include <string.h>

int main() {
    // Atributos das duas cidades
    int cod1, cod2;
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;

    printf("== Cadastro da Cidade 1 ==\n");
    printf("Código: ");
    scanf("%d", &cod1);
    printf("Nome: ");
    scanf(" %[^\n]", nome1);  // espaço antes para capturar nome com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("\n== Cadastro da Cidade 2 ==\n");
    printf("Código: ");
    scanf("%d", &cod2);
    printf("Nome: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("\n== Comparação das Cartas ==\n");

    // População
    if (populacao1 > populacao2)
        printf("Maior população: %s\n", nome1);
    else if (populacao2 > populacao1)
        printf("Maior população: %s\n", nome2);
    else
        printf("As cidades têm a mesma população.\n");

    // Área
    if (area1 > area2)
        printf("Maior área: %s\n", nome1);
    else if (area2 > area1)
        printf("Maior área: %s\n", nome2);
    else
        printf("As cidades têm a mesma área.\n");

    // PIB
    if (pib1 > pib2)
        printf("Maior PIB: %s\n", nome1);
    else if (pib2 > pib1)
        printf("Maior PIB: %s\n", nome2);
    else
        printf("As cidades têm o mesmo PIB.\n");

    return 0;
}
