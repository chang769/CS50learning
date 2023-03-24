#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (size_t i = 0; i < 4; i++)
    {
        /* code */
        printf("?");
    }
    printf("#\n");
    

    const int colrow = 5;
    for (size_t i = 0; i < colrow; i++)
    {
        /* code */
        for (size_t j = 0; j < colrow; j++)
        {
            printf("#");
            /* code */
        }
        printf("#\n");
    }
    printf("#\n");

    // int n = get_int("Size: ");
    // while (n < 1)
    // {
    //     /* code */
    //     int n = get_int("Size: ");
    // }

    // Get size of grid

    int n;

    do
    {
        /* code */
        n = get_int(" Size: ");
    } while (n < 1);

    // Print grid of bricks
    
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        for (size_t j = 0; j < n; j++)
        {
            printf("#");
            /* code */
        }
        printf("#\n");
    }
    printf("#\n");

}