#include <stdio.h>
int main(){
	float preco;
	
	printf("digite o preco do produto:");
	scanf("%f",&preco);
	
	if(preco > 1000){
		preco = preco * 0.92;
	}
	printf("o preco final eh: R$%.2f",preco);
}
