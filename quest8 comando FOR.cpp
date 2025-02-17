#include <stdio.h>

int main() {
        float salario, maiorSalario = 0, somaSalarios = 0;
       int filhos, somaFilhos = 0, pessoasComSalarioBaixo = 0;
       int i;

     for (i = 0; i < 10; i++) {
    printf("Pessoa %d:\n", i + 1);
    printf("Digite o salario: R$ ");
    scanf("%f", &salario);
    printf("Digite o numero de filhos: ");
    scanf("%d", &filhos);

        somaSalarios += salario;
        somaFilhos += filhos;
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }
        if (salario <= 550.0) {
            pessoasComSalarioBaixo++;
        }
    }
    float mediaSalario = somaSalarios / 10;
    float mediaFilhos = somaFilhos / 10.0;

    float percentagemSalarioBaixo = (pessoasComSalarioBaixo / 10.0) * 100;

      printf("\nMédia do salário: R$ %.2f\n", mediaSalario);
      printf("Média do número de filhos: %.2f\n", mediaFilhos);
      printf("Maior salário: R$ %.2f\n", maiorSalario);
      printf("Percentagem de pessoas com salário até R$ 550,00: %.2f%%\n", percentagemSalarioBaixo);

    return 0;
}
