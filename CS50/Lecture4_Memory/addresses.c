#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    int n = 50;
    printf("%i\n", n);
    // print out the address of this variable
    printf("%p\n", & n);
    // pointers
    int *p = &n;
    printf("Pointers\n");
    printf("%p\n", p);
    printf("%p\n", &p);
    // go to the address
    printf("Go to the address within the pointer\n");
    printf("%i\n", *p);
    // strings
    printf("Strings\n");
    string s = "HI!";
    string *ps = &s;
    printf("%s\n", s);
    printf("%p\n", &ps);
    printf("Go to the address within the pointer\n");
    printf("%s\n", *ps);
    // printf("%s\n", ps);
    // using char star
    printf("using char *\n");
    char *st = "hi!";
    printf("%p\n", st);
    printf("Go to the address within the pointer\n");
    printf("%s\n", st);
    printf("%c\n", *st);
    printf("%p\n", &st[0]);
    printf("%p\n", &st[1]);
    printf("%p\n", &st[2]);
    printf("%p\n", &st[3]);
    printf("%p\n", &st[4]);
    printf("%p\n", &st[5]);
    printf("%p\n", &st[700]);
    // characters
    printf("Print out the characters\n");
    printf("%c\n", st[0]);
    printf("%c\n", st[1]);
    printf("%c\n", st[2]);
    printf("%c\n", st[3]);
    printf("%c\n", st[4]);
    printf("%c\n", st[5]);
    printf("%c\n", st[700]);
    // pointer arithmetrics
    printf("Pointer arithmetrics\n");
    printf("%i\n", *st);
    printf("%i\n", *(st+1));
    printf("%i\n", *(st+2));
    printf("%i\n", *(st+5000));
    // Segmentation fault
    // printf("%i\n", *(st+50000000));
    printf("Print out strings\n");
    printf("%s\n", st);
    printf("%s\n", (st+1));
    printf("%s\n", (st+2));
    printf("%s\n", (st+5000));
    printf("%s\n", (st-1));
    printf("%s\n", (st-2));
    // Compare strings
    // printf("Compare integers\n");
    // int i = get_int("i: ");
    // int j = get_int("j: ");
    // if (i==j)
    // {
    //     printf("Same\n");
    // }
    // else
    // {
    //     printf("Different\n");
    // }
    printf("Compare strings\n");
    string u = get_string("u: ");
    string v = get_string("v: ");
    if (s == NULL)
    {
        /* code */
        return 1;
    }
    
    printf("Compare directly\n");
    if (u==v)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
    printf("Use strcmp\n");
    if (strcmp(u,v)==0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
    printf("Compare in pointers, go to the address, only compares the first character\n");
    if (*u==*v)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
    printf("%s\n", u);
    printf("%s\n", v);
    printf("Print out the address\n");
    printf("%p\n", u);
    printf("%p\n", v);

    // Copying
    printf("Copying\n");
    string f = u;
    f[0] = toupper(f[0]);
    printf("u: %s\n", u);
    printf("f: %s\n", f);

    printf("string copy \n");
    // string h = *u;
    // h[0] = toupper(u[0]);
    // printf("u: %s\n", u);
    // printf("h: %s\n", h);
    string soft = (string) u;
    if (strlen(u)>0)
    {
        soft[0] = toupper(soft[0]);
    }
    printf("u: %s\n", u);
    printf("h: %s\n", soft);
    // malloc: memory allocation, it will return the first byte of memory that is found free for you.
    // free: do the opposite, free the memory
    printf("Hard copy \n");
    string copy = get_string("copy: ");
    char *hard = malloc(strlen(copy)+1);
    if (hard == NULL)
    {
        /* code */
        return 1;
    }
    // do not call function repeatively
    for (int i=0, length = strlen(copy)+1; i < length; i++)
    {
        hard[i] = copy[i];
    }
    if (strlen(hard)>0)
    {
        hard[0] = toupper(hard[0]);
    }
    printf("u: %s\n", copy);
    printf("h: %s\n", hard);
    // use function strcpy, but malloc first
    // NUL is different from NULL. 
    // NUL is \0 which is a single character.
    // NULL is actually a pointer. It is the address 0, nothing is supposed to go in by convention.
    // Always hand back the memory at the end, get_string does it automatically, but malloc does not.
    free(hard);
    // Valgrind

    return 0;
}

// 0x
// & get address of an object
// *
// ** double pointers


