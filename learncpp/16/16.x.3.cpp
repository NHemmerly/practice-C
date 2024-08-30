#include <iostream>
#include <vector>
#include <utility>
#include <limits>

template <typename T>
const std::pair<int, int> makePair(const std::vector<T>& arr)
{
    std::pair<T, T> coords{};
    T max{arr[0]};
    T min{arr[0]};
    for (int i = 0; i < arr.size(); ++i){
        if (arr[i] > max){
            max = arr[i];
            coords.first = i;
        }
        if (arr[i] < min){
            min = arr[i];
            coords.second = i;
        }
    }
    return coords;
}

template <typename T>
void printPair(const std::pair<int, int>& par, const std::vector<T>& arr)
{
    std::cout << "With array (";
    for (int i = 0; i < arr.size(); ++i)
    {
        if (i == 0){
            std::cout << " " << arr[i];
        } else{
            std::cout << ", " << arr[i];
        }
    }
    std::cout << " ):" << std::endl;
    std::cout << "The min element has index " << par.second << " and value " << arr[par.second] << std::endl;
    std::cout << "The max element has index " << par.first << " and value " << arr[par.first] << std::endl;

}

int main()
{

    std::vector<int> v1 {};
    std::cout << "Enter numbers to add (use -1 to stop): ";
    while (true)
    {
        int input{};
        std::cin >> input;
        if (input == -1){
            break;
        }

        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        v1.push_back(input);
    }    

    if (v1.size() == 0)
    {
        std::cout << "The array has no elements!" << std::endl;
    } else {
        //const std::vector v1 { 3, 8, 2, 5, 7, 8, 3 };
        //const std::vector v2 { 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 };
        const std::pair first = {makePair(v1)};
        //const std::pair second = {makePair(v2)};
        printPair(first, v1);
        //printPair(second, v2);

    }

}