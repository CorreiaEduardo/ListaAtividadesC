/*60 - Escreva uma função recursiva que determine quantas vezes um dígito
K ocorre em um número natural N. Por exemplo:
o dígito 2 ocorre 3 vezes em 762021192.*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
int calcOcorrencias(char n[],char k, int tam, int i,int cont){
	if(i>tam){
		return cont;
	}
	if(n[i]==k){
		cont++;
	}
	return calcOcorrencias(n,k,tam,i+1,cont);
}
main(){
	setlocale(LC_ALL,"Portuguese");
	char n[100],k,i=0,cont=0;
	int tam;
    printf("Insira um numero: ");
    fgets(n,20,stdin);
    tam=strlen(n);
    printf("Insira um digito: ");
    scanf("%c",&k);
	cont=calcOcorrencias(n,k,tam,i,cont);
	printf("O digito %c ocorre %d vezes em %s",k,cont,n);
}




