/* 52 – Criar uma função que recebe 3 valores float e retorna o quadrado do 1o + a soma dos
outros dois. O tipo de retorno deve ser inteiro. */

#include <stdio.h>
#include <math.h>
int func(int x,int y,int z){
	return pow(x,2)+(y+z);
}
main(){
	int num1,num2,num3;
	printf("Insira o valor 1: ");
	scanf("%d",&num1);
	printf("Insira o valor 2: ");
	scanf("%d",&num2);
	printf("Insira o valor 3: ");
	scanf("%d",&num3);
	printf("\n");
	printf("O resultado eh: %d",func(num1,num2,num3));
}


