/*46 - Escreva um algoritmo em C que receba uma String e depois outra String e verifique
se a segunda string está contida na primeira.*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	char str1[20],str2[20];
	int i,j,k,tam=0,tam2=0,cont=0,c=0;
    printf("Digite uma palavra: ");
    fgets(str1,20,stdin);
    printf("Digite outra palavra: ");
    fgets(str2,20,stdin);
    tam=strlen(str1)-1;
    tam2=strlen(str2)-1;
    if(tam2>tam){
    	printf("A segunda palavra não está contida na primeira.\n");
	}else{
		for(i=0;i<tam2;i++){
			for(j=0;j<tam;j++){
				if(str1[j]==str2[i]){
					c=j+1;
					cont++;
					for(k=1;k<tam2;k++){
						if(str2[k]==str1[c]){
							cont++;
							c++;
						}
						else{
							c=0;
							cont=0;
							k=tam2;
						}
					}
					if(k==tam2){
						j=tam;
						i=tam2;
					}
				}
			}
		}		
	}
	if(cont==tam2){
		printf("A segunda palavra está contida na primeira.\n");
	}
	else{
		printf("A segunda palavra não está contida na primeira.\n");
	}
}




