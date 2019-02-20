/*16 - A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3 grupos
de indústrias que são altamente poluentes do meio ambiente. O índice de poluição
aceitável varia de 0,05 até 0,25. Se o índice sobe para 0,3 as indústrias do 1o grupo são
intimadas a suspenderem suas atividades, se o índice crescer para 0,4 as industrias do 1o e
2o grupo são intimadas a suspenderem suas atividades, se o índice atingir 0,5 todos os
grupos devem ser notificados a paralisarem suas atividades. Faça um algoritmo que leia o
índice de poluição medido e emita a notificação adequada aos diferentes grupos de
empresas */

#include <stdio.h>
#include <stdlib.h>

main(){
	float ind_poluicao;
	printf("Insira o indice de poluicao: ");
	scanf("%f" ,&ind_poluicao);
	
	if(ind_poluicao<=0.25){
		printf("O indice de poluicao e aceitavel");
		printf("\n");
		system("PAUSE");
		
	}	
	if(ind_poluicao>=0.3 && ind_poluicao<0.4){
		printf("As industrias do primeiro grupo devem ser intimadas a suspenderem suas atividades por que o indice esta acima de 0,3");
		printf("\n");
		system("PAUSE");
		
	}
	if(ind_poluicao>=0.4 && ind_poluicao<0.5){
		printf("As industrias do primeiro e segundo grupo devem ser intimadas a suspenderem suas atividades por que o indice esta acima de 0,4");
		printf("\n");
		system("PAUSE");
		
	}
	if(ind_poluicao>=0.5){
		printf("As industrias de todos os 3 grupos devem ser intimadas a suspenderem suas atividades por que o indice esta acima de 0,5");
		printf("\n");
		system("PAUSE");
		
	}
	
	
	
	
}
