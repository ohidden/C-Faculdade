#include <stdio.h>

int main() {
   // Declarando as variáveis
   float raio, area;
   
   // Lendo o raio do usuário
   printf("Digite o valor do raio do círculo: ");
   scanf("%f", &raio);
   
   // Calculando a área do círculo
   area = 3.14159 * raio * raio;
   
   // Imprimindo a área do círculo
   printf("A área do círculo é %.2f\n", area);
   
   return 0;
}

