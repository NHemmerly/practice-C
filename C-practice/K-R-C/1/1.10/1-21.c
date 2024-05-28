#include <stdio.h>
#define MAXLINE 1000
#define TAB_STOP 4
/*

Entab, a program that converts stretches of spaces into the min
number of tabs+spaces to reach a tab break

*/

int gotline(char s[], int len);
void detab(char s[], char holder[]);
void entab(char in[], char out[]);

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

void entab(char in[], char out[])
{
    int i,j,spaces,tabs;

    spaces = 0;
    for (i = j = 0; in[i] != '\0'; ++i)
    {
        if (in[i] == ' ')
        {
            while (in[i] == ' ')
            {
                spaces++;
                i++;
            }
            tabs = (spaces / TAB_STOP);
            spaces = (spaces % TAB_STOP);
        } else
            out[j++] = in[i];
    }
    out[j] = '\0';
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