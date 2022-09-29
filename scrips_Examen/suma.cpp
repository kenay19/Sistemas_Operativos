#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main(int argc, char *argv[]) {
    int inicio = atoi(argv[0]), finaly = atoi(argv[1]);
    int suma = 0;
    for (int i = inicio ; i <=finaly; i++ ) {
        suma+=i;
    }
    printf("Resultado: %d \n",suma);
}