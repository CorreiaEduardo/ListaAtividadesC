/*13 - Faça um programa que receba três números e mostre-os em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

main(){
	float num_1,num_2,num_3;
	printf("Insira o primeiro numero: ");
	scanf("%f" ,&num_1);
	printf("Insira o segundo numero: ");
	scanf("%f" ,&num_2);	
	printf("Insira o terceiro numero: ");
	scanf("%f" ,&num_3);	
	if (num_1>num_2 && num_2>num_3){
		printf("A ordem crescente e %.2f < %.2f < %.2f: " ,num_3,num_2,num_1);
		
		
	}
		if (num_1>num_3 && num_3>num_2){
		printf("A ordem crescente e %.2f < %.2f < %.2f: " ,num_2,num_3,num_1);
		
		
	}
		if (num_2>num_1 && num_1>num_3){
		printf("A ordem crescente e %.2f < %.2f < %.2f: " ,num_3,num_1,num_2);
		
		
	}
		if (num_3>num_1 && num_1>num_2){
		printf("A ordem crescente e %.2f < %.2f < %.2f: " ,num_2,num_1,num_3);
		
		
	}
		if (num_2>num_3 && num_3>num_1){
		printf("A ordem crescente e %.2f < %.2f < %.2f: " ,num_1,num_3,num_2);
		
		
	}
		if (num_3>num_2 && num_2>num_1){
		printf("A ordem crescente e %.2f < %.2f < %.2f: " ,num_1,num_2,num_3);
		
		
	}
	
	
	
	
	printf("\n");
	system("PAUSE");

}
