#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main (int argc, char *argv[]) {
	for(int i = 0 ; i < atoi(argv[0]);i++) {
		printf("%i) Hello world\n",(i+1));
	}
	
}

// Ver status  echo $?
