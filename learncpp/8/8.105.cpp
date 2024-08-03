#include <iostream>

void fizzbuzz(int value)
{
    for (int i{0}; i <= value; ++i)
    {
        if (i % 3 == 0)
        {
            std::cout << "fizz";
        }
        if (i % 5 == 0)
        {
            std::cout << "buzz";
        }
        if (i % 7 == 0)
        {
            std::cout << "pop";
        } 
        if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
        {
            std::cout << i;
        }

        std::cout << std::endl;

    }
}

int main(){
    fizzbuzz(150);
}