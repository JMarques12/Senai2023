#include <stdio.h>
int main(){
	int x;
	printf("digite um numero: ");
	scanf("%d",&x);
	printf("o quadrado do numero �:%d\n",x*x);
	
	while(x!=4){
	printf("digite um numero: ");
	scanf("%d",&x);
	printf("o quadrado do numero �:%d",x*x);
}
}
