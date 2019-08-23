/*
 ============================================================================
 Name        : ejercicio2.c
 Author      : Nicolas
 Version     :
 Copyright   : GLB 3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int sumar(int* pResultado);


int main(void) {

	int sarasa;
	if (sumar(&sarasa) == 0)
	{
	printf("El resultado es: %d",sarasa);
	}
	else {
		printf ("ERROR");
	}
	return 0;
}

int sumar(int* pResultado)
{
	int numero1;
	int numero2;
	printf("El primer numero es:");
	scanf("%d",&numero1);
	printf("El segundo numero es:");
	scanf("%d",&numero2);
	*pResultado=numero1+numero2;
	return 0;
}








