/* 25 - Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N
(inclusive). Considere que o N será sempre maior que ZERO. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int n,cont;
    printf("Insira um numero: ");
    scanf("%i" ,&n);
	cont=1;
	n++;
	while(cont<n){
		printf("%i " ,cont);	
		cont++;
	}

}
