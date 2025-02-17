#include <stdio.h>
#include <stdlib.h>

int main() {
    int X, Y;
    
    // Solicita os valores de X e Y
    printf("Digite os valores de X e Y: ");
    scanf("%d %d", &X, &Y);
    
    // Verifica se os valores estão dentro do intervalo permitido
    if (X <= 1 || X >= 20 || X >= Y || Y >= 100000) {
        printf("Valores fora do intervalo permitido.\n");
        return 1;
    }
    
    // Loop para imprimir a sequência
    for (int i = 1; i <= Y; i++) {
        printf("%d", i);
        
        // Verifica quando quebrar a linha
        if (i % X == 0 || i == Y) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
    
    return 0;
}
