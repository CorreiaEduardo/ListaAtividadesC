/* 31 - Faça um algoritmo para ler 15 números e armazenar em um vetor VET, verificar e
escrever se existem números repetidos no vetor VET e em que posições se encontram. */
#include<stdio.h>
main(){
	int vet[15],i,c,c2;
	do{
		printf("Informe um numero para a posicao [%i] do vetor\n" ,i+1);
		scanf("%i", &vet[i]);
		i++;
	}while(i!=15);
	for(c=0;c<=15;c++){
		for(c2=c+1;c2<=15;c2++){
			if(vet[c]==vet[c2]){
				printf("O valor %d na posicao [%d] do vetor se repete na posicao [%d]\n", vet[c],c+1,c2+1);
			}
		}		
	}
}





