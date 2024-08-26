#include <cstdlib>
#include <iostream>
#include <vector>
#include <limits>

template <typename T>
void printArray(const std::vector<T>& vector)
{
    for (size_t i {0}; i < vector.size(); ++i)
    {
        std::cout << vector[i] << ' ';
    }
    if (vector.size() > 0)
    {
        std::cout << "\n";
    }
}

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool clearFailedExtraction()
{
    if (!std::cin)
    {
        if (std::cin.eof())
        {
            exit(0);
        }
        std::cin.clear();
        ignoreLine();
        return true;
    }
    return false;
}

template <typename T>
const T getUserInput(T low, T high)
{
    T input{};
    do
    {
        std::cout << "Enter a value between 0 and 9 (inclusive): ";
        std::cin >> input;
        if (clearFailedExtraction())
        {
            std::cout << "Invalid input. Try again\n";
            continue;
        }
        ignoreLine();
    } while (input < low || input > high);
    return input;
}

template <typename T>
const int searchArray(const std::vector<T>& arr, const T value)
{
    for (size_t i {0}; i < arr.size(); ++i)
    {
        if (value == arr[i])
        {
            std::cout << "The number " << value << " has index " << i << std::endl;
            return static_cast<int>(i);
        }
    }
    std::cout << "The number " << value << " was not found" << std::endl;
    return 10;
}



int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };
    std::vector arr2{ 4.4, 6.6, 7.7, 3.3, 8.8, 2.2, 1.1, 9.9 };
    auto input = getUserInput(1.0, 9.0);
    printArray(arr2); // use function template to print array
    int out {searchArray(arr2, input)};
    int test2 = getUserInput(1, 9);
    int out2 {searchArray(arr, test2)};
    

    return 0;
}