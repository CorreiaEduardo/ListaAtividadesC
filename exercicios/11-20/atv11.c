/*11 – Escreva um algoritmo que leia X e Verifique se X é maior ou igual a 10; caso seja
verdadeiro, calcule
R <-x + 5. Senão calcule R <-X – 7.*/

#include <stdio.h>
#include <stdlib.h>

main(){
	float x,r;
	printf("Insira o numero: ");
	scanf("%f" ,&x);
	if (x>=10){
		r=x+5;		
	}
	else{
		r=x-7;
		
	}
	printf("O resultado final e %.2f" ,r);
	printf("\n");
	system("PAUSE");
	
	
	
	
}
