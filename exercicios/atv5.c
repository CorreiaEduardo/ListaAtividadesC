/* 5 - Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma
viagem, utilizando um automóvel que faz 12Km por litro. Para obter o cálculo, o usuário
deve fornecer o tempo gasto na viagem e a velocidade média durante ela. Desta forma,
será possível obter a distância percorrida com a
fórmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância, basta
calcular a quantidade de litros de combustível utilizada na viagem com a fórmula:
LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os valores da
velocidade média, tempo gasto na viagem, a distância percorrida e a
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
