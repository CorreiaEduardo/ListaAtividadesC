/* 4 - Fa�a um algoritmo que leia uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A f�rmula de convers�o �: F = (9 * C + 160) / 5, na qual
F � a temperatura em Fahrenheite C � a temperatura em Celsius.*/

#include <stdio.h>
#include<stdlib.h>

main(){
	float temperatura_c, temperatura_f;
	printf("Insira a temperatura em graus celsius: ");
	scanf("%f", &temperatura_c);		
	temperatura_f = (9*temperatura_c + 160)/5;
	printf("A temperatura convertida em Fahrenheit e: %.2f" ,temperatura_f);
	printf("\n");
	system("PAUSE");
}
