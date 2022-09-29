#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	char* arg_list[] = {"seq  1 100 ", NULL};
	execvp("seq", arg_list);
	printf("done with program\n");
	exit(0);
	return 0;
}