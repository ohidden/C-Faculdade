#include <stdio.h>

int main() {
   // Declarando as vari�veis
   int num1, num2, soma;
   
   // Lendo os n�meros do usu�rio
   printf("Digite o primeiro n�mero: ");
   scanf("%d", &num1);
   
   printf("Digite o segundo n�mero: ");
   scanf("%d", &num2);
   
   // Calculando a soma
   soma = num1 + num2;
   
   // Imprimindo a soma
   printf("A soma dos dois n�meros �: %d", soma);
   
   return 0;
}
