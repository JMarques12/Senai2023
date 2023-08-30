#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CANDIDATES 10

struct Candidate {
    char name[50];
    int votes;
    float percentage;
};

int compareCandidates(const void *a, const void *b) {
    return ((struct Candidate *)b)->percentage - ((struct Candidate *)a)->percentage;
}

int main() {
    char city[50];
    int numCandidates, totalValidVotes = 0, totalVotes = 0, validVotes = 0, numValidCandidates = 0;
    struct Candidate candidates[MAX_CANDIDATES];

    printf("Digite o nome da cidade: ");
    scanf("%s", city);

    printf("Digite o numero de candidatos: ");
    scanf("%d", &numCandidates);
    
    int i;

    for (i = 0; i < numCandidates; i++) {
        printf("Digite o nome do candidato %d: ", i + 1);
        scanf("%s", candidates[i].name);

        printf("Digite o total de votos do candidato %s: ", candidates[i].name);
        scanf("%d", &candidates[i].votes);

        totalVotes += candidates[i].votes;

        if (candidates[i].votes >= 0) {
            validVotes += candidates[i].votes;
            numValidCandidates++;
        }
    }

    int blankVotes, invalidVotes;
    printf("Digite o total de votos em branco: ");
    scanf("%d", &blankVotes);

    printf("Digite o total de votos nulos: ");
    scanf("%d", &invalidVotes);

    validVotes += blankVotes;

    if (validVotes > invalidVotes && validVotes > 200000) {
        printf("\nEleicao valida em %s.\n", city);

        printf("\nResultado da eleicao:\n");
        for (i = 0; i < numCandidates; i++) {
            candidates[i].percentage = (float)candidates[i].votes / validVotes * 100;
            if (candidates[i].votes >= 0) {
                printf("%s: %.2f%%\n", candidates[i].name, candidates[i].percentage);
                totalValidVotes += candidates[i].votes;
            }
        }

        float blankPercentage = (float)blankVotes / validVotes * 100;
        float invalidPercentage = (float)invalidVotes / validVotes * 100;

        printf("Votos em branco: %.2f%%\n", blankPercentage);
        printf("Votos nulos: %.2f%%\n", invalidPercentage);

        if (totalValidVotes > 0) {
            qsort(candidates, numCandidates, sizeof(struct Candidate), compareCandidates);

            if (candidates[0].percentage >= 50.0) {
                printf("\nO candidato %s foi eleito(a) com %.2f%% dos votos!\n", candidates[0].name, candidates[0].percentage);
            } else {
                printf("\nSegundo turno!\n");
                printf("Os candidatos que disputarao o segundo turno sao:\n");
                printf("1. %s\n", candidates[0].name);
                printf("2. %s\n", candidates[1].name);
            }
        } else {
            printf("\nNenhum candidato foi eleito.\n");
        }
    } else {
        printf("\nEleicao invalida em %s devido ao numero de votos nulos ou numero insuficiente de votos validos.\n", city);
    }

    return 0;
}
