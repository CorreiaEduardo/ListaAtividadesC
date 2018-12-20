/* 50 – Fazer um programa que solicite 5 jogadores para formação de um time de eSport.
Os dados dos jogadores são: nome, idade e score. O programa deve mostrar o player com
maior idade e calcular média de score dos jogadores; */
#include <stdio.h>
#include <string.h>
struct tipoJog{
	char nomeJog[20];
	int idadeJog;
	float scoreJog;	
}jogador[5];

main(){
	int i,tam,maior;
	float media,soma;
	char nomemaior[20];
	printf("Insira o nome do jogador 1: ");
	fgets(jogador[0].nomeJog,20,stdin);
	printf("Insira a idade do jogador 1: ");
	scanf("%f",&jogador[0].idadeJog);
	printf("Insira o score do jogador 1: ");
	scanf("%f",&jogador[0].scoreJog);
	getchar();
	maior=jogador[0].idadeJog;
	soma=jogador[0].scoreJog;
	strcpy(nomemaior,jogador[0].nomeJog);
	for(i=1;i<5;i++){
		printf("Insira o nome do jogador %i: ",i+1);
		fgets(jogador[i].nomeJog,20,stdin);
		printf("Insira a idade do jogador %i: ",i+1);
		scanf("%f",&jogador[i].idadeJog);
		printf("Insira o score do jogador %i: ",i+1);
		scanf("%f",&jogador[i].scoreJog);
		getchar();
		soma=soma+jogador[i].scoreJog;
		if(jogador[i].idadeJog>maior){
			maior=jogador[i].idadeJog;
			strcpy(nomemaior,jogador[i].nomeJog);
		}
	}
	media=soma/5;
	printf("\nA media de escore do time eh: %f",media);	
	printf("\nO jogador mais velho eh o ");
	tam=strlen(nomemaior);
	for(i=0;i<tam;i++){
		printf("%c",nomemaior[i]);
	}
}



