#include <stdio.h>
#include <string.h>
#define BUFFER 1000

int main(){
    int n,max,digit,number,j;
    char name[BUFFER];
    char winner[BUFFER];
    char temp[BUFFER];
    
    n = max = digit = number = 0;

    scanf("%d *[^\n]", &n);

    for (int i = 0; i < n; i++)
    {
        number = 0;
        fgets(name, BUFFER, stdin);
        for (j = 0; j < strlen(name) - 1; j++)
        {
            if ((name[j] != ' ') && (name[j] > '9'))
            {
                temp[j] = name[j];
            }
            
            if (name[j] >= '0' && name[j] <= '9')
            {
                digit = name[j] - '0';
                number = number * 10 + digit;
            }
        }

        temp[j] = '\0';

        if (number > max)
        {
            max = number;
            memset(winner, '\0', sizeof(winner));
            strcpy(winner, temp);
        }
        
        memset(temp, '\0', sizeof(temp));
    }
    printf("%s", winner);
}