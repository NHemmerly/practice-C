#include <stdio.h>
#include <string.h>
#define BUFFER 100000

int main()
{
    char unnar[BUFFER];

    fgets(unnar, BUFFER, stdin);

    size_t length = strlen(unnar);
    printf("%zu", length - 1);

}