/* 26 - Sabe-se que um número da forma n3 é igual a soma de n ímpares consecutivos.
Exemplo: 1^3= 1, 2^3= 3+5, 3^3= 7+9+11, 4^3= 13+15+17+19,...
Dado m, determine os ímpares consecutivos cuja soma é igual a n3 para n assumindo
valores de 1 a m. */

#include <stdio.h>

main() {
    int n, m, i, inicio, soma;
    printf("Digite o valor de m: ");
    scanf("%d", &m);
    n = 1;
    while (n<=m){
        soma=0;
        inicio=1;
        while(soma!=n*n*n){
            soma=0;
            i=0;
            while(i<n){
                soma = soma + inicio + 2 *i;
                i++;
		    }
            inicio=inicio+2;
	    }
        inicio=inicio-2;
	    printf("%d*%d*%d = %d", n, n, n, inicio);
	    i=1;
	    printf("\n"); 
	    while (i<n){
            printf("+%d", inicio+2*i);
            printf("\n"); 
            i++;
        }
        n++;
    }   
}

