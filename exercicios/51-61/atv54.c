 /* 54 - O fatorial quádruplo de um número N é dado por:(2N)!/n! Faça uma função que
receba um número inteiro positivo N e retorne o fatorial quádruplo desse número. */
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
	printf("O fatorial quádruplo é: %d", fatquad(n));
}




