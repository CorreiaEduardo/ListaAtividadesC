/* 33 - Fa�a um algoritmo para ler dois vetores V1 e V2 de 15 n�meros cada. Calcular e
escrever a quantidade de vezes que V1 e V2 possuem os mesmos n�meros e nas mesmas
posi��es. */
#include<stdio.h>
main(){
	int vet[15],i,vet2[15],i2,c,soma=0;
	do{
		printf("Informe um numero para a posicao [%i] do primeiro vetor\n" ,i+1);
		scanf("%i", &vet[i]);
		i++;
	}while(i!=15);
	for(i2=0;i2!=15;i2++){
		printf("Informe um numero para a posicao [%i] do segundo vetor\n" ,i2+1);
		scanf("%i", &vet2[i2]);
	}
	for(c=0;c<=15;c++){
		if(vet[c]==vet2[c]){
			soma++;
		}		
	}
	printf("Existem %d numeros repetidos", soma);
}



