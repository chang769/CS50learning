#include <stdio.h>

int main(void)
{
    // // good for int
    // int x;
    // printf("x:");
    // scanf("%i", &x);
    // printf("x:%i\n", x);

    // not good for stings
    // char *s = NULL;
    char s[4];
    printf("s:");
    // strings are already addresses
    scanf("%s", s);
    printf("x:%s\n", s);
}