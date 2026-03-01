#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c", toupper(s[i]));
    }

    // TODO: loop through the string and print toupper(...) for each char

    printf("\n");
}
