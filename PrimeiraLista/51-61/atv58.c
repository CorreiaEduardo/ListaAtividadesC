/*
58 - Fa�a uma fun��o recursiva que permita somar os elementos de um vetor de inteiros.
*/

#include <stdio.h>
#include <locale.h>
int somaVetor(int vet[],int qt){
	if (qt==0){
		return 0;
	}
	return vet[qt-1] + somaVetor(vet, qt-1);
}
main(){
	setlocale(LC_ALL, "Portuguese");
	int qt;
	printf("Insira a quantidade de n�meros: ");
	scanf("%d",&qt);
	int vet[qt],i;
	for(i=0;i<qt;i++){
		printf("Insira um n�meros para a posi��o %d do vetor: ",i+1);
		scanf("%d",&vet[i]);
	}
	printf("A soma dos n�meros desse vetor �: %d",somaVetor(vet,qt));
}




