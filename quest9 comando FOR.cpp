#include <stdio.h>

int main() {
    int n, i, valor;
    int positivos = 0, negativos = 0;
    float soma = 0;

    printf("Digite a quantidade de entradas: ");
    scanf("%d", &n);

       for (i = 0; i < n; i++) {
      printf("Digite o valor %d: ", i + 1);
     scanf("%d", &valor);

    
        soma += valor;
        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        }
    }
      float media = soma / n;
	    
    float percentualPositivos = (positivos / (float)n) * 100;
    float percentualNegativos = (negativos / (float)n) * 100;

    printf("\nMédia aritmetica: %.2f\n", media);
    printf("Quantidade de valores positivos: %d\n", positivos);
    printf("Quantidade de valores negativos: %d\n", negativos);
    printf("Percentual de valores positivos: %.2f%%\n", percentualPositivos);
    printf("Percentual de valores negativos: %.2f%%\n", percentualNegativos);

    return 0;
}
