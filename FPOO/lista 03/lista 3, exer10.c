#include <stdio.h>
int main(){
	int n[10];
	int contador;
	int maior;
	printf("digite um numero inteiro: ");
	for(contador = 0; contador < 10;contador++){
		scanf("%d",&n[contador]);
	}
	for(contador = 0 ; contador < 10; contador++ ){
		if( n[contador] > maior){
			maior = n[contador];
		}
	}
	printf("o maior numero e %d",maior);
}
