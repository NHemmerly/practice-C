#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a < b && a < c)
        printf("Monnei");
    else if (b < a && b < c)
        printf("Fjee");
    else if (c < a && c < b)
        printf("Dolladollabilljoll");    
}