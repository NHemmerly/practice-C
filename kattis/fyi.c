#include <stdio.h>
#include <string.h>
#define BUFFER 10

int main(){
    char number[BUFFER];

    fgets(number, BUFFER, stdin);
    if (number[0] == '5' && number[1] == '5' && number[2] == '5')
    {
        printf("1");
    } else
        printf("0");
}