#include <stdio.h>
int main(){
	int n;
	int tabuada;
	
	printf("digite um numero: ");
	scanf("%d",&n);
	
	for(tabuada = 0; tabuada <= 10 ;tabuada++){
		printf("\n%d * %d = %d",n, tabuada,n*tabuada);
	}
}
