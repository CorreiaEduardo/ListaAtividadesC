/*
56 - O superfatorial de um n�mero N � definida pelo produto dos N primeiros fatoriais de
N. Assim, o superfatorial de 4 � sf(4) = 1! * 2! * 3! * 4! = 288 Fa�a uma fun��o recursiva
que receba um n�mero inteiro positivo N e retorne o superfatorial desse n�mero.
*/

#include <stdio.h>
#include <locale.h>
int fat(int num){
	if(num<=1){
		return 1;
	}
	return num*fat(num-1);
}
int sup_fatorial(int num){
	if (num<=1){
		return 1;
	}
	return fat(num)*sup_fatorial(num-1);
}
main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Insira um n�mero: ");
	scanf("%d",&num);
	printf("O superfatorial desse n�mero �: %d",sup_fatorial(num));
}




