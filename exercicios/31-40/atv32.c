/* 32 - Faça um algoritmo para ler um vetor de 20 números. Após isto, deverá ser lido mais
um número qualquer e verificar se esse número existe no vetor ou não. Se existir, o
algoritmo deve gerar um novo vetor sem esse número. (Considere que não haverão
números repetidos no vetor). */
#include<stdio.h>
main(){
	int vet[20],i,n,c,vet2[19],c2;
	do{
		printf("Informe um numero para a posicao [%i] do vetor\n" ,i+1);
		scanf("%i", &vet[i]);
		i++;
	}while(i!=20);
	printf("Informe um numero para comparacao\n");
	scanf("%d", &n);
	for(c2=0;c2<=19;c2++){
		if(vet[c2]==n){
			c2++;
		}
		vet2[c2]=vet[c2];
		printf("%d", vet2[c2]);
	}
}



