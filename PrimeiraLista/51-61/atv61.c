/* 61 - Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba estas 2
vari�veis e troque o seu conte�do, ou seja, esta fun��o e chamada passando duas
vari�veis A e B por exemplo e, ap�s a execu��o da fun��o, A conter� o valor de B e B
ter� o valor de A. */
#include <stdio.h>
#include <locale.h>
int trocaA(int a, int b){
	int troca;
	troca=a;
	a=b;
	b=troca;
	troca=0;
	return a; 
}
int trocaB(int a, int b){
	int troca;
	troca=a;
	a=b;
	b=troca;
	troca=0;
	return b; 
}
main(){
	setlocale(LC_ALL,"Portuguese");
	int x,y,troca,novoX,novoY;
	printf("Insira o primeiro n�mero: ");
	scanf("%d",&x);
	printf("Insira o segundo n�mero: ");
	scanf("%d",&y);
	novoX=trocaA(x,y);
	novoY=trocaB(x,y);
	printf("\nO primeiro n�mero agora �=%d, e o segundo=%d.",novoX,novoY);
}



