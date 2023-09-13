#include <stdio.h>

int main() {
    int vetor[10];
    int somaPares = 0, somaImpares = 0;
    int totalPares = 0, totalImpares = 0;
    int i;

    
    printf("Digite 10 numeros inteiros:\n");
    for ( i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            somaPares += vetor[i];
            totalPares++;
        } else {
            somaImpares += vetor[i];
            totalImpares++;
        }
    }

    
    float mediaPares = (totalPares > 0) ? (float)somaPares / totalPares : 0;
    float mediaImpares = (totalImpares > 0) ? (float)somaImpares / totalImpares : 0;

    
    printf("Soma dos numeros pares: %d\n", somaPares);
    printf("Media dos numeros pares: %.2f\n", mediaPares);
    printf("Total de numeros pares: %d\n", totalPares);
    printf("Soma dos numeros impares: %d\n", somaImpares);
    printf("Média dos numeros impares: %.2f\n", mediaImpares);
    printf("Total de numeros impares: %d\n", totalImpares);

    return 0;
}
