/* 5 - Fa�a um algoritmo que calcule a quantidade de litros de combust�vel gasta em uma
viagem, utilizando um autom�vel que faz 12Km por litro. Para obter o c�lculo, o usu�rio
deve fornecer o tempo gasto na viagem e a velocidade m�dia durante ela. Desta forma,
ser� poss�vel obter a dist�ncia percorrida com a
f�rmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da dist�ncia, basta
calcular a quantidade de litros de combust�vel utilizada na viagem com a f�rmula:
LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os valores da
velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida e a
quantidade de litros utilizada na viagem.*/

#include <stdio.h>
#include <stdlib.h>

main(){
	float tempo_gasto,velocidade_media,distancia,litros_usados;
	printf("Insira o tempo gasto em minutos na viagem: ");
	scanf("%f" ,&tempo_gasto);
	printf("Insira a velocidade media da viagem percorrida: ");
	scanf("%f" ,&velocidade_media);
	distancia=tempo_gasto*velocidade_media;
	litros_usados=distancia/12;	
	printf("\n");
	printf("A velocidade media foi %.2f m/s" ,velocidade_media);
	printf("\n");	
	printf("O tempo gasto na viagem foi %.2f min" ,tempo_gasto);
	printf("\n");	
	printf("A distancia percorrida foi %.2f m" ,distancia);
	printf("\n");	
	printf("A quantidade de litros gasta na viagem foi %.2f L" ,litros_usados);
	printf("\n");	
	system("PAUSE");
	
	
	
}
