#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double pago(char metodo, double precio, int cantidad) {
    double total = precio * cantidad;
    if (metodo == 'e') {
        return total * 0.85; 
    }
    else if (metodo == 't') {
        return total * 0.90;
    }
    else if (metodo == 'c') {
        return total * 1.05;
    }
    else if (metodo == 'd') {
        return total;
    }
}
int main(int argc, char *argv[]) {
    char metodo = argv[1][0];
    double precio = atof(argv[2]);
    int cantidad = atoi(argv[3]);
    printf("Debe pagar %.2f", pago(metodo, precio, cantidad));
    }