#include<stdio.h>
int main(){
	int candidatos,i;
	char cidade,nome[candidatos][20];
	
		printf("digite o nome da cidade: ");
		scanf("%s",&cidade);
	
		printf("insira o numero de candidatos a prefeito: ");
		scanf("%d",&candidatos);
		
		for(i = 0; i < candidatos; i++){
			
		printf("digite o primeiro nome do candidato: ");
		scanf("%s",&nome[i]);
		
	int votos[candidatos],votos_brancos,votos_nulos;
		
		printf("digite o numero de votos do candidato: ");
		scanf("%d",&votos[i]);
	}
		printf("digite o numero de votos do candidato: ");
		scanf("%d",&votos_brancos);
		
		printf("digite o numero de votos do candidato: ");
		scanf("%d",&votos_nulos);
		
	char status[candidatos][10];
	int soma = 0;
	
	
		for(i = 0; i < candidatos; i++){
			soma += votos[i];
		}
		
	int total = soma + votos_brancos;
	
		if(total > votos_nulos){
		printf("eleicao valida");
		}else{
	 	printf("eleicao invalida: ");
	}
	float porcentagem[candidatos];
	
		printf("a porcentagem\t deste candidato é: ");
	
		
		
	
}
