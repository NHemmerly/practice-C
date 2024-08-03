#include <iostream>

int getInt()
{
    std::cout << "Enter a number between 0 and 255: ";
    int x {};
    std::cin >> x;
    return x;
}

int printConvert(int bit, int in, int max)
{
    if (bit)
    {
        in -= max;
    }
    std::cout << bit;
    return in;
}

void binToDec(int in)
{
    int max {128};

    (in >= max) ? in = printConvert(1, in, max) : printConvert(0, in, max);
    (in >= (max/=2)) ? in = printConvert(1, in, max) : printConvert(0, in, max);
    (in >= (max/=2)) ? in = printConvert(1, in, max) : printConvert(0, in, max);
    (in >= (max/=2)) ? in = printConvert(1, in, max) : printConvert(0, in, max);
    (in >= (max/=2)) ? in = printConvert(1, in, max) : printConvert(0, in, max);
    (in >= (max/=2)) ? in = printConvert(1, in, max) : printConvert(0, in, max);
    (in >= (max/=2)) ? in = printConvert(1, in, max) : printConvert(0, in, max);
    (in >= (max/=2)) ? in = printConvert(1, in, max) : printConvert(0, in, max);

    std::cout << std::endl;
}

int main()
{
    int in{getInt()};
    binToDec(in);
}