#include <stdio.h>

int main() {
    float compras[10];
    float soma = 0, menor, maior;
    int i;

    for (i = 0; i < 10; i++) {
        printf("informe o valor da compra %d: ", i + 1);
        scanf("%f", &compras[i]);
        soma += compras[i];

        if (i == 0) {
            menor = compras[i];
            maior = compras[i];
        } else {
            if (compras[i] < menor) {
                menor = compras[i];
            }
            if (compras[i] > maior) {
                maior = compras[i];
            }
        }
    }

     float media = soma / 10;

    printf("\nA media das compras e: %.2f\n", media);
    printf("A menor compra e: %.2f\n", menor);
    printf("A maior compra e: %.2f\n", maior);
    printf("A diferenca entre a maior e a menor compra e: %.2f\n", maior - menor);

    return 0;
}
