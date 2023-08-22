#include <stdio.h>
int main(){
	float a,b,c;
	
	printf("digite o valor do lado a:");
	scanf("%f",&a);
	
	printf("digite o valor do lado b:");
	scanf("%f",&b);
	
	printf("digite o valor do lado c:");
	scanf("%f",&c);
	
	if(a != b && a != c && b !=c){
		printf("triangulo escaleno");
	} else if(a == b && a == c && b == c){
		printf("triangulo equilatero");
    } else{
    	printf("triangulo isosceles");
	}
	
	return 0;
	

}
