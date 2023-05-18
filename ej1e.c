#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random() {
    srand(time(NULL));
    int dice = rand() % 8 + 1;
    if(dice >= 6) {
        return 6;
    }
else {
        return dice;
    }
}
int main() {
    printf("El dado es %d\n", random());
}