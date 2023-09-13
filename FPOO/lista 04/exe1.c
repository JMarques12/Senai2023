#include <stdio.h>

int main() {
    
    char nomes[5][50];
    float salarios[5];
    float percentual;
    int i;
    
    for ( i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nomes[i]);
        
        printf("Digite o salario da pessoa %d: ", i + 1);
        scanf("%f", &salarios[i]);
    }
    
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual);
    
    printf("\nResultados:\n");
    for ( i = 0; i < 5; i++) {
        float novoSalario = salarios[i] + (salarios[i] * (percentual / 100));
        printf("Nome: %s\n", nomes[i]);
        printf("Novo Salario: R$ %.2f\n", novoSalario);
    }
    
    return 0;
}
