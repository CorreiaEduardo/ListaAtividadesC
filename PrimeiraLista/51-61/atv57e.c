/* 57 - Faça uma função que verifica se uma matriz quadrada de ordem N é a matriz
identidade. */

#include <stdio.h>
#include <locale.h>
int linha,coluna;
int verificarMI(int mat[linha][coluna], int x){
	int i,j,cont=0;
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			if(i==j){
				if(mat[i][j]==1){
					cont++;
				}
			}
			else{
				if(mat[i][j]==0){
					cont++;
				}
			}
		}
	}
	return cont;
}
main(){
	int i,j,ver;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira a quantidade de linhas da matriz quadrada: ");
	scanf("%d",&linha);
	printf("Insira a quantidade de colunas da matriz quadrada: ");
	scanf("%d",&coluna);
	int mat[linha][coluna];
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("Insira um valor para a posição [%d][%d] da matriz: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	ver=verificarMI(mat,linha);
	if(ver==linha*linha){
		printf("A matriz é uma matriz identidade");
	}
	else{
		printf("A matriz não é uma matriz identidade");
	}
}



