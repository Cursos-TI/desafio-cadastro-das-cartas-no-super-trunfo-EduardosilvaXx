#include <stdio.h>

int main() {
    printf("Desafio de cartas\n");

    char estado;
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int turismo;

    printf("Digite o estado: \n");
    scanf("%c", &estado);
    printf("O estado escolhido: %c\n", estado);
    
    printf("Digite o codigo: \n");
    scanf("%s", codigo);
    printf("O codigo da carta é: %s\n", codigo);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);
    printf("A cidade é: %s\n", cidade);
    
    printf("Digite a população: \n");
    scanf("%i", &populacao);
    printf("A população da cidade é: %i\n", populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area);
    printf("A area da cidade é: %f\n", area);

    printf("Digite o Produto Interno Bruno: \n");
    scanf("%f", &PIB);
    printf("O produto interno Bruto é: %f\n", PIB);


    
    return 0;

}
