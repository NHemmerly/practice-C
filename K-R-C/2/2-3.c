#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define BUFFER 1000

unsigned int htoi(char in[]);
int gotline(char s[], int len);

int main(){
    int len;
    char line[BUFFER];
    unsigned int out;

    while((len = gotline(line, BUFFER)) > 0)
    {
        out = htoi(line);
        printf("%u\n", out);
    }
    return 0;
}

unsigned int htoi(char in[])
{
    int i = 0;
    unsigned int out = 0;

    if (in[1] == 'x' || in[1] == 'X')
    {
        i = 2;
    }

    while (in[i] != '\0')
    {
        in[i] = tolower(in[i]);
        if (isdigit(in[i])) {
            out += (in[i] - '0') * (pow(16, (strlen(in) - 2) - i));
        }
        else if (isalpha(in[i])) {
            out += (in[i] - 87) * (pow(16, (strlen(in) - 2) - i));
        }
        i++;
    }

    return out;
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