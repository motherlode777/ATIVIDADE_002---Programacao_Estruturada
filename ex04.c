#include <stdio.h>

/*Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. 
Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não concedido.”
, caso contrário, imprima: “Empréstimo concedido.” */



int main () {
	
float sal, prest;

printf ("Digite o valor do salario.\n");
scanf ("%f", &sal);	
printf ("Digite o valor da prestacao.\n");
scanf ("%f", &prest);

if (sal/5 > prest){
	printf ("Emprestimo concedido");
}

else{
	printf ("Emprestimo nao concedido");
	}		
	
	return 0; 
}
