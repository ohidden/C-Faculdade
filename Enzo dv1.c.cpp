#include <stdio.h>

int main() {
   // Declarando as variáveis
   int num1, num2, soma;
   
   // Lendo os números do usuário
   printf("Digite o primeiro número: ");
   scanf("%d", &num1);
   
   printf("Digite o segundo número: ");
   scanf("%d", &num2);
   
   // Calculando a soma
   soma = num1 + num2;
   
   // Imprimindo a soma
   printf("A soma dos dois números é: %d", soma);
   
   return 0;
}
