#include <stdio.h>

int main() {
    int A, i;
    long int fatorial = 1;
 
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &A);
 
    if (A < 0) {
        printf("Nao é possivel calcular o fatorial de um numero negativo.\n");
        return 1;  
    }

    printf("%d! = ", A);
    for (i = A; i > 1; i--) {
        printf("%d X ", i);  
        fatorial *= i;       
    }
    printf("1 = %ld\n", fatorial); 

    return 0;
}
