#include <stdio.h>
#include <stdlib.h>


// Valgrind

int main(void)
{
    int *x = malloc(3* sizeof(int));
    if (x==NULL)
    {
        return 1;
    }
    x[0] = 72;
    x[1] = 72;
    x[2] = 72;
    // not freeing the memory
    free(x);
    return 0;
}