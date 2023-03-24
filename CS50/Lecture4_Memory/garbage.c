#include <stdio.h>
#include <stdlib.h>

int main(void){
    // random 1024 memories.
    // always initialize the values.
    int scores[1024];
    for (size_t i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
}