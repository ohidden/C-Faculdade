#include <stdio.h>

int main() {
    int num, i;

    // L� um n�mero inteiro
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    // Imprime a tabuada do n�mero
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

