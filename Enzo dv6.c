#include <stdio.h>

int main() {
    float num;

    // Lê o número real
    printf("Digite um número real: ");
    scanf("%f", &num);

    // Imprime a parte inteira
    printf("A parte inteira de %f é %d.\n", num, (int)num);

    return 0;
}

