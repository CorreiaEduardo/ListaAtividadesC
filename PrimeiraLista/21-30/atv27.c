/* 27 - Ler N valores (at� o usu�rio digitar 0), calcular e escrever a m�dia aritm�tica desses
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
