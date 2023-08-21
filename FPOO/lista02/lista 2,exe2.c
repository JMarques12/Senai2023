#include <stdio.h>
int main(){
	float s;
	int f;
	printf("digite o salario:");
	scanf("%f",&s);
	printf("digite o numero de filhos:");
	scanf("%d",&f);
	if(s<2000){
		printf("o salario vai ser:%.2f",45*f+s);
		
	}else{
		printf("o funcionario nao recebera o salario familia");
		
	} return 0;
	
	
}
