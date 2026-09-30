#include <stdio.h>

int main(void) {
    double tolerancia = 1e-6;
    double suma = 0.0;
    double esperado = 0.693147;
    double error = 0.0;
    int n = 1;
    int signo = 1;

    printf("Tolerancia: %g\n", tolerancia);
    
    while ((1.0 / n) >= tolerancia) {
        suma += signo * (1.0 / n);
        signo = -signo;
        n++;
    }
    
    if (esperado > suma) {
        error = esperado - suma;
    } else {
        error = suma - esperado;
    }

    printf("Iteraciones: %d (aprox.)\n", n - 1);
    printf("Suma calculada: %f\n", suma);
    printf("ln(2) esperado: %f\n", esperado);
    printf("Error absoluto: %f\n", error);








    

    return 0;
}