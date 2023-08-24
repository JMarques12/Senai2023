#include <stdio.h>

int main() {
    int numero;
	int i;
    do {
        printf("Digite um valor inteiro positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Por favor, digite um valor inteiro positivo.\n");
        }
    } while (numero <= 0);

   
    printf("Valores entre 0 e %d:\n", numero);
    for ( i = 0; i <= numero; i++) {
        printf("%d ", i);
    }
    
    return 0;
}
