#include <stdio.h>
#define BUFFER 1000

int main(){
    int n, p;
    char answer[BUFFER];

    scanf("%d %d *[^\n]", &n, &p);

    for (int i = 0; i < n; i++)
    {
        fgets(answer, BUFFER, stdin);
    }
    printf("%d", p);
}