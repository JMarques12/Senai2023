#include <stdio.h>
int main(){
	char n;
	float preco;
	printf("digite o nome da mercadoria:");
	scanf("%s",&n);
	printf("digite o preco da mercadoria:");
	scanf("%f",&preco);
	if(preco<1000){
		printf("%f",preco * 1.05);
	}else{
	printf("%f",preco * 1.07);
	}
	
}
