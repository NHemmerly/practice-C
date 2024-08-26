#include <iostream>
#include <vector>
#include <cassert>

void fizzbuzz(int count)
{
    static const std::vector divisors = {3, 5, 7, 11, 13, 17, 19};
    static const std::vector<std::string_view> words = {"fizz", "buzz", "pop", "bang", "jazz", "pow", "boom"};
    assert(divisors.size() == words.size());

    for (size_t i {0}; i < count; ++i)
    {
        std::string outWord{};
        for (size_t j {0}; j < divisors.size(); ++j)
        {
            if (i % divisors[j] == 0)
            {
                outWord += words[j];
            }
        }
        if (outWord.empty())
        {
            std::cout << i << std::endl;
        } else {
            std::cout << outWord << std::endl;
        }
    }
}

int main(){
    fizzbuzz(150);
    return 0;
}