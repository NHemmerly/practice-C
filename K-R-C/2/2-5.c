#include <stdio.h>
#include <string.h>

#define BUFFER 1000 

int gotline(char s[], int len);
int any(char s1[], char s2[]);


int main()
{
    int first;
    char string1[BUFFER];
    char string2[BUFFER];

    printf("string1: ");
    gotline(string1, BUFFER);
    printf("string2: ");
    gotline(string2, BUFFER);

    first = any(string1, string2);
    printf("%d\n", first);
    return 0;
}

int any(char s1[], char s2[])
{
    int first = strlen(s1);

    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j] && i < first)
            {
                first = i;
            }
        }
    }

    if (first == strlen(s1) - 1)
    {
        return -1;
    }
    return first;

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