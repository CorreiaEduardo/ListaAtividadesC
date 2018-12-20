/* 48 - Fazer um programa que tenha um registro com os campos 
nome, endereço, telefone, email, salário.
leia os dados de entrada e processe o total dos salários e imprima o valor
do maior salário, e a quem pertence (nome). */
#include <stdio.h>
#include <string.h>
struct funcionario{
	char nomeFunc[20];
	float salFunc;
	char endFunc[100];
	char telFunc[20];
	char emailFunc[50];	
}total;

main(){
	int i;
	float maior,soma;
	char nomemaior[20],cont;
	printf("Insira o nome do funcionario 1: ");
	fgets(total.nomeFunc,20,stdin);
	printf("Insira o endereco do funcionario 1: ");
	fgets(total.endFunc,100,stdin);
	printf("Insira o telefone do funcionario 1: ");
	fgets(total.telFunc,20,stdin);
	printf("Insira o email do funcionario 1: ");
	fgets(total.telFunc,50,stdin);
	printf("Insira o salario do funcionario 1: ");
	scanf("%f",&total.salFunc);
	getchar();		
	maior=total.salFunc;
	strcpy(nomemaior,total.nomeFunc);
	soma=total.salFunc;
	for(i=1;i!=0;i++){
		printf("Insira o nome do funcionario %i:", i+1);
		fgets(total.nomeFunc,20,stdin);
		printf("Insira o endereco do funcionario %i:", i+1);
		fgets(total.endFunc,100,stdin);
		printf("Insira o telefone do funcionario %i:", i+1);
		fgets(total.telFunc,20,stdin);
		printf("Insira o email do funcionario %i:", i+1);
		fgets(total.telFunc,50,stdin);
		printf("Insira o salario do funcionario %i:", i+1);
		scanf("%f",&total.salFunc);
		getchar();
		if(total.salFunc > maior){
			maior=total.salFunc;
			strcpy(nomemaior,total.nomeFunc);
		}
		soma=soma+total.salFunc;
		printf("Adicionar outro funcionario? (s/n): ");
		scanf("%c",&cont);
		getchar();
		if(cont=='n'){
			i=-1;
		}
	}
	printf("A soma dos valores de todos os salarios eh: %.2f\n",soma);
	printf("O funcionario com maior salario eh %s",nomemaior);
	
}




