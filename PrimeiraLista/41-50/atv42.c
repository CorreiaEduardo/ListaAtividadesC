/*42 - Escrever uma fun��o que recebe uma string e um caractere como par�metro e
remove todas as ocorr�ncias do caractere da string.*/
#include<stdio.h>
#include<string.h>
main(){
	char str[30],c;
	int tam,i,j;
	printf("Digite uma palavra: ");
	gets(str);
	printf("Digite uma letra de comparacao: ");
	scanf("%c",&c);
	tam=strlen(str);
	for(i=0;i<=tam;i++){
		if(str[i]==c){
			for(j=i;j<=tam;j++){
				str[j]=str[j+1];
			}
		}
	}
	tam=strlen(str);
	for(i=0;i<=tam;i++){
		printf("%c",str[i]);
	}
}





