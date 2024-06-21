#include <stdio.h>
#define BUFFER 50

int main()
{
    int n = 0;
    char meat[BUFFER];

    scanf("%d *[^\n]", &n);

    for (int i = 0; i < n; i++)
    {
        fgets(meat, BUFFER, stdin);
    }

    if (n == 2)
        printf("blandad best");
    else
        printf("%s", meat);


}
