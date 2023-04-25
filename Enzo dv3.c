#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // verifica se o resto da divisão por 2 é igual a zero
    if(numero % 2 == 0) {
        printf("%d é um numero par\n", numero);
    }
    else {
        printf("%d é um numero impar\n", numero);
    }

    return 0;
}

