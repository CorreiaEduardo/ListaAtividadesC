/*30 - Escreva um algoritmo que calcule o fatorial de um n�mero informado pelo usu�rio.*/

#include<stdio.h>

main(){
	int fat,cont,n;
	printf("Informe um numero: ");
	scanf("%d" ,&n);
	fat=1;
	for(cont=1;cont<=n;cont++){
		fat=fat*cont;
		
	}
	printf("O fatorial eh %d" ,fat);
	
}


