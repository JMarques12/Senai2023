#include <stdio.h>
int main(){
	int n1,n2,media;
	
	
	printf("digite as duas notas da disciplina: ");
	scanf("%d %d",&n1,&n2);
	
	media = (n1 + n2)/2;
	
	printf("media =%d\n",media);
	if(media >= 6)
		printf("aprovado");
	else
		printf("reprovado");
		
	return 0;
}
