#include <iostream>

class Ball
{
    public:
        Ball (const double radius)
            : Ball{"black", radius}
        {}

        Ball (const std::string& color = "black", double radius=10.0)
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
        std::string m_color {"black"};
        double m_radius {10.0};
};

void print(const Ball& ball)
{
    std::cout << "Ball " << "(" << ball.getColor() << ", " << ball.getRadius() << ")" << std::endl;
}

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };
    print(def);
    print(blue);
    print(twenty);
    print(blueTwenty);


    return 0;
}