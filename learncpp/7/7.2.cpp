#include <iostream>

int main()
{
    int smaller{};
    int larger{};

    std::cout << "Enter an integer: ";
    std::cin >> smaller;
    std::cout << "Enter a larger integer: ";
    std::cin >> larger;

    if (smaller > larger)
    {
        int temp{smaller};
        std::cout << "Swapping..." << std::endl;

        smaller = larger;
        larger = temp;
    } //Temp Dies here mwhahaha

    std::cout <<"The smaller value is " << smaller << std::endl;
    std::cout <<"The larger value is " << larger << std::endl;


} // Smaller and larger die here