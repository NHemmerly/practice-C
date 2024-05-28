#include <stdio.h>
#define MAXLINE 1000
#define TAB_STOP 4
/*

Detab, a program that converts tabs into spaces along a specified
number of columns

*/

int gotline(char s[], int len);
void copy(char to[],char from[]);
void detab(char s[], char holder[]);

int main()
{
    int len;
    char line[MAXLINE];
    char holder[MAXLINE];

    while((len = gotline(line, MAXLINE)) > 0)
    {
        detab(line, holder);
        printf("%s", holder);
    }
    return 0;
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

void detab(char s[], char holder[])
{
    int i,j,spaces;

    for (i = j = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == '\t')
        {
            spaces = TAB_STOP - (j % TAB_STOP);
            while (spaces-- > 0)
            {
                holder[j++] = ' ';
            }
        } else 
            holder[j++] = s[i];
    }
    holder[j] = '\0';
    /*while (s[i] != '\0')
    {
        if (s[i] == '\t')
        {
            spaces = TAB_STOP - ((i + offset) % TAB_STOP);
            for (j = 0; j < (spaces); ++j)
            {
                holder[i + offset] = ' ';
                ++offset;
            }
        } else
            holder[i + offset] = s[i];
        ++i;
    }
    holder[i + offset] = '\0';
    */
}