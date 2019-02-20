/* 49 – Fazer um programa que armazene informações sobre alunos que possuem: nota1,
nota2 e nota3, media e nome. Solicite 10 alunos para serem cadastrados e em seguida
mostre o aluno que teve a maior média. */
#include <stdio.h>
#include <string.h>
struct tipoAluno{
	char nomeAluno[20];
	float nota1;
	float nota2;
	float nota3;
	float media;	
}aluno[10];

main(){
	int i,tam;
	float maior;
	char nomemaior[20];
	printf("Insira o nome do aluno 1: ");
	fgets(aluno[0].nomeAluno,20,stdin);
	printf("Insira a nota 1 do aluno 1: ");
	scanf("%f",&aluno[0].nota1);
	printf("Insira a nota 2 do aluno 1: ");
	scanf("%f",&aluno[0].nota2);
	printf("Insira a nota 3 do aluno 1: ");
	scanf("%f",&aluno[0].nota3);
	getchar();
	aluno[0].media=(aluno[0].nota1+aluno[0].nota2+aluno[0].nota3)/3;
	maior=aluno[0].media;
	strcpy(nomemaior,aluno[0].nomeAluno);
	for(i=1;i<10;i++){
		printf("Insira o nome do aluno %i: " ,i+1);
		fgets(aluno[i].nomeAluno,20,stdin);
		printf("Insira a nota 1 do aluno %i: " ,i+1);
		scanf("%f",&aluno[i].nota1);
		printf("Insira a nota 2 do aluno %i: " ,i+1);
		scanf("%f",&aluno[i].nota2);
		printf("Insira a nota 3 do aluno %i: " ,i+1);
		scanf("%f",&aluno[i].nota3);
		getchar();
		aluno[i].media=(aluno[i].nota1+aluno[i].nota2+aluno[i].nota3)/3;
		if(aluno[i].media > maior){
			maior=aluno[i].media;
			strcpy(nomemaior,aluno[i].nomeAluno);
		}
	}
	printf("O aluno com maior media foi o ");
	tam=strlen(nomemaior);
	for(i=0;i<tam;i++){
		printf("%c",nomemaior[i]);
	}
	printf("\nO aluno obteve %f",maior);	
}





