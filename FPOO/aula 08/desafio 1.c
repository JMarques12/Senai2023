#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
	char n [10];
	float m1,m2,m3,m4,m5;
	float c1,c2,c3,c4,c5;
	printf("digite o nome do vendedor: ");
	scanf("%s",&n);
	printf("digite o valor da primeira venda: ");
	scanf("%f",&m1);
	printf("digite o valor segunda venda: ");
	scanf("%f",&m2);
	printf("digite o valor da terceira venda: ");
	scanf("%f",&m3);
	printf("digite o valor da quarta venda: ");
	scanf("%f",&m4);
	printf("digite o valor da quinta venda: ");
	scanf("%f",&m5);
	if(m1 > 4000){
		c1 = m1 * 0.06;
	}else{
		c1 = m1 * 0.05;
	}
	if(m2 > 4000){
		c2 = m2 * 0.06;
	}else{
		c2 = m2 * 0.05;
	}if(m3 > 4000){
		c3 = m3 * 0.06;
	}else{
		c3 = m3 * 0.05;
	}if (m4 > 4000){
		c4 = m4 * 0.06;
	}else{
		c4 = m4 * 0.05;
	}if (m5 > 4000){
		c5 = m5 * 0.06;
	}else{
		c5 = m5 * 0.05;
	}
	printf("%.2f\n",m1);
	printf("%.2f\n",m2);
	printf("%.2f\n",m3);
	printf("%.2f\n",m4);
	printf("%.2f\n",m5);
	printf("%.2f %.2f %.2f %.2f %.2f",c1,c2,c3,c4,c5);
	}
	
	



