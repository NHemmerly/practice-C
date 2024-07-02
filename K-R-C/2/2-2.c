#include <stdio.h>
#define MAXLINE 1000

int gotline(char s[], int len);
void copy(char in[], char out[]);

int main(){
    int len;
    char line[MAXLINE];
    char holder[MAXLINE];

    while((len = gotline(line, MAXLINE)) > 0)
    {
        copy(line, holder);
        printf("%s", holder);
    }
    return 0;
}

void copy(char in[], char out[])
{
    int i = 0;
    while ((out[i] = in[i]) != '\0')
        ++i;
}

int gotline(char s[], int len)
{
    int c, i;
/*
    for (i = 0; i < len-1; ++i)
    {
        if ((c=getchar()) != '\n')
        {
            if (c != EOF)
            {
                s[i] = c;
            }
        }
    }
*/
    for (i=0; i < len-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}