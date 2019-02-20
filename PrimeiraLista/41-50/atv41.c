/*41 - Fazer um programa em C que solicita um número inteiro e soletra o mesmo na tela.
Ex: 124: um, dois, quatro.*/
#include<stdio.h>
#include<string.h>
main(){
	char num1[20];
	int tam,i;
	printf("Informe um numero inteiro: ");
	gets(num1);
	tam=strlen(num1);
	for(i=0;i<=tam;i++){
		if(num1[i]=='0'){
			printf("zero ");
		}
		if(num1[i]=='1'){
			printf("um ");
		}
		if(num1[i]=='2'){
			printf("dois ");
		}		
		if(num1[i]=='3'){
			printf("tres ");
		}
		if(num1[i]=='4'){
			printf("quatro ");
		}
		if(num1[i]=='5'){
			printf("cinco ");
		}
		if(num1[i]=='6'){
			printf("seis ");
		}
		if(num1[i]=='7'){
			printf("sete ");
		}
		if(num1[i]=='8'){
			printf("oito ");
		}
		if(num1[i]=='9'){
			printf("nove ");
		}														
	}
}



