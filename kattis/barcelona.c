#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER 100000

int main(){
    int n = 0;
    int k = 0;
    int i = 0;
    char *token;
    char conveyor[BUFFER];

    scanf("%d %d *[^\n]", &n, &k);

    int bag[n];

    fgets(conveyor, BUFFER, stdin);
    token = strtok(conveyor, " ");
    while (token != NULL && i < n) {
        bag[i++] = atoi(token);
        token = strtok(NULL, " ");
    }

    if (k == bag[0])
        printf("fyrst");
    else if (k == bag[1])
        printf("naestfyrst");
    else
    {
        i = 0;
        while (k != bag[i++])
        {   
            if ( k == bag[i] )
            {
                printf("%d fyrst", i + 1);
            }
        }
    }

    
}