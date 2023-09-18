#include <stdio.h>

int main() {
    int numeros[5];
	int i;
	int j;
    
    for ( i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

   
    for ( i = 0; i < 4; i++) {
        for ( j = i + 1; j < 5; j++) {
            if (numeros[i] < numeros[j]) {
                
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    printf("Numeros em ordem decrescente: ");
    for ( i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
