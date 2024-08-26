#include <iostream>
#include <vector>

template <typename T>
void printElement(const std::vector<T> vector, const int index)
{
    int max = static_cast<int>(vector.size());
    if (index >= max || index < 0)
    {
        std::cout << "Invalid Index" << std::endl;
    } else {
        std::cout << "The element has value: " << vector[index] << std::endl;
    }
}

int main()
{
    std::vector v1 { 0, 1, 2, 3, 4 };
    printElement(v1, 2);
    printElement(v1, 5);

    std::vector v2 { 1.1, 2.2, 3.3 };
    printElement(v2, 0);
    printElement(v2, -1);

    return 0;
}