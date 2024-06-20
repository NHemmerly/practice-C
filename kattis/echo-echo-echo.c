#include <stdio.h>
#include <string.h>
#define BUFFER 16

int main(){
    char echo[BUFFER];

    fgets(echo, BUFFER, stdin);
    echo[strcspn(echo, "\n")] = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("%s ", echo);
    }
}