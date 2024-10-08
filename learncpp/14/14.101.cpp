#include <iostream>

class Ball
{
    public:
        Ball(const std::string_view color, const double radius)
            : m_color{color}
            , m_radius{radius}
        {}

        const std::string& getColor() const 
        {
            return m_color;
        }
        const double getRadius() const
        {
            return m_radius;
        }
    private:
        std::string m_color {};
        double m_radius {};
};

void print(const Ball& ball)
{
    std::cout << "Ball " << "(" << ball.getColor() << ", " << ball.getRadius() << ")" << std::endl;
}

int main()
{
	Ball blue{ "blue", 10.0 };
	print(blue);

	Ball red{ "red", 12.0 };
	print(red);

	return 0;
}