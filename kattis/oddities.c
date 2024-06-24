#include <stdio.h>

int main(){
    int n;
    int t;

    scanf("%d *[^\n]", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        if ((t % 2) == 0)
        {
            printf("%d is even\n", t);
        } else 
            printf("%d is odd\n", t);
    }
}