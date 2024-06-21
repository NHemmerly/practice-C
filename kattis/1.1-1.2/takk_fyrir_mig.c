#include <stdio.h>
#define BUFFER 50

int main()
{
    int n = 0;
    char names[BUFFER];
    
    scanf("%d *[^\n]", &n);

    for (int i = 0; i < n; ++i)
    {
        fgets(names, BUFFER, stdin);
        printf("Takk %s", names);
        names[0] = '\0';
    }
}