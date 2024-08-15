#include <iostream>

// Provide the definition for IntPair and the print() member function here
struct IntPair
{
    int lover1{};
    int lover2{};
    void print(){
        std::cout << "Pair(" << lover1 << ", " << lover2 << ")" << std::endl;
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

	return 0;
}