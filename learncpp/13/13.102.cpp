#include <iostream>

struct Fraction
{
    int numerator {};
    int denominator {};
};

Fraction readFraction()
{
    Fraction temp {};
    std::cout << "Enter Fraction numerator: ";
    std::cin >> temp.numerator;
    std::cout << "Enter Fraction denominator: ";
    std::cin >> temp.denominator;
    return temp;
}

Fraction multFracs(const Fraction& frac1, const Fraction& frac2)
{
    Fraction temp{};
    temp.numerator = frac1.numerator * frac2.numerator;
    temp.denominator = frac1.denominator * frac2.denominator;
    return temp;
}

void printFraction(const Fraction& product)
{
    std::cout << "Product: " << product.numerator << "/" << product.denominator << std::endl;
}

int main()
{
    std::cout << "Fraction 1:" << std::endl;
    Fraction frac1 {readFraction()};
    std::cout << "Fraction 2:" << std::endl;
    Fraction frac2 {readFraction()};

    Fraction product {multFracs(frac1, frac2)};
    printFraction(product);   

}