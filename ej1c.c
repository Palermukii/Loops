#include <stdio.h>
#include <stdlib.h>

void decide(int a) {
    if (a > 0) {
        printf("Positivo");
    }
    else if (a == 0) {
        printf("0");
    }
    else if (a < 0) {
        printf("Negativo");
    }
}
int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    decide(a);
    return 0;
}