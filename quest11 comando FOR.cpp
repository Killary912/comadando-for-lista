#include <stdlib.h>
#include <stdio.h>

int main() {
    int X, Y;
    
    printf("Digite os valores de X e Y: ");
    scanf("%d %d", &X, &Y);
    

    if (X <= 1 || X >= 20 || X >= Y || Y >= 100000) {
        printf("Valores fora do intervalo permitido.\n");
        return 1;
    }
    
    for (int i = 1; i <= Y; i++) {
        printf("%d", i);
        
        if (i % X == 0 || i == Y) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
    
    return 0;
}

