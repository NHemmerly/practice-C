#include <stdio.h>
#include <string.h>

#define BUFFER 101

int main()
{
    char names[BUFFER];

    fgets(names, BUFFER, stdin);

    for (int i = 0; i < (strlen(names) - 1); i++)
    {
        if (i == 0)
            printf("%c",names[i]);
        else if (names[i] == '-')
            printf("%c", names[i + 1]);
    }

}