#include <stdio.h>
#include <math.h>


//Fa�a um programa que leia um n�mero e, caso ele seja positivo, 
//calcule e mostre: o n�mero digitado ao quadrado e raiz quadrada do n�mero digitado.


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
