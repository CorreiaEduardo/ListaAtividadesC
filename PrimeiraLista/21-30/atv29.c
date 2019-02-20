/*29 - Fa�a um programa que gera um n�mero aleat�rio de 1 a 1000. 
O usu�rio deve tentar� acertar qual o n�mero foi gerado, 
a cada tentativa o programa dever� informar se o chute � menor ou maior 
que o n�mero gerado. O programa acaba quando o usu�rio acerta 
o n�mero gerado. O programa deve informar em quantas tentativas 
o n�mero foi descoberto.
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
	printf("Um n�mero aleatorio foi gerado... Tente acertar o n�mero.\n");
	do{
		printf("Insira um n�mero: ");
		scanf("%d",&tentativa);
		cont++;
		if(tentativa>numero){
			printf("O numero gerado � menor.\n");
		}
		if(tentativa<numero){
			printf("O numero gerado � maior.\n");
		}
	}while(tentativa!=numero);

	printf("Voc� acertou com %d tentativas! o n�mero era realmente %d!",cont,numero);

}


