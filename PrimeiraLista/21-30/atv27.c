/* 27 - Ler N valores (até o usuário digitar 0), calcular e escrever a média aritmética desses
valores lidos. */

#include <stdio.h>
#include <stdlib.h>

main(){
	int n,soma,cont,media;
	printf("Insira um numero: ");
	scanf("%i" ,&n);
	soma = 0;
	media=0;
	cont=0;
	while(n!=0){
		soma=soma+n;
		cont++;
		media=soma/cont;
		printf("Insira um numero: ");
		scanf("%i" ,&n);
	}
	printf("A media e %i" ,media);
	
	
	
}
