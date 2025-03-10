#include <stdio.h>

int main() {
    printf("Desafio de cartas\n");

    printf("\nCARTA 01\n");

    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int PontosTuristicos1;

    printf("Digite o estado: \n");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo: \n");
    scanf("%s", codigo1);

    printf("Digite a cidade: \n");
    scanf("%s", cidade1);
    
    printf("Digite a população: \n");
    scanf("%i", &populacao1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%i", &PontosTuristicos1);

    printf("\nCARTA 02\n");

    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int PontosTuristicos2;

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo: \n");
    scanf("%s", codigo2);

    printf("Digite a cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%i", &populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%i", &PontosTuristicos2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %i\n", PontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %i\n", PontosTuristicos2);

    return 0;

}
