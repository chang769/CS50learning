#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    for (size_t i = 0; i < 3; i++)
    {
        /* code */
        printf("meow\n");
    }

    int counter = 3;
    while (counter >= 0)
    {
        printf("meow\n");
        counter--;
    }

    while (true)
    {
        printf("meow\n");
    }
}
