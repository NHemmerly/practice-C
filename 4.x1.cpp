#include <iostream>

double getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;
    return height;
}

void calculateMeters(double height, int seconds)
{
    double gravity{9.8};
    double meters = height - (gravity * (seconds * seconds)/2);
    if (meters <= 0)
    {
        std::cout << "At " << seconds << " seconds, the ball is on the ground" << std::endl;
    } else
    {
        std::cout << "At "<< seconds << " seconds, the ball is at height: " << meters << std::endl;
    }
}

void printFall(double height)
{
    int seconds{0};
    calculateMeters(height, seconds++);
    calculateMeters(height, seconds++);
    calculateMeters(height, seconds++);
    calculateMeters(height, seconds++);
    calculateMeters(height, seconds++);
    calculateMeters(height, seconds++);

}

int main(){
    double height{getHeight()};
    printFall(height);
}