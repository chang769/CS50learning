#include <cs50.h>
// string get_string(string prompt)
#include <stdio.h>

int main(void)
{
    string first = get_string("what is your first name? ");
    string last = get_string("what is your last name? ");
    printf("hello, %s %s\n", first, last);
}