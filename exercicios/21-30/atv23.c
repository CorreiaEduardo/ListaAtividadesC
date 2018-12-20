/* 23 - Calcular a soma dos 100 primeiros nº naturais. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int x,c,soma;
	x=100; // Para saber a soma dos primeiros x numeros antes do inserido basta mudar aqui, ex: x=100 - 1+2+3...+100
	soma=0;
	c=1;	
	while(c<=x){
		soma=soma+c;
		c++;		
	}
	printf("A soma dos primeiros 100 numeros naturais e %i" ,soma);
}
