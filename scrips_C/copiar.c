#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char buffer[2048];

int copy(old, new) 
int old, new; {
	int count;
	while((count = read(old,buffer, sizeof(buffer))) > 0)
		write(new, buffer, count);
	return 0;
}

int main(int argc, char *argv[]) {
	int fdold, fdnew;
	if (argc != 3) {
		printf("Son necesarios dos arguentos\n");
		exit(1);
	}
	
	fdold = open(argv[1], O_RDONLY);
	if(fdold == -1) {
		printf("No esposible abrir %s\n", argv[1]);
		exit(1);
	}
	
	fdnew = creat(argv[2], 0666);
	if (fdnew == -1)  {
		printf("No se creo el archivo %s\n", argv[2]);
		exit(1);
	}
	
	copy(fdold, fdnew);
	exit(0);
	return 0;
}
