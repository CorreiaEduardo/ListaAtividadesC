/*20 - Elaborar um algoritmo para realizar as opera��es descritas
abaixo:
A � Definir uma vari�vel para o sal�rio reajustado: novo_salario;
B � Ler um valor para a vari�vel sal�rio;
C � Verificar se o valor de salario <= 500, se sim reajustar em 15%;
D � Verificar se o valor de salario <= 1000, se sim reajustar em 10 %;
E � Verificar se o valor de salario > 1000, se sim reajustar em 5%;
F � Apresentar o valor reajustado, atribuindo a novo_sal�rio;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int salario,salario_reajustado,novo_salario;
	printf("Insira o salario: ");
	scanf("%f" ,&salario);
	while(salario<= 500){
		salario_reajustado = (salario*15)/100;
		novo_salario = salario+salario_reajustado;
		printf("O novo salario e %.2f" ,novo_salario);
		printf("\n");
		system("PAUSE");
		
	}	
	if(salario<= 1000 && salario>500){
		salario_reajustado = (salario*10)/100;
		novo_salario = salario+salario_reajustado;
		printf("O novo salario e %.2f" ,novo_salario);
		printf("\n");
		system("PAUSE");
   }
	if(salario> 1000){
		salario_reajustado = (salario*5)/100;
		novo_salario = salario+salario_reajustado;
		printf("O novo salario e %.2f" ,novo_salario);
		printf("\n");
		system("PAUSE");
   }
   
}
