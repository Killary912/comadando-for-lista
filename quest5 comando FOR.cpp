#include <stdio.h>

int main() {
    int idade, pessoasMais50 = 0, pessoasMenos60kg = 0, pessoasEntre1e2m = 0;
    float altura, peso;
    int i;

          for (i = 0; i < 5; i++) {
           printf("Pessoa %d:\n", i + 1);
           printf("Digite a idade: ");
          scanf("%d", &idade);
           printf("Digite a altura (em metros): ");
           scanf("%f", &altura);
          printf("Digite o peso (em kg): ");
           scanf("%f", &peso);

        
       if (idade > 50) {
            pessoasMais50++;
        }

       if (peso < 60) {
            pessoasMenos60kg++;
        }

          if (altura >= 1.0 && altura <= 2.0) {
            pessoasEntre1e2m++;
        }
    }
      printf("\nPessoas com mais de 50 anos: %d\n", pessoasMais50);
      printf("Pessoas que pesam menos de 60kg: %d\n", pessoasMenos60kg);
      printf("Pessoas com altura entre 1m e 2m: %d\n", pessoasEntre1e2m);

    return 0;
}
