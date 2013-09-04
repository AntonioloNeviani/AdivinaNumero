#include <iostream>
#include <dos.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
	
	//Juego de Adivinar un Numero
int main(){

	int c, nusuario,nmaq;

	srand(time(NULL)); nmaq=rand()% 100+1;
	c=10;
<<<<<<< HEAD
	printf("\nEl Numero es: %d \n", nmaq);
=======
	 //printf("\nEl Numero es: %d \n", nmaq);
	 //Ocultar Numero
>>>>>>> develop
	do{
		printf("\nAdivine que numero tengo entre el 1 y el 100, tiene %d intentos\n", c);
		printf("\nIntodusca un numero entero");
		scanf("%i", &nusuario);
		if(nusuario>nmaq) printf("\nSu numero es mayor que el mio");
		else if(nusuario<nmaq) printf("\nSu numero es menor que el mio");
		else printf("\nEse numero no existe");
		c--;
	}while(nusuario!=nmaq && c>0);
	if(nusuario==nmaq) printf("\nFeliciadades le quedaron %d intentos", c);
	else printf("\nLastima, suerte para la proxima");

	getch(); return 0;

}

