#include <stdio.h>

int main(){
    printf("hello, world %d\n", EOF);

    int c = 0;
    c = (getchar() != EOF);

    printf("%d", c);
    if ((getchar() != EOF) == 0)
    {
        printf("Zero!\n");
    } else if ((getchar() != EOF) == 1)
    {
        printf("One!\n");
    }

    return 0;
}