#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("\nIs the temperature in (C)elsius or (F)ahrenheit? ");
    scanf(" %c", &unit);

    unit = toupper(unit);

    if (unit == 'C') {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = temp * 9 / 5 + 32;
        printf("The temperature in Fahrenheit is %.1f\n", temp);
    } else if (unit == 'F') {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("The temperature in Celsius is %.2f\n", temp);
    } else {
        printf("You did not enter C or F!\n");
    }

    return 0;
}