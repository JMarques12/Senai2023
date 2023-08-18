#include <stdio.h>

int main() {
    char peca[20];
    float preco, desconto, valor_final;

    printf("Digite a pe�a (camisa, bermuda ou cal�a): ");
    scanf("%s", peca);

    printf("Digite o pre�o da pe�a: ");
    scanf("%f", &preco);

    if (strcmp(peca, "camisa") == 0) {
        desconto = 0.20;
    } else if (strcmp(peca, "bermuda") == 0) {
        desconto = 0.10;
    } else if (strcmp(peca, "cal�a") == 0) {
        desconto = 0.15;
    } else {
        printf("Pe�a n�o reconhecida.\n");
        return 1; // Encerrar o programa com erro
    }

    valor_final = preco * (1 - desconto);

    printf("Desconto aplicado: %.2f%%\n", desconto * 100);
    printf("Valor final da venda: R$%.2f\n", valor_final);

    } 




