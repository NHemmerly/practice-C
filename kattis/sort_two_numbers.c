#include <stdio.h>

/*Sort two numbers*/

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b)
    {
        a ^= b;
        b ^= a;
        a ^= b;
    } 
    printf("%d %d", a, b);
}