#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("Printed from headers: \n");
    printf("schar: %4d to %d\nuchar:  0 to %d\nshort: %5d to %5d\nushort: 0 to %5d\nint:   %d to %d\nuint:   0 to %u\nlong:  %ld to %ld\nulong:  0 to %lu\n", 
            SCHAR_MIN, SCHAR_MAX, UCHAR_MAX, SHRT_MIN, SHRT_MAX, USHRT_MAX, INT_MIN, INT_MAX, UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX);
}