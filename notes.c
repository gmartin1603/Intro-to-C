#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    const float PI = 3.141592; // constant, capitalized by convetion

    char a = 'C'; // single quotes for characters %c
    char name[] = "George"; // double quotes for strings %s

    float c = 3.141592; // 4 bytes (32 bits of precision) 6-7 digits %f
    double d = 3.141592653589703; // 8 bytes (64 bits of precision) 15-16 digits %lf

    bool e = true; // 1 byte (8 bits) true or false %i

    // number assinged as char uses ascii table
    char f = 100; // 1 byte (-128 to +127) %d or %c
    unsigned char g = 100; // 1 byte (0 to 255) %d or %c

    short h = 32767; // 2 bytes (-32,768 to +32,767) %d
    unsigned short i = 65535; // 2 bytes (0 to 65,535) %d

    int j = 2147483647; // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295; // 4 bytes (0 to 4,294,967,295) %u

    long long int l = 9223372036854775807; // 8 bytes (-9 quintillon to +9 quintillon) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to 18 quintillion) %llu

    // printf("f as char is %c\n", f); // prints d as char
    // printf("f as int is %d\n", f); // prints d as int
    // printf("k is %u\n", k); // prints k as unsigned int
    // printf("l is %lld\n", l); // prints l as long long int
    // printf("m is %llu\n", m); // prints m as unsigned long long int

    /* format specifiers
    %c - char
    %s - string
    %d - int
    %f - float
    %lf - double

    %.1 = 1 decimal place
    %1 = minumum 1 digit, field width
    %- = left justify
    */
    float item1 = 1.23;
    float item2 = 4.56;
    float item3 = 7.89;
    // printf("Item 1: $%-8.2f\n", item1);
    // printf("Item 2: $%-8.2f\n", item2);
    // printf("Item 3: $%-8.2f\n", item3);

    // arithmetic operators
    int x = 10;
    int y = 2;

    float z = (float) x / y; // cast x to float
    // printf("z is %f\n", z);

    y++; // increment

    int aa = x % y; // modulus operator
    // printf("aa is %d\n", aa);

    // math functions #include <math.h>
    double bb = sqrt(9); // square root function from math.h
    // printf("bb is %f\n", bb);
    double cc = pow(2, 4); // power function from math.h
    // printf("cc is %f\n", cc);
    double dd = round(3.4); // round function from math.h
    // printf("dd is %f\n", dd);
    double ee = ceil(3.4); // ceiling function from math.h
    // printf("ee is %f\n", ee);
    double ff = floor(3.4); // floor function from math.h
    // printf("ff is %f/n", ff);
    double gg = fabs(-100); // absolute value function from math.h
    double hh = log(3); // natural log function from math.h
    double ii = sin(45); // sine function from math.h
    double jj = cos(45); // cosine function from math.h
    double kk = tan(45); // tangent function from math.h

    return 0;
}