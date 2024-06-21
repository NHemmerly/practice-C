#include <stdio.h>
#define KILOMETRE 0.09144

int main()
{
    int n = 0;
    
    scanf("%d", &n);

    printf("%f", n * KILOMETRE);
}