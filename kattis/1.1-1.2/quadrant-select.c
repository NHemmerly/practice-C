#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x < 0 && y < 0)
        printf("3");
    else if (x > 0 && y < 0)
        printf("4");
    else if (x < 0 && y > 0)
        printf("2");
    else
        printf("1");

}