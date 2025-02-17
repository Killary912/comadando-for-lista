#include <stdio.h>

int main() {
    int valores[10];
    int i, maior, menor;
    float soma = 0, media;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
         scanf("%d", &valores[i]);
         soma += valores[i];
        
        if (i == 0) {
        	
             maior = valores[i];
             menor = valores[i];
        } else {
            if (valores[i] > maior) {
                maior = valores[i];
            }
             if (valores[i] < menor) {
                menor = valores[i];
            }
        }
    }
    
    media = soma / 10;

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}
