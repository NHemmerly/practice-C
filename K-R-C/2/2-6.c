#include <stdio.h>

int setbits(unsigned int x, int p,int n, unsigned int y);
unsigned int getbits(unsigned int x, int p, int n);

int main(){

    unsigned int test = 10100;
    unsigned int what;

    what = getbits(test, 4, 3);
    printf("%u\n", what);
    

}

int setbits(unsigned int x, int p,int n,unsigned int y)
{

}

unsigned int getbits(unsigned int x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}
