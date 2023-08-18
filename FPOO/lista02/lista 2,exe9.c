#include <stdio.h>

float calcular_reajuste_salarial(float salario_atual) {
    float novo_salario;
    if (salario_atual >= 1500 && salario_atual < 1750) {
        novo_salario = salario_atual * 1.15;
    } else if (salario_atual >= 1750 && salario_atual < 2000) {
        novo_salario = salario_atual * 1.12;
    } else if (salario_atual >= 2000 && salario_atual < 3000) {
        novo_salario = salario_atual * 1.09;
    } else if (salario_atual >= 3000) {
        novo_salario = salario_atual * 1.06;
    } else {
        printf("Salário inválido.\n");
        return -1; // Indicador de erro
    }

    return novo_salario;
}

int main() {
    float salario_atual;
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario_atual);

    float novo_salario = calcular_reajuste_salarial(salario_atual);

    if (novo_salario != -1) {
        printf("O novo salario apos o reajuste é R$%.2f\n", novo_salario);
    }

    return 0;
}
