#include <stdio.h>
#include <string.h>
#define BUFFER 10

int main(){
    char day[BUFFER];

    fgets(day, BUFFER, stdin);

    if (strcmp(day, "OCT 31\n") == 0 || strcmp(day, "DEC 25\n") == 0)
        printf("yup");
    else
        printf("nope");

}