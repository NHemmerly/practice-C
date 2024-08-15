#include <iostream>

// Provide the definition for IntPair and the member functions here
struct IntPair
{
    int lover1{};
    int lover2{};
    void print(){
        std::cout << "Pair(" << lover1 << ", " << lover2 << ")" << std::endl;
    }
    constexpr bool isEqual(const IntPair& otherPair)
    {
        if (lover1 == otherPair.lover1 && lover2 == otherPair.lover2)
        {
            return true;
        } else {
            return false;
        }
    }
};

int main()
{
	IntPair p1 {1, 2};
	IntPair p2 {3, 4};

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();

	std::cout << "p1 and p1 " << (p1.isEqual(p1) ? "are equal\n" : "are not equal\n");
	std::cout << "p1 and p2 " << (p1.isEqual(p2) ? "are equal\n" : "are not equal\n");

	return 0;
}