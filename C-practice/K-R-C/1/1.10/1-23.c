#include <stdio.h>
#define MAXLINE 1000
#define ON 1
#define OFF 0
int start = OFF;
int quote = OFF;
/*

Write a program that removes all comments from a C program. 
Should handle quoted strings and character constants like '\n' properly

*/

int gotline(char s[], int len);
void remove_comments(char in[], char out[]);

int main()
{
    int len;
    char line[MAXLINE];
    char holder[MAXLINE];

    while((len = gotline(line, MAXLINE)) > 0)
    {
        remove_comments(line, holder);
        printf("%s", holder);
    }
    return 0;
}

void remove_comments(char in[], char out[])
{
    int i, j;
    j = 0;
    for (i = 0; in[i] != '\0'; ++i)
    {
        //printf("Hello");
        if ((in[i] == '/') && (in[i + 1] == '*'))
        {
            if (start == OFF && quote == OFF)
                start = ON;
        }

        if ((in[i] == '*') && (in[i + 1] == '/'))
        {
            if (start == ON && quote == OFF)
                i += 2;
                start = OFF;
        }

        if (start == OFF && (in[i] == '\"') && (quote == OFF))
            quote = ON;
        else if (start == OFF && (in[i] == '\"') && (quote == ON))
            quote = OFF;

        if (start == OFF || in[i] == '\n')
        {
            out[j++] = in[i];
        }
        //printf("%d, %d\n", i, j);
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
