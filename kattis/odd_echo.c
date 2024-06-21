#include <stdio.h>
#include <string.h>
#define BUFFER 101

int main(){
    int n = 0;
    char echoes[BUFFER];

    scanf("%d *[^\n]", &n);

    for (int i = 0; i < n; i++)
    {
        fgets(echoes, BUFFER, stdin);
        if (((i + 1) % 2) != 0)
            printf("%s", echoes);
        memset(echoes, '\0', sizeof(echoes));

    }
}