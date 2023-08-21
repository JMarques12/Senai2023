#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	char nome;
	float peso;
	float altura;
	float imc;
	int decisao = 1;
	while(decisao){
	
	
	printf("digite o nome completo do paciente: ");
	scanf("%s",&nome);
	printf("digite o peso do paciente(em kg): ");
	scanf("%f",&peso);
	printf("\ndigite a altura do paciente(em metros): ");
	scanf("%f",&altura);
	
	imc = peso/ (altura*altura);
	
	printf("\n\nIMC = peso / (altura * altura)");
  printf("\n\nIMC calculando   Situacao");
  printf("\n------------------------------");
  printf("\ menos de 20     Abaixo do peso");
  printf("\n20 <= IMC < 25  Peso Normal");
  printf("\n25 <= IMC < 30  Acima do peso");
  printf("\n30 <= IMC < 34  Obeso");
  printf("\nAcima de 34     Muito Obeso");
  printf("\n------------------------------");
  printf("\nIMC = %.2f", imc);
  if (imc < 20)
     printf(" (abaixo do peso).");
  else if ((imc >= 20) && (imc < 25))
          printf(" (peso normal).");
       else if ((imc >= 25) && (imc < 30))
               printf(" (acima do peso).");
            else if ((imc >= 30) && (imc < 34))
                    printf(" (obeso).");
		 else
		    printf(" (muito obeso).");
		    
		    printf("voce deseja continuar usando o programa?\ndigite 1 para continuar ou 0 para sair: \n");
		    scanf("%d",&decisao);
		}
	}
