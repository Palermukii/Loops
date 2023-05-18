#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void discriminante(double a, double b, double c) {
    double D = b * b - 4 * a * c;
    double x1 = (-b + sqrt(D)) / (2 * a);
    double x2 = (-b - sqrt(D)) / (2 * a);
    printf("El discriminante es %.2f\n", D);
    if (D > 0) {
        printf("X1 es %.2f y X2 es %.2f", x1, x2);
    }
    else if (D == 0) {
        printf("La raiz es %.2f\n", x1);
    }
    else if (D < 0) {
        printf("No existe solucion en numeros reales\n");
    }
}
int main(int argc, char *argv[]) {
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    discriminante(a,b,c);
    return 0;
}