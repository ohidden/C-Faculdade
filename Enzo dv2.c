#include <stdio.h>

int main() {
   // Declarando as vari�veis
   float raio, area;
   
   // Lendo o raio do usu�rio
   printf("Digite o valor do raio do c�rculo: ");
   scanf("%f", &raio);
   
   // Calculando a �rea do c�rculo
   area = 3.14159 * raio * raio;
   
   // Imprimindo a �rea do c�rculo
   printf("A �rea do c�rculo � %.2f\n", area);
   
   return 0;
}

