/* 4 - Faça um algoritmo que leia uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5, na qual
F é a temperatura em Fahrenheite C é a temperatura em Celsius.*/

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
