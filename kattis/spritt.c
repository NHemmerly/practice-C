#include <stdio.h>

int main(){
    int n,x;
    int sum = 0;
    int c;
    scanf("%d %d", &n, &x);

    if (x < n)
    {
        printf("Neibb");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &c);
        sum += c;
        if (sum > x)
        {
            printf("Neibb");
            return 0;
        }
    }
    printf("Jebb");
}