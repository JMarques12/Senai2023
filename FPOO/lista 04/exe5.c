#include <stdio.h>

int main() {
    char cidade[50];
    int eleitores, votosApurados;
    float participacao;
    int i;

    for ( i = 1; i <= 5; i++) {
        printf("Digite o nome da cidade %d: ", i);
        scanf("%s", cidade);

        printf("Digite o número total de eleitores em %s: ", cidade);
        scanf("%d", &eleitores);

        printf("Digite o total de votos apurados em %s na última eleição: ", cidade);
        scanf("%d", &votosApurados);

        participacao = ((float)votosApurados / eleitores) * 100.0;

        printf("A participação em %s foi de %.2f%%\n", cidade, participacao);
    }
    return 0;
}
