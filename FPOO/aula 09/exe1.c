#include <stdio.h>
#include <string.h>


int main() {
	int doador;

	printf("\ndigite o numero de doadores: ");
	scanf("%d",&doador);
	
	int dias[doador],idade[doador],contador;
	char nome[doador][20],sexo[doador];
	
	for(contador = 0; contador < doador; contador++){
		
	printf("\ndigite o nome do doador: ");
	scanf("%s",&nome[contador]);

	
	printf("\ndigite a idade do doador: ");
	scanf("%d",&idade[contador]);
	
	printf("\ndigite o genero do doador (M/F): ");
	scanf("%s",&sexo[contador]);

	
	printf("\ndias desde a ultima doacao: ");
	scanf("%d",&dias[contador]);	
	}
	
	char status[doador][10];
	
	for(contador = 0; contador < doador; contador++){
		if(sexo =='F' && idade >= 16 && idade <= 69 && dias > 90)
			strcpy(status, "apto");
		else if(sexo == 'M' && idade >= 16 && idade <= 69 && dias > 60)
			strcpy(status[contador], "apto");
		else
			strcpy(status[contador], "inapto"); 
			
		printf("\nnome: %s",nome[contador]);
		printf("\nidade: %d",idade[contador]);
		printf("\nstatus: %s",status[contador]);
	}
	
	return 0;
}

	
