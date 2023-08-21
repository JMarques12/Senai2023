#include <stdio.h>
int main(){
	int a,b,c,d,e,f;
	printf("digite um numero: ");
	scanf("%d",&a);
	printf("digite um numero: ");
	scanf("%d",&b);
	printf("digite um numero: ");
	scanf("%d",&c);
	printf("digite um numero: ");
	scanf("%d",&d);
	printf("digite um numero: ");
	scanf("%d",&e);
	printf("digite um numero: ");
	scanf("%d",&f);
	if(a > b && a > c && a > d && a > e && a > f) {
		printf("%d",a);
	}else if(b > c && b > d && b > e && b > f){
		printf("%d",b);
		}else if(c > d && c > e && c > f){
			printf("%d",&c);
		}else if(d > e && d > f){
			printf("%d",&d);
		}else if( e > f){
			printf("%d",e);
		}else {printf("%d",f);
		}
	
	}
	
