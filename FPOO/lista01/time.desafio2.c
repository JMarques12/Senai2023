#include <stdio.h>
int main(){
	char n[10];
	int v;
	int e;
	printf("digite o nome do time:");
	gets(n);
	printf("digite o numero de vitorias:");
	scanf("%d",&v);
	printf("digite o numero de empates:");
	scanf("%d",&e);
	printf("\n%s",n);
	printf("\npontos: %d",(v*3)+e);
}
