#include <stdio.h>

int main() {
    int num, i;

    // Lê um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Imprime a tabuada do número
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

