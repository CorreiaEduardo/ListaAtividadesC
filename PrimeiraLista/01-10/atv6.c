/* 6 - Fa�a um algoritmo que leia dois valores para as vari�veis A e B e efetue a troca dos
valores de forma que a vari�vel A passe a possuir o valor da vari�vel B e a vari�vel B
passe a possuir o valor da vari�vel A. Apresente os valores trocados.*/

#include <stdio.h>
#include <stdlib.h>

main(){
	float a,b,troca;
	printf("Insira o primeiro numero: ");
	scanf("%f" ,&a);
	printf("Insira o segundo numero: ");
	scanf("%f" ,&b);
	troca = a;
	a = b;
	b = troca;
	printf("\n");
	printf("O primeiro numero e %.2f" ,a);
	printf("\n");	
	printf("O segundo numero e %.2f" ,b);
	printf("\n");	
	system("PAUSE");
	
	
	
	
}
