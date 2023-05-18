#include <stdio.h>
#include <stdlib.h>

int abs_value(int a){
    if (a >= 0) {
        return a;
    } 
    else {
        return -a;
    }
}   
int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    printf("El valor absoluto es %d", abs_value(a));
    return 0;
}