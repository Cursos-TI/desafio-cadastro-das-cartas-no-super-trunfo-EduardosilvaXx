#include <stdio.h>

int main() {
    printf("Desafio de cartas\n");
    
    char estado;
    char codigo[20];
    char cidade[30];
    int populacao;
    float area;
    float PIB;
    int PontoTuristico;

    printf("Digite o estado: \n");
    scanf("%c", &estado);
    printf("Estado: %c\n", estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo);
    printf("Cidade: %s\n", codigo);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);
    printf("Cidade: %s\n", cidade);

    printf("Digite a população: \n");
    scanf("%i", &populacao);
    printf("A população é: %i\n", populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("A area é: %f\n", area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("O Produto Interno Bruto é: %f\n", PIB);
    
    printf("Digite a quantidade de pontos turiscos: \n");
    scanf("%i", &PontoTuristico);
    printf("A quantidade de pontos turisticos é: %i\n", PontoTuristico);

    printf("Codigo: %s\n", codigo);
    printf("Estado: %s - Cidade: %s\n", estado, cidade);
    printf("Area: %f - População: %i\n", area, populacao);
    printf("Pontos Turiscos: %i - Produto Interno Bruto: %f", PontoTuristico, PIB);


    return 0;

}
