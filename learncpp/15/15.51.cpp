#include <iostream>
#include <string>

template <typename T, typename U, typename V>
class Triad
{
    public:
        Triad(const T& x, const U& y, const V& z)
            : m_x{x}
            , m_y{y}
            , m_z{z}
        {}

        void print() const;
        const T& first() const {return m_x; }
        const U& second() const {return m_y; }
        const V& third() const {return m_z; }

    private:
        T m_x{};
        U m_y{};
        V m_z{};
};

template <typename T, typename U, typename V>
void Triad<T, U, V>::print() const{
    std::cout << "[" << m_x << ", " << m_y << ", " << m_z << "]";
};


int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';
	std::cout << t1.first() << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}