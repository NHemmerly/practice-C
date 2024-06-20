#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    if ((n % 2) == 0)
        printf("Bob");
    else
        printf("Alice");
}