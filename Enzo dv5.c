#include <stdio.h>

int main() {
    int num;

    // L� o n�mero inteiro
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    // Imprime o antecessor e o sucessor
    printf("O antecessor de %d � %d.\n", num, num - 1);
    printf("O sucessor de %d � %d.\n", num, num + 1);

    return 0;
}

