 /* 54 - O fatorial qu�druplo de um n�mero N � dado por:(2N)!/n! Fa�a uma fun��o que
receba um n�mero inteiro positivo N e retorne o fatorial qu�druplo desse n�mero. */
#include<locale.h>
#include<stdio.h>
int fat(int x){
	int fat=1,i;
	for(i=x;i>0;i--){
		fat=fat*i;
	}
	return fat;
}
int fatquad(int x){
	return fat(2*x)/fat(x);
}
main(){
	int n;
	setlocale(LC_ALL,"Portuguese");
	printf("Insira um valor: ");
	scanf("%d",&n);
	printf("O fatorial qu�druplo �: %d", fatquad(n));
}




