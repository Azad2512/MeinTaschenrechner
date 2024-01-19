#include <stdio.h>

int main() {

    double zahl1;
    double zahl2;
    char operation;

    printf("Geben Sie eine Zahl ein:");
    scanf_s("%lf", &zahl1);

    printf("\nGeben Sie noch eine Zahl ein:");
    scanf_s("%lf", &zahl2);

    printf("\nGeben Sie einen Operator ein:");
    scanf_s(" %c", &operation, 1);

    printf("\n\n");


    switch (operation) {
    case '+':
        printf("%lf + %lf = %lf\n", zahl1, zahl2, zahl1 + zahl2);
        break;
    case '-':
        printf("%lf - %lf = %lf\n", zahl1, zahl2, zahl1 - zahl2);
        break;
    case '*':
        printf("%lf * %lf = %lf\n", zahl1, zahl2, zahl1 * zahl2);
        break;
    case '/':
        // prüfen ob Divisor (zahl2) Null ist bevor Division durgeführt wird
        if (zahl2 != 0) {
            printf("%lf / %lf = %lf\n", zahl1, zahl2, zahl1 / zahl2);
        }
        else {
            printf("Error: Division durch Null ist nicht definiert.\n");
        }
        break;

    default:
        printf("Error: ungueltiger Operator\n");
        break;
    }

    return 0;
}
