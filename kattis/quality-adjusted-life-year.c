#include <stdio.h>

int main(){
    int n;
    double q, y;
    double qaly = 0.0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &q, &y);
        qaly += (q * y);
    }
    printf("%lf", qaly);
}