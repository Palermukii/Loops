#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int naturales(int n) {
    int i = 0;
    int numeros = 0;
    while (i < n) {
        i++;
        return numeros + n/n;
    }
}
int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    printf("La suma de los numeros es de %d\n", naturales(n));
}