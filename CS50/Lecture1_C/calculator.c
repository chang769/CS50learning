#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // integer overflow
    long x = get_long("x: ");
    long y = get_long("y: ");
    // printf("%li\n", x + y);
    // truncation
    // float z = x / y;
    // type casting
    double z = (double) x / (double) y;
    // floating-point imprecision
    printf("%.20f\n", z);
}
