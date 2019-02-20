/* 37 - Desenvolva um programa para o usuário entrar com valores inteiros para uma matriz
A4 x 4 e uma matriz B4 x 4. Gerar e imprimir a matriz Soma4x 4 contendo a soma dos
elementos de A e B.*/
#include<stdio.h>
main(){
	int A[4][4],B[4][4],soma[4][4],i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Informe um valor para a posicao [%d][%d] da matriz A: ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Informe um valor para a posicao [%d][%d] da matriz B: ",i+1,j+1);
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			soma[i][j]=A[i][j]+B[i][j];
		}
	}	
	printf("A matriz resultante soma[4][4] eh: \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d\t", soma[i][j]);
		}
		printf("\n");
	}
	
	
	
	
}


