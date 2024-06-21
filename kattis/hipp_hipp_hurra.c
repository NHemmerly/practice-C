#include <stdio.h>
#include <string.h>
#define BUFFER 100

int main(){

    int age = 0;
    char name[BUFFER];

    fgets(name, BUFFER, stdin);
    name[strcspn(name, "\n")] = 0;
    scanf("%d", &age);

    for (int i = 0; i < age; i++)
    {
        printf("Hipp hipp hurra, %s!\n", name);
    }

}