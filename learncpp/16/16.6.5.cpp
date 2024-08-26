#include <iostream>
#include <vector>

template <typename T>
const T findMax(const std::vector<T>& arr)
{
    T max{};
    if (arr.size() > 0)
    {
        max = arr[0];
    }

    for (size_t i {0}; i < arr.size(); ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    std::vector data1 { 84, 92, 76, 81, 56 };
    std::cout << findMax(data1) << '\n';

    std::vector data2 { -13.0, -26.7, -105.5, -14.8 };
    std::cout << findMax(data2) << '\n';

    std::vector<int> data3 { };
    std::cout << findMax(data3) << '\n';

    return 0;
}