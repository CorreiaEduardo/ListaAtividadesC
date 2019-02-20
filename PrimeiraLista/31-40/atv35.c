/* 35 - Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os
múltiplos de x que existem no vetor e mostre-os na tela e a soma de todos eles. */
#include<stdio.h>
main(){
	int vet[10],i,x,c,soma;
	do{
		printf("Informe um numero para a posicao [%i] do vetor\n" ,i+1);
		scanf("%i", &vet[i]);
		i++;
	}while(i!=10);
	printf("Informe um numero para comparacao\n");
	scanf("%d", &x);
	for(c=0;c<=10;c++){
		if(vet[c]%x==0){
			soma=soma+vet[c];
		}
	}
	printf("A soma dos multiplos de %d eh %d",x, soma);	
}




