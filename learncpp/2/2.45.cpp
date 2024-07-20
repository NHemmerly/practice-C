#include <iostream>

int doubleNumber(int num)
{
    return 2 * num;
}

int main(){

    int num{};

    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << doubleNumber(num) << std::endl;

}