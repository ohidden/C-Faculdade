#include <stdio.h>

int main() {
    float num;

    // L� o n�mero real
    printf("Digite um n�mero real: ");
    scanf("%f", &num);

    // Imprime a parte inteira
    printf("A parte inteira de %f � %d.\n", num, (int)num);

    return 0;
}

