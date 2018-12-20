/*29 - Faça um programa que gera um número aleatório de 1 a 1000. 
O usuário deve tentará acertar qual o número foi gerado, 
a cada tentativa o programa deverá informar se o chute é menor ou maior 
que o número gerado. O programa acaba quando o usuário acerta 
o número gerado. O programa deve informar em quantas tentativas 
o número foi descoberto.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<time.h>
main(){
	setlocale(LC_ALL,"portuguese");
	int numero,tentativa,cont=0;
	srand(time(NULL));
	numero = rand() % 1001;
	printf("Um número aleatorio foi gerado... Tente acertar o número.\n");
	do{
		printf("Insira um número: ");
		scanf("%d",&tentativa);
		cont++;
		if(tentativa>numero){
			printf("O numero gerado é menor.\n");
		}
		if(tentativa<numero){
			printf("O numero gerado é maior.\n");
		}
	}while(tentativa!=numero);

	printf("Você acertou com %d tentativas! o número era realmente %d!",cont,numero);

}


