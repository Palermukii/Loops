#include <stdio.h>
#include <stdlib.h>

int veces(int n){
for(int i = 0; i < n; i++) {
    puts("Hola");
}
}


int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    veces(n);
    return 0;
}
