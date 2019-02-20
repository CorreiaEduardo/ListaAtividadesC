/*45 – Faça um programa que receba do usuário uma string. O programa imprime a string
sem as suas vogais*/
#include<stdio.h>
#include<string.h>
main(){
	char str[30],strv[30];
	int tam,i;
	printf("Digite uma palavra: ");
	gets(str);
	tam=strlen(str);
	for(i=0;i<=tam;i++){
		if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
			printf("%c", str[i]);
		}														
	}
}



