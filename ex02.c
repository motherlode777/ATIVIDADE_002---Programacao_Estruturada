#include <stdio.h>

//Fa�a um programa que leia dois n�meros e mostre o maior deles. 
//Se, por acaso, os dois n�meros forem iguais, imprima a mensagem     �N�meros iguais�.

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
