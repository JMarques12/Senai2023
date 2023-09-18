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
     while (numero <= 0);}

    printf("Valores ímpares entre 0 e %d:\n", numero);
    
    for ( i = 1; i <= numero; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
