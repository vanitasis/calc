#include <stdio.h>
#include "StandardOp.h"

void penjumlahan() {
    double num1, num2, num3;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("enter third number: ");
    scanf("%lf", &num3);

    printf("Result: %.3lf\n", num1 + num2 + num3);
}