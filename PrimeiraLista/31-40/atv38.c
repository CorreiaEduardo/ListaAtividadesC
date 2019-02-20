/* 38 - Desenvolva um programa para entrar com os valores para uma matriz M2 x 3. Gerar
e imprimir Mt. A matriz transposta é gerada trocando linha por coluna.*/
#include<stdio.h>
main(){
	int M[2][3],Mt[3][2],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Informe um valor para a posicao [%d][%d] da matriz M: ",i+1,j+1);
			scanf("%d",&M[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			Mt[i][j]=M[j][i];
		}
	}
	printf("A matriz resultante mt[3][2] eh: \n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t", Mt[i][j]);
		}
		printf("\n");
	}
	
	
	
	
}


