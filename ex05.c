#include <stdio.h>
#include <math.h>


//Faça um programa que leia um número e, caso ele seja positivo, 
//calcule e mostre: o número digitado ao quadrado e raiz quadrada do número digitado.


int main (){

float n1; 

printf ("Digite um numero.\n");
scanf ("%f", &n1);

if (n1 > 0){
	printf ("O numero elevado ao quadrado fica: %f\n", n1*n1);
	printf ("A raiz quadrada no numero fica: %f\n", sqrt(n1)); 
	
}


	
	
	return 0; 
}
