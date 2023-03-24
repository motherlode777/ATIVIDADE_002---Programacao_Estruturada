#include <stdio.h>

//Faça um programa que leia dois números e mostre o maior deles. 
//Se, por acaso, os dois números forem iguais, imprima a mensagem     “Números iguais”.

int main (){
	
int n1, n2;

printf ("Digite o valor dos numeros\n");
scanf ("%d", &n1);
scanf ("%d", &n2);

if (n1 > n2) {
	printf ("%d eh maior", n1);
}

if (n1 < n2) {
	printf ("%d eh maior", n2);
}

if (n1 == n2){
	printf ("Numeros iguais");
}
	
	return 0; 
}
