#include <stdio.h>

int main() {
    char operator;
    double first, second;
    double result;

    printf("\nEnter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("\nEnter first number: ");
    scanf("%lf", &first);
    printf("\nEnter second number: ");
    scanf("%lf", &second);

    switch (operator) {
        case '+':
            result = first + second;
            printf("\nRESULT: %.2lf", result);
            break;
        case '-':
            result = first - second;
            printf("\nRESULT: %.2lf", result);
            break;
        case '*':
            result = first * second;
            printf("\nRESULT: %.2lf", result);
            break;
        case '/':
            result = first / second;
            printf("\nRESULT: %.2lf", result);
            break;
        default:
            printf("Error: Invalid operator!");
    }

    return 0;
}