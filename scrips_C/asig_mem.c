#include <stdio.h>
#include <stdlib.h>

void FillWithZ(char *, unsigned int);

int main (void) {
	system("clear");
	char *ptr = NULL;
	unsigned int nr_bytes;
	printf("Escriba un numero entero : \n");
	scanf("%ud", &nr_bytes);
	ptr = malloc(nr_bytes);

	if (ptr != NULL) {
		FillWithZ(ptr, nr_bytes);
	} 

	printf("%s \n", ptr);

	free(ptr);
	return 0;
}

void FillWithZ(char *ptr, unsigned int nr_bytes) {
	for (int i = 0; i < nr_bytes; i++) {
		*ptr = 'z';
		ptr++;
	}
}