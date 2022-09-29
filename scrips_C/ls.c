#include <stdio.h>
#include <stdlib.h>

int main() {
	int result;
	result = system("ls -l *.cpp");
	printf("Resultado %d\n", result);
	return 0;
}