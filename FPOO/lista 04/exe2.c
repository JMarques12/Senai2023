#include <stdio.h>
#include <string.h>

int main() {
    char times[5][50];
    int vitorias[5];
    int empates[5];
    int pontos[5];
	int i;
	int j;
    
    for ( i = 0; i < 5; i++) {
        printf("Digite o nome do time %d: ", i + 1);
        scanf("%s", times[i]);

        printf("Digite o número de vitórias do time %d: ", i + 1);
        scanf("%d", &vitorias[i]);

        printf("Digite o número de empates do time %d: ", i + 1);
        scanf("%d", &empates[i]);

        
        pontos[i] = (vitorias[i] * 3) + empates[i];
    }

    
    for ( i = 0; i < 4; i++) {
        for ( j = i + 1; j < 5; j++) {
        if (pontos[i] < pontos[j]) {
        int tempPontos = pontos[i];
        pontos[i] = pontos[j];
        pontos[j] = tempPontos;

        char tempNome[50];
        strcpy(tempNome, times[i]);
        strcpy(times[i], times[j]);
        strcpy(times[j], tempNome);

        int tempVitorias = vitorias[i];
        vitorias[i] = vitorias[j];
        vitorias[j] = tempVitorias;

    int tempEmpates = empates[i];
    empates[i] = empates[j];
    empates[j] = tempEmpates;
	}
}
}


    printf("\nClassificacao:\n");
    for (i = 0; i < 5; i++) {
        printf("Nome: %s\n", times[i]);
        printf("Pontos: %d\n", pontos[i]);
    }

    return 0;
}
