#include <stdio.h>

/*Count lines of input*/

int main(){
    int c, nl, tabs, blanks;
    nl = 0; 
    tabs, blanks = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        } else if (c == '\t')
        {
            ++tabs;
        } else if (c == ' ')
        {
            ++blanks;
        }

    }


    printf("Newlines: %3d\n", nl);
    printf("Blanks: %5d\n", blanks);
    printf("Tabs: %7d\n", tabs);
}