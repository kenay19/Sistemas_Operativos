#include <stdio.h>
#include <stdlib.h>

void FillWithZ(char *, unsigned int);

int main (int argc, char *argv[]) {
	char *ptr = NULL;
	unsigned int nr_bytes =atoi(argv[0]);
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