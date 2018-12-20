/*24 - A série de Fibonacci é uma sequência de termos que tem como os 2 primeiros
termos, respectivamente, os números 0 e 1. A partir daí, os demais termos são formados
seguindo uma certa regra. A série de Fibonacci pode ser vista a seguir:
0 1 1 2 3 5 8 13 21...
Descubra a regra que gera a sequência da série de Fibonacci e escreva um algoritmo que
gere os n (solicitados pelo usuário) primeiros termos desta série e calcula e escreve a
soma destes termos. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int num_1,num_2,cont,soma,c;
    printf("Insira quantos n primeiros termos devem ser gerados seguindo a sequencia de Fibonacci: ");
    scanf("%i" ,&cont);
    num_1=0;
    num_2=1;   
	soma=0;
	c=2;
	printf("A sequencia fibonacci e %i %i" ,num_1 ,num_2);		
	while(c<cont){
		soma = num_1+num_2;
		num_1 = num_2;
		num_2 = soma;
	    printf(" %i" ,soma);
	    c++;
	}

}
