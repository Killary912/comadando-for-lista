#include <stdio.h>

int main() {
    char codigo;
    float valor, totalAVista = 0, totalAPrazo = 0, totalCompras = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o codigo de pagamento (V para vista, P para prazo): ");
        scanf(" %c", &codigo); 
        printf("Digite o valor da transacao: ");
        scanf("%f", &valor);

        if (codigo == 'V' || codigo == 'v') {
            totalAVista += valor;
        }
        else if (codigo == 'P' || codigo == 'p') {
            totalAPrazo += valor;
        }

        totalCompras += valor;
    }

     printf("\nValor total das compras à vista: %.2f\n", totalAVista);
      printf("Valor total das compras a prazo: %.2f\n", totalAPrazo);
     printf("Valor total das compras efetuadas: %.2f\n", totalCompras);

    return 0;
}

