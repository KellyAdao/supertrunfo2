#include <stdio.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para comparar dois países e exibir o vencedor em cada atributo
void comparar_cartas(Carta c1, Carta c2) {
    printf("\n===== Comparacao de Atributos =====\n");

    // Função auxiliar para exibir o vencedor de cada atributo
    void exibir_resultado(const char *atributo, float valor1, float valor2, int menor_vence) {
        printf("%s:\n%s: %.2f vs %s: %.2f\n", atributo, c1.nome, valor1, c2.nome, valor2);
        if (valor1 == valor2) {
            printf("Resultado: Empate!\n\n");
        } else if ((menor_vence && valor1 < valor2) || (!menor_vence && valor1 > valor2)) {
            printf("Resultado: %s venceu!\n\n", c1.nome);
        } else {
            printf("Resultado: %s venceu!\n\n", c2.nome);
        }
    }

    // Comparações
    exibir_resultado("Populacao", c1.populacao, c2.populacao, 0);
    exibir_resultado("Area", c1.area, c2.area, 0);
    exibir_resultado("PIB", c1.pib, c2.pib, 0);
    exibir_resultado("Numero de pontos turisticos", c1.pontos_turisticos, c2.pontos_turisticos, 0);
    exibir_resultado("Densidade Demografica", c1.densidade_demografica, c2.densidade_demografica, 1);
}

// Função para capturar os dados da carta
Carta obter_dados_carta(int numero) {
    Carta c;
    printf("\nInforme os dados da carta %d:\n", numero);

    printf("Nome do pais: ");
    scanf(" %[^\n]", c.nome); // Captura nome com espaços

    printf("Populacao: ");
    scanf("%d", &c.populacao);

    printf("Area (km2): ");
    scanf("%f", &c.area);

    printf("PIB (em bilhoes de dolares): ");
    scanf("%f", &c.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &c.pontos_turisticos);

    // Calcula a densidade demográfica
    c.densidade_demografica = c.populacao / c.area;

    return c;
}

int main() {
    // Captura os dados das duas cartas
    Carta carta1 = obter_dados_carta(1);
    Carta carta2 = obter_dados_carta(2);

    // Comparar os países em todos os atributos
    comparar_cartas(carta1, carta2);

    return 0;
}
