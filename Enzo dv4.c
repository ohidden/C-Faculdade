#include <stdio.h>

int main() {
    // Declara��o das vari�veis
    float num1, num2, num3, media;

    // Leitura dos tr�s n�meros
    printf("Digite tres numeros: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // C�lculo da m�dia aritm�tica
    media = (num1 + num2 + num3) / 3;

    // Impress�o da m�dia aritm�tica
    printf("A media aritmetica eh: %.2f", media);

    return 0;
}

