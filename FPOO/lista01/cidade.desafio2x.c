#include <stdio.h>
int main(){
	char c;
	float e;
	float v;
	printf("digite o nome da cidade:");
	scanf("%s",&c);
	printf("digite o numero de eleitores:");
	scanf("%f",&e);
	printf("digite o numero de votos apurados:");
	scanf("%f",&v);
	printf("a porcentagem é:%.1f",v*100/e);
}
