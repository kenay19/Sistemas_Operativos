
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
/* Declaracion de Metodos*/
void menu();
void operacionUno(int, int);
void operacionDos(char *, char *);
void operacionTres(int);
void operacionCuatro(int);
void operacionCinco(int);
char *reverse(char *, int, int);
void swap(char *, char *);
char *itoa(int value, char *str, int base);

int main(){
    menu();
    return 0;
}

void menu(){

    unsigned int opcion;
    printf("===========================================\n");
    printf("1. Sumador\n");
    printf("2. Copiar Archivo\n");
    printf("3. Asignar Memoria\n");
    printf("4. Asignar Numero\n");
    printf("5. Impresion\n");
    printf("Escoja una opcion: ");
    scanf("%ud", &opcion);
    if (opcion == 1) {
        unsigned int inicio;
        unsigned int finaly;
        printf("Inicio de la suma: ");
        scanf("%ud", &inicio);
        printf("Final de la suma: ");
        scanf("%ud", &finaly);
        operacionUno(inicio, finaly);
    }
    if (opcion == 2){
        char origen[1000];
        char destino[1000];
        printf("Archivo Origen: ");
        scanf("%s", origen);
        printf("Archivo Destino: ");
        scanf("%s", destino);
        operacionDos(origen, destino);
    }
    if (opcion == 3){
        unsigned int bits;
        printf("Numero de bits: ");
        scanf("%ud", &bits);
        operacionTres(bits);
    }
    if (opcion == 4){
        unsigned int bits;
        printf("Numero de bits: ");
        scanf("%ud", &bits);
        operacionCuatro(bits);
    }
    if (opcion == 5){
        unsigned int bits;
        printf("Numero de impresiones: ");
        scanf("%ud", &bits);
        operacionCinco(bits);
    }
        
}

void operacionUno(int ninitial, int nfinal){
    char str1[256];
    char str2[256];
    itoa(ninitial, str1, 10);
    itoa(nfinal, str2, 10);
    char *list[] = {str1, str2, NULL};
    unsigned int result = execvp("scrips_Examen/suma", list);
    printf("Resultado: %ud\n", result);
}

void operacionDos(char *origen, char *destino){
    printf("Antes del execute");
    char *list[] = {origen, destino, NULL};
    unsigned int result = execvp("scrips_Examen/copia", list);
    printf("Resultado: %ud\n", result);
}

void operacionTres(int bits){
   char str1[256];
    itoa(bits, str1, 10);
    char *list[] = {str1, NULL};
    unsigned int result = execvp("scrips_Examen/asigMem", list);
    printf("Resultado: %ud\n", result);
}

void operacionCuatro(int bits){
    char str1[256];
    itoa(bits, str1, 10);
    char *list[] = {str1, NULL};
    unsigned int result = execvp("scrips_Examen/asigNum", list);
    printf("Resultado: %ud\n", result);
}

void operacionCinco(int bits){
    char str1[256];
    itoa(bits, str1, 10);
    char *list[] = {str1, NULL};
    unsigned int result = execvp("scrips_Examen/fun", list);
    printf("Resultado: %ud\n", result);
}

char *itoa(int value, char *buffer, int base){
    // entrada inválida
    if (base < 2 || base > 32){
        return buffer;
    }

    // considera el valor absoluto del número
    int n = abs(value);

    int i = 0;
    while (n){
        int r = n % base;

        if (r >= 10){
            buffer[i++] = 65 + (r - 10);
        }
        else{
            buffer[i++] = 48 + r;
        }

        n = n / base;
    }

    // si el numero es 0
    if (i == 0){
        buffer[i++] = '0';
    }

    // Si la base es 10 y el valor es negativo, la string resultante
    // va precedido de un signo menos (-)
    // Con cualquier otra base, el valor siempre se considera sin firmar
    if (value < 0 && base == 10){
        buffer[i++] = '-';
    }

    buffer[i] = '\0'; // string de terminación nula

    // invertir la string y devolverla
    return reverse(buffer, 0, i - 1);
}
char *reverse(char *buffer, int i, int j){
    while (i < j){
        swap(&buffer[i++], &buffer[j--]);
    }

    return buffer;
}
void swap(char *x, char *y){
    char t = *x;
    *x = *y;
    *y = t;
}