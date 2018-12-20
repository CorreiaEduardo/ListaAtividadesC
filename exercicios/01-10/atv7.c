/* 7 - Faça um algoritmo que leia dois valores inteiros (X e Y) e apresente o resultado do
quadrado da soma dos valores lidos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float x,y,resultado;
	printf("Insira o primeiro numero: ");
	scanf("%f" ,&x);
	printf("Insira o segundo numero: ");
	scanf("%f" ,&y);
	resultado = x+y;
	resultado = pow(resultado,2);
	printf("\n");
	printf("O resultado e %.2f" ,resultado);
	printf("\n");	
	system("PAUSE");
	
	
	
}
