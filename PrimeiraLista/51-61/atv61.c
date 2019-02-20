/* 61 - Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2
variáveis e troque o seu conteúdo, ou seja, esta função e chamada passando duas
variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B
terá o valor de A. */
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
	printf("Insira o primeiro número: ");
	scanf("%d",&x);
	printf("Insira o segundo número: ");
	scanf("%d",&y);
	novoX=trocaA(x,y);
	novoY=trocaB(x,y);
	printf("\nO primeiro número agora é=%d, e o segundo=%d.",novoX,novoY);
}



