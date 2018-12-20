/*18 – Criar um algoritmo em C que receba o valor de x, e calcule e imprima o valor de
f(x).


f(x)= 1, se x <= 1
f(x)= 2, se 1 <x <=2
f(x)= x^2, se 2< x <=3
f(x)= x^3, se x > 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float f_de_x,x;
	printf("Insira um numero: ");
	scanf("%f" ,&x);
	if(x<= 1){
		printf("f(x)=1");
		printf("\n");
		system("PAUSE");
		
	}	
	if(1<x && x<=2){
		printf("f(x)=2");	
		printf("\n");
		system("PAUSE");
		
	}
	if(2<x && x<=3){
		f_de_x=pow(x,2);
		printf("f(x)=%.2f" ,f_de_x);
		printf("\n");
		system("PAUSE");

		
	}
	if(x>3){
		f_de_x = pow(x,3);
		printf("f(x)=%.2f" ,f_de_x);
		printf("\n");
		system("PAUSE");
		
	}



}
