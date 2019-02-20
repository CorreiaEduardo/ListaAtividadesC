/* 36 - Escreva um programa que declare uma matriz 10 x 10. 
Preencha com 1 a diagonal principal e com 0 os demais elementos. 
Escreva ao final a matriz obtida.*/
#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int i,j,m[10][10];
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(i==j){
				m[i][j]=1;
			}
			else{
				m[i][j]=0;
			}
		}
	}
	printf("A matriz obtida é: \n\n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	
}



