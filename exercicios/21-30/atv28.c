/* 28 - Dados n números inteiros positivos, calcular a soma dos que são primos. */

#include <stdio.h>
#include <stdlib.h>

main(){
	int n,soma,cont,somad;
	printf("Insira um numero: ");
	scanf("%i" ,&n);
	soma = 0;
	cont = 0;
	somad = 0;
	while(n!=9847){
		cont=1;
		somad=0;
		while(cont<=n){
				if(n%cont==0){
				somad++;
				cont++;
			}
				else{
					cont++;
				}
		}
		if(somad==2){
			soma=soma+n;
			printf("A soma e %d" ,soma);
		}
		
		printf("Insira um numero: ");
		scanf("%d" ,&n);
		
	}
	
	
	
}
