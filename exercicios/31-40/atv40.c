/*40 - Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números
inteiros. Em seguida, gere um array unidimensional pela soma dos números de cada
coluna da matriz e mostrar na tela esse array. Por exemplo, a matriz:
5 -8 10
1 2 15
25 10 7
Vai gerar um vetor, onde cada posição e a soma das colunas da matriz. A primeira
posição será 5 + 1 + 25, e assim por diante: 31 4 3*/
#include<stdio.h>
main(){
	int A[3][3],i,j,vet[3],cont=0,soma=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Informe um valor para a posicao [%d] [%d] da matriz: ", i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			soma=soma+A[i][j];
		}
		vet[j]=soma;
		soma=0;
	}
	printf("O vetor resultante eh: ");
	for(i=0;i<3;i++){
		printf("%d ",vet[i]);
	}
	
}


