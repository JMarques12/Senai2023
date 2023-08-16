#include <stdio.h>
int main(){
	float salario, inss; 
	printf("Digite seu salário:");
	scanf("%f",&salario); 
	
	if(salario < 1212.01) inss = salario * 0.075;
	else if(salario < 2427.35) inss = salario * 0.09;
	else if(salario < 3641.03) inss = salario * 0.12;
	else if(salario < 7087,22) inss = salario * 0.14;
	else inss = 992.21;
	
	printf("O desconto de INSS = %.2f\n",inss);
	printf("O salário líquido será de = %.2f\n",salario - inss);
	return 0;
