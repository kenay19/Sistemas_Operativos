#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {
	int pid;
	pid = fork();
	pid = fork();
	
	if (pid < 0) {
		fprintf(stderr, "Fork failed!\n");
		exit(-1);
	} else if (pid == 0) {
		printf("I am the child, return from fork: %d\n", pid);
		execlp("/bin/ps", "ps", NULL);
	} else {
		printf("I am the parent, return from fork: %d\n", pid);
		printf("Parent exiting!\n");
		exit(0);
	}
	
}
