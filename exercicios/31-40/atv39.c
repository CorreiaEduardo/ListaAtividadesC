/* 39 - Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada
posição das matrizes lidas.*/
#include<stdio.h>
main(){
	int A[4][4],B[4][4],C[4][4],i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Informe um valor para a posicao [%d][%d] da primeira matriz: ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Informe um valor para a posicao [%d][%d] da segunda matriz: ",i+1,j+1);
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(A[i][j]>B[i][j]){
				C[i][j]=A[i][j];
			}
			else{
				C[i][j]=B[i][j];
			}
		}
	}
	printf("A terceira matriz[4][4] eh: \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
	
	
	
	
}


