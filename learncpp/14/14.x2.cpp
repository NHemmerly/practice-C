#include <iostream>

class Fraction
{
    public:
        explicit Fraction() = default;
        Fraction(const int num, const int denom)
            : numerator{num}
            , denominator{denom}
        {}

        Fraction multiply(const Fraction& other) const
        {
            Fraction temp{other.numerator, other.denominator};
            temp.numerator *= numerator;
            temp.denominator *= denominator;
            return temp;
        }

        void printFraction() const
        {
            std::cout << numerator << "/" << denominator << std::endl;
        }

        void getFraction()
        {
            std::cout << "Enter a value for numerator: ";
            std::cin >> numerator;
            std::cout << "Enter a value for denominator: ";
            std::cin >> denominator;
            std::cout << '\n';
            
        }
    private:
        int numerator{0};
        int denominator{1};
};

int main()
{
    Fraction f1{};
    f1.getFraction();
    Fraction f2{};
    f2.getFraction();

    std::cout << "Your fractions multiplied together: ";

    f1.multiply(f2).printFraction();

    return 0;
}