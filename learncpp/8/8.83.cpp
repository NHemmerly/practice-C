#include <iostream>

int main()
{
    int outer{20};
    while (outer >= 1)
    {
        int inner{0};
        while (inner < outer)
        {
            std::cout << outer - inner << " ";
            ++inner;
        }

        std::cout << std::endl;
        --outer;
    }    
}