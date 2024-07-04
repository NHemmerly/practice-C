#include <stdio.h>

int setbits(unsigned int x, int p,int n, unsigned int y);
unsigned int getbits(unsigned int x, int p, int n);

int main(){

    unsigned int test = 1111;
    unsigned int what;

    what = getbits(test, 1, 1);
    printf("%u\n", what);
    

}

int setbits(unsigned int x, int p,int n,unsigned int y)
{

}

unsigned int getbits(unsigned int x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}
