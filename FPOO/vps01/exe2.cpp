#include <stdio.h>

int main() {
    int tempo, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo);

    if (tempo >= 3600) {
        horas = tempo / 3600;
        tempo = tempo % 3600;
    } else {
        horas = 0;
    }
    
   
    if (tempo >= 60) {
        minutos = tempo / 60;
        tempo = tempo % 60;
    } else {
        minutos = 0;
    }
    
    segundos = tempo;

    printf("Tempo convertido: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
