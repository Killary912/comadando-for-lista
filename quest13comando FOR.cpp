#include <stdio.h>
#include <stdlib.h>

int main() {
    int Z, X;
    
      printf("Digite a quantidade de repetições: ");
      scanf("%d", &Z);
    
    for (int i = 0; i < Z; i++) {
        printf("Digite um valor X: ");
        scanf("%d", &X);
        
        if (X % 2 != 0) {
            X++;
        }
        
        int soma = 0;
        for (int j = 0; j < 5; j++) {
            soma += X;
            X += 2; 
        }
        
        printf("Resultado da soma: %d\n", soma);
    }
    
    return 0;
}

