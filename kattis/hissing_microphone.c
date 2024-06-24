#include <stdio.h>
#include <string.h>
#define BUFFER 41


int main(){
    char fricatives[BUFFER];

    fgets(fricatives, BUFFER, stdin);

    for (int i = 0; i < strlen(fricatives); i++)
    {
        if (fricatives[i] == 's' && fricatives[i + 1] == 's')
        {
            printf("Hiss");
            return 0;
        } 
    }
    printf("no hiss");
}