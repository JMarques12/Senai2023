#include <stdio.h>

int main() {
    char nome[50];
    float preco;
    float desconto;
    int i;


    printf("Digite o valor do desconto percentual: ");
    scanf("%f", &desconto);

    for ( i = 1; i <= 10; i++) {
        printf("Digite o nome da mercadoria %d: ", i);
        scanf("%s", nome);

        printf("Digite o pre�o da mercadoria %d: ", i);
        scanf("%f", &preco);

      
        float valorDesconto = (desconto / 100.0) * preco;

        
        float precoFinal = preco - valorDesconto;

       
        printf("Nome: %s\n", nome);
        printf("Pre�o original: %.2f\n", preco);
        printf("Valor do desconto: %.2f\n", valorDesconto);
        printf("Pre�o final com desconto: %.2f\n", precoFinal);
    }

    return 0;
}
