#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>


void menu();
int main(int argc, char *argv[]) {
    char *origen = argv[1];
    int result = system(origen);
    printf("%d",result);
}




