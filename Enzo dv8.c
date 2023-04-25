#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Lê a temperatura em graus Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Converte a temperatura para Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Imprime a temperatura em Fahrenheit
    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

