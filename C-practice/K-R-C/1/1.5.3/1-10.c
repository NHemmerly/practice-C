#include <stdio.h>

/*
Write a program to copy its input to its output, replacing each tab
by a \t, backspace \b, and backslash \\. To make the tabs and backspaces 
visible in an unambiguous way.
*/

int main()
{
    char c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t'){
            printf("\\t");
        } else if (c == '\b'){
            putchar('\\');
            putchar('b');
        } else if (c =='\\')
        {
            printf("\\\\");
        }
        else{
            putchar(c);
        }
    }
}