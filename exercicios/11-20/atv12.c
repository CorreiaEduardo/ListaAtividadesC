/*12 � Fa�a um algoritmo que leia um n�mero inteiro e mostre uma mensagem indicando
se este n�mero � par ou �mpar, e se � positivo ou negativo.*/

#include <stdio.h>
#include <stdlib.h>

main(){
	int x;
	printf("Insira o numero: ");
	scanf("%d" ,&x);
	if (x>0){
		if (x%2==0){
		    printf("O numero e positivo e par.");
		
		}
		else {
		    printf("O numero e positivo e impar.");	
			
		}		
	}
	else{
		if (x%2==0){
			printf("O numero e negativo e par.");
			
		}
		else{
			printf("O numero e negativo e impar.");
			
			
		}
	}
	printf("\n");
	system("PAUSE");

}
