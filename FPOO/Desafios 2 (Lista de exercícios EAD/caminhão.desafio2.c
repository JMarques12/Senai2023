#include <stdio.h>
int main(){
	int c;
	int a;
	int l = 250;
	int t = 18;
	
	printf("quantas caminhoes tem na fazenda: ");
	scanf("%d",&c);
	printf("quantas alqueres ha na fazenda: ");
	scanf("%d",&a);
    printf("serao necessaria este numero de viajens: %d",(a*l)/(c*t));
    
}
