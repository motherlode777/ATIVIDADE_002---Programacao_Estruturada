#include <stdio.h>

//Faça um programa que leia dois números e mostre qual deles é o maior.

int main (){
	
int n1, n2;

printf ("Digite o valor dos numeros\n");
scanf ("%d", &n1);
scanf ("%d", &n2);

if (n1 > n2) {
	printf ("%d eh maior", n1);
}
else {
	printf ("%d eh maior", n2);
}
	
	return 0; 
}
