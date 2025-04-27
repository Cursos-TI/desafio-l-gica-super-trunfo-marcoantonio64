#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void cadastrarCarta(Carta *carta) {
    printf("\n--- Cadastro de Carta ---\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta->estado);
    printf("Cidade: ");
    scanf(" %[^\n]", carta->cidade);
    printf("Populacao: ");
    scanf("%d", &carta->populacao);
    printf("Area (km²): ");
    scanf("%f", &carta->area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta->pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void compararCartas(Carta c1, Carta c2, int atributo) {
    printf("\n--- Resultado da Comparacao ---\n");
    switch (atributo) {
        case 1: // População
            if (c1.populacao > c2.populacao)
                printf("%s venceu com maior populacao!\n", c1.cidade);
            else
                printf("%s venceu com maior populacao!\n", c2.cidade);
            break;
        case 2: // Área
            if (c1.area > c2.area)
                printf("%s venceu com maior area!\n", c1.cidade);
            else
                printf("%s venceu com maior area!\n", c2.cidade);
            break;
        case 3: // PIB
            if (c1.pib > c2.pib)
                printf("%s venceu com maior PIB!\n", c1.cidade);
            else
                printf("%s venceu com maior PIB!\n", c2.cidade);
            break;
        case 4: // Pontos Turísticos
            if (c1.pontosTuristicos > c2.pontosTuristicos)
                printf("%s venceu com mais pontos turísticos!\n", c1.cidade);
            else
                printf("%s venceu com mais pontos turísticos!\n", c2.cidade);
            break;
        default:
            printf("Atributo inválido!\n");
    }
}

int main() {
    Carta carta1, carta2;
    int atributo;

    printf("Cadastro da primeira carta:\n");
    cadastrarCarta(&carta1);

    printf("\nCadastro da segunda carta:\n");
    cadastrarCarta(&carta2);

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo);

    compararCartas(carta1, carta2, atributo);

    return 0;
}
