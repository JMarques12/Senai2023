#include <stdio.h>
int main() {
    char nome[50];
    float preco;
    int i;
    
    for ( i = 1; i <= 5; i++) {
        printf("Digite o nome da mercadoria %d: ", i);
        scanf("%s", nome);
        printf("Digite o preço da mercadoria %d: ", i);
        scanf("%f", &preco);
        if (preco < 1000) {
            preco *= 1.05;
        } else {
            preco *= 1.07;
        }
        printf("Nome: %s\n", nome);
        printf("Novo preço: %.2f\n", preco);
    }
    
    return 0;
}
