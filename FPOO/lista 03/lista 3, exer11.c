#include <stdio.h>

int main() {
    int numeros[5];
    int i;
    int cre;
    
    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    for (i = 0; i < 4; i++) {
        int minIndex = i;
        for (cre = i + 1; cre < 5; cre++) {
            if (numeros[cre] < numeros[minIndex]) {
                minIndex = cre;
            }
        }
        int temp = numeros[i];
        numeros[i] = numeros[minIndex];
        numeros[minIndex] = temp;
    }
    
    printf("Numeros em ordem crescente: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    
    return 0;
}

