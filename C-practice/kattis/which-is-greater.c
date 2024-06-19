#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);
    if (a > b)
        printf("1");
    else
        printf("0");
}