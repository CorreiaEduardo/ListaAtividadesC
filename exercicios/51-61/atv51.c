/*51 - Faça uma função que leia um número não determinado de valores 
positivos e retorna a média aritmética dos mesmos.*/
#include <stdio.h>
#include <locale.h>
float mediadeVetor(int vet[],float cont){
	int i;
	float soma,media;
	for(i=0;i<cont;i++){
		soma=vet[i]+soma;
	}
	media=soma/cont;
	return media;
}
main(){
	setlocale(LC_ALL,"Portuguese");
	int vetor[100],i,cont;
	float media;
	char decisao={'n'};
	printf("Insira um valor: ");
	scanf("%d",&vetor[0]);
	fflush(stdin);
	for(i=1;i<100;i++){
		printf("Deseja inserir outro valor? (s/n): ");
		scanf("%c",&decisao);
		fflush(stdin);
		if(decisao=='s' || decisao=='S'){
			printf("Insira outro valor: ");
			scanf("%d",&vetor[i]);
			fflush(stdin);
			cont++;
		}
		if(decisao=='n' || decisao=='N'){
			i=100;
		}		
	}
	media=mediadeVetor(vetor,cont);
	printf("A media eh %.2f",media);
}



