/*
59 - Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência
Fibonacci. Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
*/

#include <stdio.h>
#include <locale.h>
int fibonacci(num){
	if (num==2 || num==3){
		return 1;
	}
	return fibonacci(num-1)+fibonacci(num-2);
}
main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Insira um número: ");
	scanf("%d",&num);
	printf("O numero na sequencia que corresponde ao inserido é: %d",fibonacci(num));
}




