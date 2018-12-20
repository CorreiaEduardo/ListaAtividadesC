/* 53 - Crie uma função que receba três valores: a, b e c que são os coeficientes de uma
equação do segundo grau e retorne o valor do delta, que é dado por b2-4*a*c. */
#include<locale.h>
#include<stdio.h>
#include<math.h>
float delta(float a, float b, float c){
	return pow(b,2)-4*a*c;
}
main(){
	int a,b,c;
	setlocale(LC_ALL,"Portuguese");
	printf("Insira o valor da variavél [a] da equação: ");
	scanf("%d",&a);
	printf("Insira o valor da variavél [b] da equação: ");
	scanf("%d",&b);
	printf("Insira o valor da variavél [c] da equação: ");
	scanf("%d",&c);
	printf("O valor de delta é: %.2f", delta(a,b,c));
}


