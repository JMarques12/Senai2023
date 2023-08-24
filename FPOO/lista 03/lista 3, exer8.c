#include <stdio.h>
int main(){
	int numero;
	int contador;
	
	printf("digite um numero inteiro positivo:");
	scanf("%d",&numero);
	
	for(contador = 1; numero>1; numero--){
		contador *= numero;
	}
	printf("o fatorial de %d",contador);
	
	return 0;
}
