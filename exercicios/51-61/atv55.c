/* 55 - Escreva um algoritmo que leia e mostre um vetor de 10 elementos inteiros e a seguir,
conte quantos valores pares existem no vetor. Utilize uma função para contar a
quantidade de números pares. O resultado deve ser escrito no programa principal,
apresentando o vetor de origem e a quantidade de números pares do vetor. */

#include <stdio.h>
#include <locale.h>
int varrerPar(int vetor[10]){
	int i=0,cont=0;
	for(i=0;i<4;i++){
		if(vetor[i]%2==0){
			cont++;
		}
	}
	return cont;
}
main(){
	int vet[10],i,numPar;
	setlocale(LC_ALL, "Portuguese");
	for(i=0;i<4;i++){
		printf("Insira o valor da posição [%d] do vetor: ", i+1);
		scanf("%d",&vet[i]);
	}
	printf("\nSeu vetor é: ");
	for(i=0;i<4;i++){
		printf("%d ",vet[i]);
	}
	numPar=varrerPar(vet);
	printf("\nSeu vetor possui %d numeros pares.",numPar);
}



