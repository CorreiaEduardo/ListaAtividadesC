/*16 - A Secretaria de Meio Ambiente que controla o �ndice de polui��o mant�m 3 grupos
de ind�strias que s�o altamente poluentes do meio ambiente. O �ndice de polui��o
aceit�vel varia de 0,05 at� 0,25. Se o �ndice sobe para 0,3 as ind�strias do 1o grupo s�o
intimadas a suspenderem suas atividades, se o �ndice crescer para 0,4 as industrias do 1o e
2o grupo s�o intimadas a suspenderem suas atividades, se o �ndice atingir 0,5 todos os
grupos devem ser notificados a paralisarem suas atividades. Fa�a um algoritmo que leia o
�ndice de polui��o medido e emita a notifica��o adequada aos diferentes grupos de
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
