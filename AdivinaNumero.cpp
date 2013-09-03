#include <iostream>
#include <dos.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(){

	int c, nusuario,nmaq;

	srand(time(NULL)); nmaq=rand()% 100+1;
	c=10;
	printf("\nEl Numero es: %d \n", nmaq);
	do{
		printf("\nAdivina que numero tengo entre el 1 y el 100, tienes %d intentos\n", c);
		printf("\nDame un numero entero");
		scanf("%i", &nusuario);
		if(nusuario>nmaq) printf("\nTu numero es mayor que el mio");
		else if(nusuario<nmaq) printf("\nTu numero es menor que el mio");
		else printf("\nEse numero no existe");
		c--;
	}while(nusuario!=nmaq && c>0);
	if(nusuario==nmaq) printf("\nFeliciadades te quedaron %d intentos", c);
	else printf("\nLastima, suerte para la proxima");

	getch(); return 0;

}

