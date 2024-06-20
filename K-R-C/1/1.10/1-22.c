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
    int i, last_space, line_len, j;
    i = last_space = line_len = j = 0;

    for (i = 0; in[i] != '\0'; ++i, ++j)
    {
        if ((in[i] == ' ') || (in[i] == '\t'))
        {
            last_space = i;
        }

        out[j] = in[i];
        line_len++;

        if (line_len == COL_SIZE)
        {
            if (last_space < (j - last_space))
            {
                j++;
                out[j] = '\n';
                line_len = 0;
            }
            else
            {
                out[last_space] = '\n';
                line_len = j - last_space;
            }
        } 
        /*
        if (((i % COL_SIZE) <= 0) && (in[i] == ' '))
        {
            out[i] = '\n';
        } else if ((i > 0) && ((i % COL_SIZE) <= 0))
            out[last_space] = '\n';
        
        */
        //printf("%d %c, %d %c, %d\n", i, in[i], j, out[j], last_space);
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