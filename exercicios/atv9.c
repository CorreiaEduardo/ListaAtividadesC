/* 9 - Escreva um algoritmo que armazene o valor 10 em uma variável A e o valor 20 em
uma variável B. A seguir (utilizando apenas atribuições entre variáveis) troque os seus
conteúdos fazendo com que o valor que está em A passe para B e vice-versa. Ao final,
escrever os valores que ficaram armazenados nas variáveis. */


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
