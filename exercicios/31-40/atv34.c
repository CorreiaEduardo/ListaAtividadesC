/* 34 - Crie um aplicativo em C que pe�a um n�mero inicial ao usu�rio, uma raz�o e calcule
os termos de uma P.A (Progress�o Aritm�tica), armazenando esses valores em um vetor
de tamanho 10. */
#include<stdio.h>
main(){
	int n,r,vet[10],i;
	printf("Informe um numero inicial para a progressao aritmetica: ");
	scanf("%d", &n);
	printf("Informe a razao da progressao aritmetica: ");
	scanf("%d", &r);
	printf("A progressao aritmetica eh: %d, ", n);
	for(i=1;i!=10;i++){
		n=n+r;
		vet[i]=n;
		printf("%d, ",vet[i]);
	}
	
	
}


