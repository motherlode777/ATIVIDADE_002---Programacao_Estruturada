#include <stdio.h>

//Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.


int main (){
	
int n1; 

printf ("Digite um numero.\n");
scanf ("%d", &n1);

if (n1%2 == 0){
	printf ("O numero eh par.");
}
else {
	printf ("O numero eh impar.");
}	
	
	return 0;
}
