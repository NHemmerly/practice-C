#include <stdio.h>

int main(){
    int a[7] = {1, 7, 5, 6, 4, 14, 11};

    for (int i = 0; i < 6; i++)
    {
        if (a[i] > a[i + 1]){
            a[i + 1] = a[i + 1] * 2;
        }
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d", a[i]);
    }
}