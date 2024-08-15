#include <iostream>

template <typename T>
struct Triad
{
    T mem1{};
    T mem2{};
    T mem3{};
};

template <typename T>
Triad(T, T, T) -> Triad<T>;

template <typename T>
void print(const T& triad)
{
    std::cout << "[ " << triad.mem1 << ", " << triad.mem2 << ", " << triad.mem3 << "]";
}

int main()
{
	Triad t1{ 1, 2, 3 }; // note: uses CTAD to deduce template arguments
	print(t1);

	Triad t2{ 1.2, 3.4, 5.6 }; // note: uses CTAD to deduce template arguments
	print(t2);

	return 0;
}