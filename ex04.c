#include <stdio.h>

/*Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo. 
Se a presta��o, for maior que 20% do sal�rio, imprima: �Empr�stimo n�o concedido.�
, caso contr�rio, imprima: �Empr�stimo concedido.� */



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
