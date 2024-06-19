#include <stdio.h>

int main(){
    int n = 0;

    scanf("%d", &n);
    if((n * n) % 2 == 0){
        printf("second");
    } else
        printf("first");
}