/* 47 – Crie um programa que possa armazenar informações pertinentes a um produto:
nome, valor e descrição. Crie um vetor com 5 produtos, e mostre o valor total de todos 
os produtos. */
#include <stdio.h>
struct prod{
	char nomeProduto[20];
	float valorProduto;
	char descProduto[100];	
}Produto[5];

main(){
	int i;
	float soma;
	for(i=0;i<5;i++){
		printf("Insira o nome do Produto %i:", i+1);
		fgets(Produto[i].nomeProduto,20,stdin);
		printf("Insira a descricao do produto %i:", i+1);
		fgets(Produto[i].descProduto,100,stdin);
		printf("Insira o valor do produto %i:", i+1);
		scanf("%f",&Produto[i].valorProduto);
		getchar();		
		soma=soma+Produto[i].valorProduto;
	}
	printf("A soma dos valores de todos os produtos eh: %.2f",soma);
	
	
}


