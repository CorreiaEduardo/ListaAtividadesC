/* 2 - Escreva um algoritmo para ler o n�mero total de eleitores de um munic�pio, o n�mero
de votos brancos, nulos e v�lidos. Calcular e escrever o percentual que cada um
representa em rela��o ao total de eleitores.*/

#include <stdio.h>
#include<stdlib.h>

main(){
	float eleitores,votos_brancos,votos_nulos,votos_validos,porcentagem_votos_brancos,porcentagem_votos_nulos,porcentagem_votos_validos;
	printf("Insira o numero total de eleitores: ");
	scanf("%f", &eleitores);
	printf("Insira a quantidade de votos brancos: ");
	scanf("%f", &votos_brancos);
	printf("Insira a quantidade de votos nulos: ");
	scanf("%f", &votos_nulos);
	printf("Insira a quantidade de votos validos: ");
	scanf("%f" ,&votos_validos);		
	porcentagem_votos_brancos = (votos_brancos*100)/eleitores;
	porcentagem_votos_nulos = (votos_nulos*100)/eleitores;
	porcentagem_votos_validos = (votos_validos*100)/eleitores;		
	printf("A quantidade de votos brancos representa: %.2f%%" ,porcentagem_votos_brancos);
	printf("\n");
	printf("A quantidade de votos nulos representa: %.2f%%" ,porcentagem_votos_nulos);
	printf("\n");
	printf("A quantidade de votos validos representa: %.2f%%" ,porcentagem_votos_validos);
	printf("\n");		
	system("PAUSE");
}
