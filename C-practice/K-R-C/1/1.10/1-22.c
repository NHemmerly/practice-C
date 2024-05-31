#include <stdio.h>
#define MAXLINE 1000
#define COL_SIZE 20
/*

Write a program "fold" that takes long input lines into two or more shorter lines
after the last non-blank character that occurs before the nth column of input.

*/

int gotline(char s[], int len);
void fold(char in[], char out[]);

int main()
{
    int len;
    char line[MAXLINE];
    char holder[MAXLINE];

    while((len = gotline(line, MAXLINE)) > 0)
    {
        fold(line, holder);
        printf("%s", holder);
    }
    return 0;
}

void fold(char in[], char out[])
{
    int i, j, last_space;
    i = j = last_space = 0;

    for (j = i = 0; in[i] != '\0'; ++i)
    {
        if ((in[i] == ' ') || (in[i] == '\t'))
        {
            last_space = j;
        }
        if ((j > 0) && (j % COL_SIZE) == 0)
        {
            j += 2;
            out[last_space] = '\n';
        } else {
            out[j++] = in[i];
        }
    }
    out[j] = '\0';
}

int gotline(char s[], int len)
{
    int c, i;

    for (i = 0; i < len - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}