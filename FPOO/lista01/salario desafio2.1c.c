#include <stdio.h>
int main(){
	float s;
	char n[5];
	float p;
	printf("digite um nome: ");
	gets(n);
	printf("digite o valor do salário atual: ");
	scanf("%f",&s);
	printf("digite a porcentagem do aumento salárial atual: ");
	scanf("%f",&p);
	printf("%s");
	printf("o valor do novo salário é: R$ %.2f",(p/100+1)*s);
	return 5;
	}
