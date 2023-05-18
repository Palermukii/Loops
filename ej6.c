#include <stdio.h>
#include <stdlib.h>

int veces(int n){
int i = 0;
while (i<n) {
    puts("Hola");
    i++;
}
}


int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    veces(n);
    return 0;
}