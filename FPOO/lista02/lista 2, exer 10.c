#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    float media = (nota1 + nota2 + nota3) / 3;

    printf("Média: %.2f\n", media);

    if (media >= 6) {
        printf("Situação: Aprovado\n");
    } else if (media >= 4) {
        printf("Situação: Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}
