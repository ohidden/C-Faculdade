#include <stdio.h>

int main() {
    // Declaração das variáveis
    float num1, num2, num3, media;

    // Leitura dos três números
    printf("Digite tres numeros: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Cálculo da média aritmética
    media = (num1 + num2 + num3) / 3;

    // Impressão da média aritmética
    printf("A media aritmetica eh: %.2f", media);

    return 0;
}

