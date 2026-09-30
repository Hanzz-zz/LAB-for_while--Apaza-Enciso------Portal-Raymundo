#include <stdio.h>

int main(void) {
    long long n_actual, temp;
    int pasos, max_pasos = 0;
    long long max_n = 1;

    for (n_actual = 1; n_actual <= 10000; n_actual++) {
        temp = n_actual;
        pasos = 0;
        
        while (temp != 1) {
            if (temp % 2 == 0) {
                temp /= 2;
            } else {
                temp = 3 * temp + 1;
            }
            pasos++;
        }
        
        if (pasos > max_pasos) {
            max_pasos = pasos;
            max_n = n_actual;
        }
    }
    
    printf("Mayor semilla en [1, 10000]: n = %lld, semilla = %d\n", max_n, max_pasos);
    






    
    return 0;
}