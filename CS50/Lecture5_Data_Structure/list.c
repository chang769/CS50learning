#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
//     int list[4];
//     list[0] = 1;
//     list[1] = 2;
//     list[2] = 3;
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%i\n", list[i]);
//     }
// }

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    // ... Get more memory
    // int *tmp = malloc (4*sizeof(int));
    int *tmp = realloc (list, 4*sizeof(int));
    if (tmp == NULL) 
    {
        free(list); 
        return 1;
    }
    list = tmp;
    list[3] = 4;
    // free(list);
    // Periodically
    // for (int i = 0; i < 3; i++)
    // {
    //     tmp[i] = list[i];
    // }
    tmp[3] = 4;
    free(list);
    list = tmp;
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
    free(list);
    return 0;
}