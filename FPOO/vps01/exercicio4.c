#include <stdio.h>

int main(){
    int itens;
    int i;
    
    printf("Quantos itens Jorge comprou?: ");
    scanf("%d", &itens);

    if (itens <= 0) {
        printf("Quantidade de itens invalida. Encerrando o programa.\n");
        return 1;
    }

    char nomes[itens][50];
    float custos[itens];

    for ( i = 0; i < itens; i++) {
        printf("Digite o nome do item #%d: ", i + 1);
        scanf("%s", nomes[i]);
        
        printf("Digite o custo do item #%d: ", i + 1);
        scanf("%f", &custos[i]);
    }
    
    float lucro;
    printf("Digite a margem de lucro esperada por Jorge (em porcentagem): ");
    scanf("%f", &lucro);

    printf("produto\t\tpreco :\n");
    for ( i = 0; i < itens; i++){
	 
        float venda = custos[i] + (custos[i] * lucro / 100.0);
        printf("%s\t\tR$ %.2f\n", nomes[i], venda);
        
    }
	}
