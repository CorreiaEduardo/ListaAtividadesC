/*19 - Faça um programa que leia uma data qualquer (dia, mês e ano) e calcule a data do
próximo dia. Lembre-se que em anos bissextos o mês de fevereiro tem 29 dias. (Dica:
um ano é bissexto quando for divisível por 4). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int dia,mes,ano,dia_seguinte,mes_seguinte,ano_seguinte;
	printf("Insira o dia sem zero: ");
	scanf("%i" ,&dia);
	printf("Insira o mes sem zero: ");
	scanf("%i" ,&mes);
	printf("Insira o ano: ");
	scanf("%i" ,&ano);
	if(mes== 1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10){
		if (dia<31){
		dia_seguinte=dia + 1;
		printf("O dia seguinte e: %i %i %i " ,dia_seguinte ,mes ,ano);
	}
	    else{
	    	dia_seguinte = 01;
	    	mes_seguinte=mes+1;
	    	printf("O dia seguinte e: %i %i %i " ,dia_seguinte ,mes_seguinte ,ano);
	}
		
		
	}
	if (mes==4 || mes==6 || mes==9 || mes==11){
		
		if(dia<30){
			dia_seguinte=dia + 1;
			printf("O dia seguinte e: %i %i %i " ,dia_seguinte ,mes ,ano);
			
		}
		else{
			dia_seguinte=01;
			mes_seguinte=mes + 1;
			printf("O dia seguinte e %i %i %i: " ,dia_seguinte ,mes_seguinte ,ano);
			
		}
	}
	if(mes==02){
		if(ano%4==0){
			if(dia==29){
				dia_seguinte=01;
				mes_seguinte=mes+1;
				printf("O dia seguinte e %i %i %i: " ,dia_seguinte ,mes_seguinte ,ano);
			}
			else{
				dia_seguinte=dia+1;
				printf("O dia seguinte e %i %i %i: " ,dia_seguinte ,mes ,ano);
			}
		}
		else{
			if (dia==28){
				dia_seguinte=01;
				mes_seguinte=mes+1;
				printf("O dia seguinte e %i %i %i: " ,dia_seguinte ,mes_seguinte ,ano);
			}
			else{
				dia_seguinte=dia+1;
				printf("O dia seguinte e %i %i %i: " ,dia_seguinte ,mes ,ano);
				
			}
			
		}
		
	}
	if(mes==12){
		if(dia==31){
			dia_seguinte=01;
			mes_seguinte=01;
			ano_seguinte=ano+1;
			printf("O dia seguinte e: %i %i %i " ,dia_seguinte ,mes_seguinte ,ano_seguinte);
		}
		else{
			dia_seguinte=dia+1;
			printf("O dia seguinte e %i %i %i: " ,dia_seguinte ,mes ,ano);
		}
	}
	
	
	
		
}



/*01 31
02 28
03 31
04 30
05 31
06 30
07 31
08 31
09 30
10 31
11 30
12 31

30 abril, junho, setembro, novembro
31 janeiro, março, maio, julho, agosto, outubro, dezembro
28 fevereiro*/
