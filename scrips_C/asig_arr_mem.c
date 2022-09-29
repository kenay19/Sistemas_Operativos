#include <stdio.h>
#include <stdlib.h>

void FillArr(int *, unsigned int);

int main (void) {
	system("clear");
	int *ptr = NULL;
	unsigned int nr_bytes;
	printf("Escriba un numero entero: ");
	scanf("%ud", &nr_bytes);
	ptr = malloc(nr_bytes); // Asigna el tamanio del array

	if (ptr != NULL) {
		FillArr(ptr, nr_bytes);
	}

	for (int i = 0; i < nr_bytes; i++)
		printf("%d ", ptr[i]);
	printf("\n");

	free(ptr); // Libera la memoria del array

	return 0;
}

void FillArr(int *ptr, unsigned int nr_bytes) {
	for (int i = 0; i < nr_bytes; i++) {
		ptr[i] = i;
		//ptr++;
	}
}
