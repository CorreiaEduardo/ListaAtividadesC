/*43 - Escreva um algoritmo em C que receba uma string um caractere e o índice de uma
posição da string como parâmetro e insira o caractere na posição "empurrando" todas as
demais para o lado.*/
#include<stdio.h>
#include<string.h>
main(){
	char str[30],c;
	int tam,i,indice,cont;
	printf("Digite uma palavra: ");
	gets(str);
	printf("Digite uma letra para inserir: ");
	scanf("%c",&c);
	printf("Digite a posicao da palavra que deseja inserir a letra: ");
	scanf("%d",&indice);
	indice--;
	tam=strlen(str);
	cont=tam;
	for(i=0;i<=tam;i++){
		if(i==indice){
			do{
				str[cont]=str[cont-1];
				cont--;				
			}while(cont!=i);
			str[i]=c;
		}														
	}
	for(i=0;i<=tam;i++){
		printf("%c",str[i]);
	}
}



