/* 8 - Admitindo que uma data � lida pelo algoritmo em uma vari�vel inteira, e n�o em uma
vari�vel do tipo data, crie um algoritmo que leia uma data no formato DDMMAA e
imprima essa data no formato AAMMDD, onde: 
� A letra D corresponde a dois algarismos representando o dia;
� A letra M corresponde a dois algarismos representando o m�s;
� A letra A corresponde aos dois �ltimos algarismos representando o ano. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int data1,aux,mm,aa,dd,data2;
	printf("Informe uma data no formato DDAAMM: ");
	scanf("%i",&data1);
	aux=data1;
	aa=aux%100;
	aux=aux/100;
	mm=aux%100;
	dd=aux/100;
	data2=((aa*100)+mm)*100+dd;
	printf("Data no formato AAMMDD: %i", data2);

}
