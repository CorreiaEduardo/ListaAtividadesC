/* 1 -Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura), calcular
e escrever a �rea do ret�ngulo (base*altura).*/
#include <stdio.h>
#include<stdlib.h>

main(){
	int base,altura,area;
	printf("Insira a base do retangulo: ");
	scanf("%i" ,&base);
	printf("Insira a altura do retangulo: ");
	scanf("%i" ,&altura);	
	area = base*altura;
	printf("A area do retangulo e %i" ,area);
	printf("\n");
	system("PAUSE");
	
	
	
}
