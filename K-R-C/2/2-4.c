#include <stdio.h>
#include <string.h>

#define BUFFER 1000 

int gotline(char s[], int len);
void squeeze(char s1[], char s2[]);
void removeChar(char s1[], char c);


int main()
{
    int len;
    char string1[BUFFER];
    char string2[BUFFER];

    printf("string1: ");
    gotline(string1, BUFFER);
    printf("%s", string1);
    printf("string2: ");
    gotline(string2, BUFFER);

    squeeze(string1, string2);
    printf("%s\n", string1);
    return 0;
}

void squeeze(char s1[], char s2[])
{
    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                removeChar(s1, s2[j]);
            }
        }
    }
}

void removeChar(char s1[], char c)
{

    /*
        I used this function from stack overflow.
        Basically, we skip past instances of the character but leave 
        behind the writer. Once we hit a char that doesn't match 
        the char to remove we replace the writer with the reader and
        increment the writer by 1.
    */

    int reader, writer;
    reader = writer = 0;

    while (s1[reader]){
        if (s1[reader] != c)
        {
            s1[writer++] = s1[reader];
        }
        reader++;
    }

    s1[writer] = 0;
    
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