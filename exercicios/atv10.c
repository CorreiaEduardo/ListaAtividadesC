/*10 - O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que
o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo
para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.*/

#include <stdio.h>
#include <stdlib.h>

main(){
	float custo_consumidor,custo_fabrica,porcentagem_dist,impostos;
	printf("Insira o custo de fabrica do carro: ");
	scanf("%f" ,&custo_fabrica);
	porcentagem_dist = (custo_fabrica*28)/100;
	impostos = (custo_fabrica*45)/100;
	custo_consumidor = custo_fabrica+porcentagem_dist+impostos;
	printf("O custo final ao consumidor sera %.2f" ,custo_consumidor);
	printf("\n");
	system("PAUSE");
	
	
	
	
}
