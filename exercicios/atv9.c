/* 9 - Escreva um algoritmo que armazene o valor 10 em uma vari�vel A e o valor 20 em
uma vari�vel B. A seguir (utilizando apenas atribui��es entre vari�veis) troque os seus
conte�dos fazendo com que o valor que est� em A passe para B e vice-versa. Ao final,
escrever os valores que ficaram armazenados nas vari�veis. */


#include <stdio.h>
#include <stdlib.h>

main() {
	int troca;
	int A = 10;
	int B = 20;
	troca = A;
	A = B;
	B = troca;
	printf("\n");
	printf("A variavel A tem valor %i" ,A);
	printf("\n");
	printf("A variavel B tem valor %i" ,B);
	printf("\n");
	system("PAUSE");




}
