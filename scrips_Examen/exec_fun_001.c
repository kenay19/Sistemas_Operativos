#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv []) {
	printf("Ejecutamos Hola mundo\n");
	char* list[] = {argv[0],NULL};
	execvp( "scrips_Examen/hola", list); // Ejecutamos otro archivo

	
	// ruta del archivo junto con la ejecucion, nombre del archivo, ambiente
	exit(0);
	return 0;
}