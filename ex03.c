#include <stdio.h>

//Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou �mpar.


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
