#include <stdio.h>

int main() {
    int numero1, numero2;
	int i;
    do {
        printf("Digite o primeiro valor inteiro: ");
        scanf("%d", &numero1);

        printf("Digite o segundo valor inteiro (diferente do primeiro): ");
        scanf("%d", &numero2);

        if (numero1 == numero2) {
            printf("Os valores devem ser diferentes. Tente novamente.\n");
        }
    } while (numero1 == numero2);

    printf("Valores entre %d e %d:\n", numero1, numero2);

    int menor = (numero1 < numero2) ? numero1 : numero2;
    int maior = (numero1 > numero2) ? numero1 : numero2;

    for ( i = menor; i <= maior; i++) {
        printf("%d ", i);
    }
    
    return 0;
}
