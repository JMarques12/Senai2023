#include <stdio.h>
int main(){

int r;
int h;
printf("o valor de raio e: ");
scanf("%d",&r);
printf("o valor em altura e: ");
scanf("%d",&h);
printf("\na area total do cilindro e:%dcm2 ",2*3*r*(r+h));
printf("\no volume total do cilindro e: %dcm3",3*(r*r)*h);

}
