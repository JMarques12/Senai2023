#include <stdio.h>
#include <string.h>
int main() {
    char nome[50];
    float preco, precoMaisCaro = 0, precoMaisBarato = 0;
    char nomeMaisCaro[50], nomeMaisBarato[50];
    int i;

    for ( i = 1; i <= 5; i++) {
        printf("Digite o nome da mercadoria %d: ", i);
        scanf("%s", nome);

        printf("Digite o preço da mercadoria %d: ", i);
        scanf("%f", &preco);

        if (i == 1 || preco > precoMaisCaro) {
            precoMaisCaro = preco;
            strcpy(nomeMaisCaro, nome);
        }

        if (i == 1 || preco < precoMaisBarato) {
            precoMaisBarato = preco;
            strcpy(nomeMaisBarato, nome);
        }
    }

    printf("A mercadoria mais cara é: %s, com preço de %.2f\n", nomeMaisCaro, precoMaisCaro);
    printf("A mercadoria mais barata é: %s, com preço de %.2f\n", nomeMaisBarato, precoMaisBarato);

    return 0;
}
