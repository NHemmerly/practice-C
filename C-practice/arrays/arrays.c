#include <stdio.h>

int main() {
    int numbers[10];
    int average;

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;

    average = (numbers[0] + numbers[1] + numbers[2]) / 3;
    printf("%d", average);

    return 0;
}