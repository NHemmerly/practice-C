#include <stdio.h>
#define BUFFER 100

int main()
{
    char sender[BUFFER];

    fgets(sender, BUFFER, stdin);

    printf("Kvedja,\n%s", sender);
}