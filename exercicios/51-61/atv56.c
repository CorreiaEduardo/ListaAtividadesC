/*
56 - O superfatorial de um número N é definida pelo produto dos N primeiros fatoriais de
N. Assim, o superfatorial de 4 é sf(4) = 1! * 2! * 3! * 4! = 288 Faça uma função recursiva
que receba um número inteiro positivo N e retorne o superfatorial desse número.
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
	printf("Insira um número: ");
	scanf("%d",&num);
	printf("O superfatorial desse número é: %d",sup_fatorial(num));
}




