#include <stdio.h>
#include <stdlib.h>

int max(int a, int b, int c){
    if (a > b && a > c) {
        return a;
    }
    else if (b > a && b > c){
        return b;
    }
    else if (c > a && c > b) {
        return c;
    }
}
int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    printf("El maximo numero es %d", max(a,b,c));
}