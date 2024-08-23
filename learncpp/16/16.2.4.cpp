#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr(3);

    std::cout << "Enter 3 integers: ";
    std::cin >> arr[0] >> arr[1] >> arr[2];

    int sum{0};
    int prod{1};

    for (int i = 0; i < arr.size(); ++i)
    {
        sum += arr[i];
        prod *= arr[i];
    }

    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The product is: " << prod << std::endl;
    
}