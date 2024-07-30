#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    constexpr int isLeftest {3};
    constexpr int isRightest {0}; 
    if (bits.test(isLeftest) == 1)
    {
        bits <<= 1;
        bits.set(isRightest);
        return bits;
    }
    return bits <<= 1;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}