#include <stdio.h>
int main(){
	int x,y;
	printf("digite um numero inteiro ");
	scanf("%d",&x);
	printf("digite mais um numero inteiro ");
	scanf("%d",&y);
	if( x > y){
		printf("o maior numero e : %d\n",x);
		printf("o menor numero e : %d",y);
	}else { printf("o maior numero e : %d\n",y);
		printf("o menor numero e : %d",x);
	}
	}
