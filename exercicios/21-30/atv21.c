/*21 - Ler um n�mero e escreva se ele "� primo" ou "n�o � primo". */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int x,c,somad;
	printf("Insira o numero: ");
	scanf("%i" ,&x);
	somad=0;
	c=1;
	while(c<=x){
		if(x%c==0){
			somad++;
			c++;	
			
		}
		else{
			c++;
			
		}		
	}
	
	if(somad==2){
		printf("O numero %i e primo" ,x);
	}
	else{
		printf("O numero %i nao e primo" ,x);
		
		
		
	}
}
