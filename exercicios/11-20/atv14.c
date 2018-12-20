/*14 - Um vendedor necessita de um algoritmo que calcule o preço total devido por um
cliente. O algoritmo deve receber o código de um produto e a quantidade comprada e
calcular o preço total, usando a tabela abaixo:
Código Preço
1001 5,32
1324 6,45
6548 2,37
0987 5,32
7623 6,45
*/

#include <stdio.h>
#include <stdlib.h>

main(){
	int cod_produto, qtd_produto;
	float total_devido;
	printf("Insira o codigo do produto: ");
	scanf("%d" ,&cod_produto);
	printf("Insira a quantidade comprada: ");
	scanf("%d" ,&qtd_produto);
	if (cod_produto == 1001){
			total_devido = qtd_produto*5.32;
			printf("O cliente deve R$ %.2f " ,total_devido);
	}
	if (cod_produto == 1324){
			total_devido = qtd_produto*6.45;
			printf("O cliente deve R$ %.2f " ,total_devido);
	}
	if (cod_produto == 6548){
			total_devido = qtd_produto*2.37;
			printf("O cliente deve R$ %.2f " ,total_devido);
	}
		if (cod_produto == 987){
			total_devido = qtd_produto*5.32;
			printf("O cliente deve R$ %.2f " ,total_devido);
	}
		if (cod_produto == 7623){
			total_devido = qtd_produto*6.45;
			printf("O cliente deve R$ %.2f " ,total_devido);
	}
	
	
}


