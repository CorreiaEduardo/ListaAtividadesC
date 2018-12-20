/*22 - Calcular os divisores de um no fornecido pelo usuário. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int x,c;
	printf("Insira o numero: ");
	scanf("%i" ,&x);
	c=1;
	printf("O numero %i e tem os seguintes divisores: " ,x);	
	while(c<=x){
		if(x%c==0){
			printf("%i, " ,c);
			c++;	
			
		}
		else{
			c++;
			
		}		
	}
	
}
