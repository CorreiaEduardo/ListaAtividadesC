/* 53 - Crie uma fun��o que receba tr�s valores: a, b e c que s�o os coeficientes de uma
equa��o do segundo grau e retorne o valor do delta, que � dado por b2-4*a*c. */
#include<locale.h>
#include<stdio.h>
#include<math.h>
float delta(float a, float b, float c){
	return pow(b,2)-4*a*c;
}
main(){
	int a,b,c;
	setlocale(LC_ALL,"Portuguese");
	printf("Insira o valor da variav�l [a] da equa��o: ");
	scanf("%d",&a);
	printf("Insira o valor da variav�l [b] da equa��o: ");
	scanf("%d",&b);
	printf("Insira o valor da variav�l [c] da equa��o: ");
	scanf("%d",&c);
	printf("O valor de delta �: %.2f", delta(a,b,c));
}


