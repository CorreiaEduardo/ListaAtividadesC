/* 44 - Crie um programa que calcula o comprimento de uma string; */
#include<stdio.h>
#include<string.h>
main(){
	char str[30];
	int tam=0;
	printf("Insira uma palavra: ");
	gets(str);
	tam=strlen(str);
	printf("Sua palavra tem %d letras",tam);
}


