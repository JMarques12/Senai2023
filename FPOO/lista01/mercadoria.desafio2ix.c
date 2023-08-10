#include <stdio.h>
int main(){
	char m;
	float p;
	float a;
	printf("digite o nome da mercadoria:");
	scanf("%s",&m);
	printf("digite o valor atual da mercadoria:");
	scanf("%f",&a);
	printf("digite a porcentagem do aumento da mercadoria:");
	scanf("%f",&p);
	printf("o novo valor da mercadoria é:%.2f",(p/100+1)*a);
	return 5;
	}
