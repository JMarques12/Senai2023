#include <stdio.h>
int main(){
	float s;
	char n[5];
	float p;
	printf("digite um nome: ");
	gets(n);
	printf("digite o valor do sal�rio atual: ");
	scanf("%f",&s);
	printf("digite a porcentagem do aumento sal�rial atual: ");
	scanf("%f",&p);
	printf("%s");
	printf("o valor do novo sal�rio �: R$ %.2f",(p/100+1)*s);
	return 5;
	}
