/*17 - Escreva um algoritmo que leia o número de identificação, as 3 notas obtidas por um
aluno nas 3 verificações e a média dos exercícios que fazem parte da avaliação, e calcule
a média de aproveitamento, usando a fórmula: MA = (nota1 + nota 2 * 2 + nota 3 * 3 +
ME)/7 A atribuição dos conceitos obedece a tabela abaixo. O algoritmo deve escrever o
número do aluno, suas notas, a média dos exercícios, a média de aproveitamento, o
conceito correspondente e a mensagem 'Aprovado' se o conceito for A, B ou C, e
'Reprovado' se o conceito for D ou E.
Média de aproveitamento Conceito
>= 90 A
>= 75 e < 90 B
>= 60 e < 75 C
>= 40 e < 60 D
< 40 E */

#include <stdio.h>
#include <stdlib.h>

main(){
	int id_aluno;
	float nota_1,nota_2,nota_3,media_exercicios,media_aproveitamento;
	printf("Insira o numero de identificacao do aluno: ");
	scanf("%i" ,&id_aluno);
	printf("Insira a primeira nota do aluno: ");
	scanf("%f" ,&nota_1);	
	printf("Insira a segunda nota do aluno: ");
	scanf("%f" ,&nota_2);	
	printf("Insira a terceira nota do aluno: ");
	scanf("%f" ,&nota_3);	
	printf("Insira a media dos exercicios que fazem parte da avaliacao: ");
	scanf("%f" ,&media_exercicios);	
	
	media_aproveitamento= (nota_1+nota_2*2+nota_3*3+media_exercicios)/7;
	
	if(media_aproveitamento>= 90){
		printf("O aluno de numero %i de notas %.1f, %.1f, %.1f com a media dos exercicios %.1f teve a media de aproveitamento %.1f, tendo isso em vista o aluno se enquadra no conceito A", id_aluno ,nota_1 ,nota_2 ,nota_3 ,media_exercicios ,media_aproveitamento);
		printf("\n");
		system("PAUSE");
		
	}	
	if(media_aproveitamento>=75 && media_aproveitamento<90){
		printf("O aluno de numero %i de notas %.1f, %.1f, %.1f com a media dos exercicios %.1f teve a media de aproveitamento %.1f, tendo isso em vista o aluno se enquadra no conceito B", id_aluno ,nota_1 ,nota_2 ,nota_3 ,media_exercicios ,media_aproveitamento);
		printf("\n");
		system("PAUSE");
		
	}
	if(media_aproveitamento>=60 && media_aproveitamento<75){
		printf("O aluno de numero %i de notas %.1f, %.1f, %.1f com a media dos exercicios %.1f teve a media de aproveitamento %.1f, tendo isso em vista o aluno se enquadra no conceito C", id_aluno ,nota_1 ,nota_2 ,nota_3 ,media_exercicios ,media_aproveitamento);
		printf("\n");
		system("PAUSE");
		
	}
	if(media_aproveitamento>=40 && media_aproveitamento<60){
		printf("O aluno de numero %i de notas %.1f, %.1f, %.1f com a media dos exercicios %.1f teve a media de aproveitamento %.1f, tendo isso em vista o aluno se enquadra no conceito D", id_aluno ,nota_1 ,nota_2 ,nota_3 ,media_exercicios ,media_aproveitamento);
		system("PAUSE");
		
	}
	if(media_aproveitamento<40){
		printf("O aluno de numero %i de notas %.1f, %.1f, %.1f com a media dos exercicios %.1f teve a media de aproveitamento %.1f, tendo isso em vista o aluno se enquadra no conceito E", id_aluno ,nota_1 ,nota_2 ,nota_3 ,media_exercicios ,media_aproveitamento);
		system("PAUSE");
		
	}	
	
	
	
}
