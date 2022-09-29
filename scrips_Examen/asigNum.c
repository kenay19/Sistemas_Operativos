#include <stdio.h>
#include <stdlib.h>

void FillArr(char *, unsigned int);

int main (int argc, char *argv[]) {
	char *ptr = NULL;
	unsigned int nr_bytes = atoi(argv[0]);
	ptr = malloc(nr_bytes); // Asigna el tamanio del array

	if (ptr != NULL) {
		FillArr(ptr, nr_bytes);
	}

	for (int i = 0; i < nr_bytes; i++) // Imprime el arreglo
		printf("%d ", ptr[i]);
	printf("\n ");
	free(ptr); // Libera la memoria del array
	return 0;
}

void FillArr(char *ptr, unsigned int nr_bytes) { //Llena el arreglo
	for (int i = 0; i < nr_bytes; i++) {
		ptr[i] = i;
		//ptr++;
	}
}
