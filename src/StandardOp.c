#include <stdio.h>
#include "StandardOp.h"

struct number no ;

void penjumlahan() {

    printf("Enter first number: ");
    scanf("%lf", &no.num1);

    printf("Enter second number: ");
    scanf("%lf", &no.num2);

    printf("enter third number: ");
    scanf("%lf", &no.num3);

    printf("Result: %.3lf\n", no.num1 + no.num2 + no.num3);
}

void pengurangan() {

    printf("enter first number: ");
    scanf("%lf", &no.num1) ;

    printf("enter second number: ");
    scanf("%lf", &no.num2) ;

    printf("enter third number: ");
    scanf("%lf", &no.num3) ;

    printf("result: %.3lf\n", no.num1 - no.num2 - no.num3);

}

void perkalian() {

    printf("eneter first number: ");
    scanf("%lf", &no.num1) ;

    printf("eneter second number: ");
    scanf("%lf", &no.num2) ;

    printf("eneter third number: ");
    scanf("%lf", &no.num3) ;

    printf("result : %3.lf \n", no.num1 * no.num2 * no.num3) ;
}

void pembagian() {

    printf("eneter first number: ");
    scanf("%lf", &no.num1) ;

    printf("eneter second number: ");
    scanf("%lf", &no.num2) ;

    printf("eneter third number: ");
    scanf("%lf", &no.num3) ;

    printf("result : %3.lf \n", no.num1 / no.num2 / no.num3) ;
}