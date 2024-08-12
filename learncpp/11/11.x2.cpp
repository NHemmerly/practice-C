#include <iostream>

// write your add function template here
template <typename T>
T add(T x, T y)
{
    return x + y;
}

template <typename T, typename U>
T mult(T x, U y)
{
    return x * y;
}

int main()
{
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';

    std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';

	return 0;
}