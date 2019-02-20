/*15 - O custo ao consumidor de um carro novo e a soma do custo de fábrica, da comissão
do distribuidor, e dos impostos. A comissão e os impostos s são calculados sobre o custo
de fabrica, de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao
consumidor.

CUSTO DE FÁBRICA                     % DO DISTRIBUIDOR                     % DOS IMPOSTOS
Até R$12.000,00                      5                                     Isento      
Entre R$12.000,00 e 25.000,00        10                                    15             
Acima de R$ 25.000,00                15                                    20      

*/

#include <stdio.h>
#include <stdlib.h>

main(){
	float custo_consumidor,custo_fabrica,porcentagem_dist,impostos;
	printf("Insira o custo de fabrica do carro: ");
	scanf("%f" ,&custo_fabrica);
	
	if(custo_fabrica<12.000){
		porcentagem_dist = (custo_fabrica*5)/100;
		custo_consumidor = custo_fabrica+porcentagem_dist;
		printf("O custo final ao consumidor sera %.3f" ,custo_consumidor);
		printf("\n");
		system("PAUSE");
		
	}
	if(custo_fabrica>=12.000 && custo_fabrica<=25.000){
		porcentagem_dist = (custo_fabrica*10)/100;
		impostos = (custo_fabrica*15)/100;
		custo_consumidor = custo_fabrica+porcentagem_dist+impostos;
		printf("O custo final ao consumidor sera %.3f" ,custo_consumidor);
		printf("\n");
		system("PAUSE");
		
		
	}
	if(custo_fabrica>25.000){
		porcentagem_dist = (custo_fabrica*15)/100;
		impostos = (custo_fabrica*20)/100;
		custo_consumidor = custo_fabrica+porcentagem_dist+impostos;
		printf("O custo final ao consumidor sera %.3f" ,custo_consumidor);
		printf("\n");
		system("PAUSE");
		
		
	}
	
	
	
	
}
