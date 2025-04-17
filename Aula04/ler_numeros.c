#include <stdio.h>

int main() {
    int numero;

    printf("Informe um numero inteiro:");
    scanf("%i", &numero);
    getchar(0.9);
    printf("O numero informado foi %i\n", numero);

    float nota;
    printf("Iforma uma nota entre 0.0 a 10.0: ");
    scanf("%f", &nota);
    printf("A sua nota foi %.1f\n", nota);
    
    return 0;
}