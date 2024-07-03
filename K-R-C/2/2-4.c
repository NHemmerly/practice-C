#include <stdio.h>
#include <string.h>

#define BUFFER 1000 

int gotline(char s[], int len);


int main()
{
    int len;
    char line[BUFFER];

    while((len = gotline(line, BUFFER)) > 0)
    {
        
        
    }
    return 0;
}

int gotline(char s[], int len)
{
    int c, i;

    for (i = 0; i < len-1; ++i)
    {
        if ((c=getchar()) == '\n')
            break;
        if (c == EOF)
            break;
            
        s[i] = c;
        
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}