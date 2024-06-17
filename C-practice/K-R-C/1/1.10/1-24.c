/*
* Write a program to check a C program
* for rudiementary syntax errors like 
* unbalanced parentheses, brackets, and
* braces. Single, double quotes, excape
* sequences, comments.
*/

#include <stdio.h>
#define MAXLINE 1000
/* 
* All things that must be closed. When the program encounters any of the
* below, the corresponding variable will be incremented by 1. When the program finds the
* corresponding closing symbol, the variable will be decremented by 1.
* At the end of the program the user will be notified of any variables greater than 1.
*/
#define braces 0     // {}
#define brackets 1   // []
#define pars 2       // ()
#define sin_quotes 3 // ''
#define dub_quotes 4 // ""
#define comments 5   // /**/

int gotline(char s[], int len);
void check_input(char in[], char out[], int symbols[]);

int main(){
    int len;
    char line[MAXLINE];
    char holder[MAXLINE];
    int symbols[6] = {0,0,0,0,0,0};
    char dictionary[6] = {'{', '[', '(', '\'', '\"', 'c'};


    while((len = gotline(line, MAXLINE)) > 0)
    {
        check_input(line, holder, symbols);
        printf("%s", holder);
    }
    
    for (int i = 0; i < 6; i++)
    {
        if (symbols[i] > 0)
        {
            printf("%c = %d unclosed instances\n", dictionary[i], symbols[i]);
        }
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

void check_input(char in[], char out[], int symbols[])
{
    int i, j;
    j = 0;

    for (i = 0; in[i] != '\0'; ++i)
    {
        if (symbols[dub_quotes] < 1 && symbols[sin_quotes] < 1 && symbols[comments] < 1)
        {
            if (in[i] == '(')
                symbols[pars]++;
            else if (in[i] == '{')
                symbols[braces]++;
            else if (in[i] == '[')
                symbols[brackets]++;
            else if (in[i] == '/' && in[i + 1] == '*')
                symbols[comments]++;

            if (in[i] == ')')
                symbols[pars]--;
            else if (in[i] == '}')
                symbols[braces]--;
            else if (in[i] == ']')
                symbols[brackets]--;
            else if (in[i] == '*' && in[i + 1] == '/')
                symbols[comments]--;
        }

        if (in[i] == '\'' && symbols[sin_quotes] > 0)
            symbols[sin_quotes]--;
        else if (in[i] == '\"' && symbols[dub_quotes] > 0)
            symbols[dub_quotes]--;
        else if (in[i] == '\"')
            symbols[dub_quotes]++;
        else if (in[i] == '\'')
            symbols[sin_quotes]++;

        out[j++] = in[i];
    }
    out[j] = '\0';
}
