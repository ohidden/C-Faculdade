#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // verifica se o resto da divis�o por 2 � igual a zero
    if(numero % 2 == 0) {
        printf("%d � um numero par\n", numero);
    }
    else {
        printf("%d � um numero impar\n", numero);
    }

    return 0;
}

