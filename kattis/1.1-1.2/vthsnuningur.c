#include <stdio.h>
#include <string.h>
#define BUFFER 1000


int main(){

    char hebrew[BUFFER];
    fgets(hebrew, BUFFER, stdin);
    int left = 0;
    int right = strlen(hebrew) - 1;
    char temp;

    for (left = 0; left <= right; left++)
    {
        temp = hebrew[left];
        hebrew[left] = hebrew[right];
        hebrew[right--] = temp;
    }

    printf("%s", hebrew);

    
}