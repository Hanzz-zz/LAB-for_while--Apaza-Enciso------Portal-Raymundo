#include <stdio.h>

int main(void) {
    int n, suma, temp;
    
    printf("Ingrese n: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    
    printf("%d", n);
    
    while (n >= 10) {
        suma = 0;
        temp = n;
        
        while (temp > 0) {
            suma += temp % 10;
            temp /= 10;
        }
        
        n = suma;
        printf(" -> %d", n);
    }
    
    printf("\nRaiz digital: %d\n", n);




    
    
    return 0;
}