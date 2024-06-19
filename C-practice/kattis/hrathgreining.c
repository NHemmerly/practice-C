#include <stdio.h>
#include <string.h>
#define BUFFER 1024

int main()
{
    char dna[BUFFER];
    char cov[3] = "COV";
    int check = 0;

    fgets(dna, BUFFER, stdin);

    for (int i = 0; i < (strlen(dna) - 1); i++)
    {
        if (dna[i] == cov[0])
        {
            if (dna[i+1] == cov[1] && dna[i + 2] == cov[2])
            {
                check = 1;
                break;
            }
        }
    }
    if (check == 1)
    {
        printf("Veikur!");
    } else
        printf("Ekki veikur!");

}

