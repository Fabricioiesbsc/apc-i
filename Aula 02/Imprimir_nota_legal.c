#include <stdio.h>

int main() {
    printf("-----------------------\n");
    printf("   N O T A L E G A L\n");
    printf("-----------------------\n");
    printf("Item           Qtd Prc valor\n");
    printf("%-15s %03i %6.2f %7.2f\n", "Caneta Azul",   2, 2.0, 4.0);
    printf("%-15s %03i %6.2f %7.2f\n", "Borracha"       ,1, 5.0, 5.00);
    printf("%-15s %03i %6.2f %7.2f\n", "Resma de Papel", 1, 10.0, 10.0);
    printf("------------------------------\n");
    printf("               TOTAL: R$ %6.2f\n", 19.0);
    
    return 0;
}