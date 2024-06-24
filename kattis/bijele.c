#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER 100

int main(){
    long starting[6] = {1, 1, 2, 2, 2, 8};
    char pieces[BUFFER];
    char *token;
    char *endptr;

    fgets(pieces, BUFFER, stdin);

    token = strtok(pieces, " ");
    for (int i = 0; i < 6; i++)
    {
        starting[i] -= strtol(token, &endptr, 10);
        token = strtok(NULL, " ");
        printf("%ld ", starting[i]);
    }

}