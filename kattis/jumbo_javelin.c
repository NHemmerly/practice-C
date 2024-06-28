#include <stdio.h>

int main()
{
    int n, l, rod;
    rod = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &l);
        rod += l;
    }
    printf("%d", rod - (n-1));
}