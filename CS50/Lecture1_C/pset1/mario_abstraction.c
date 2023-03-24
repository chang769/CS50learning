#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    // Get size of grid
    int n = get_size();

    // Print grid of bricks
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        /* code */
        n = get_int(" Size: ");
    } while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = 0; j < size; j++)
        {
            printf("#");
            /* code */
        }
        printf("#\n");
    }
    printf("#\n");
}