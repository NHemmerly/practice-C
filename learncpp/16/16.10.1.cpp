#include <iostream>
#include <vector>

void printStack(const std::vector<int>& arr)
{
    std::cout << "\t(Stack:";
    if (arr.empty()){
        std::cout << " empty";
    } else {
        for (const auto& num : arr)
        {
            std::cout << " " << num;
        }
    }
    std::cout << ")" << std::endl;
}

void pushStack(std::vector<int>& arr, const int val)
{
    arr.push_back(val);
    std::cout << "Push " << val;
    printStack(arr);
}

void popStack(std::vector<int>& arr){
    arr.pop_back();
    std::cout << "Pop";
    printStack(arr);
}

int main()
{
    std::vector<int> guy{};
    printStack(guy);
    pushStack(guy, 1);
    pushStack(guy, 2);
    pushStack(guy, 3);
    popStack(guy);
    pushStack(guy, 4);
    popStack(guy);
    popStack(guy);
    popStack(guy);



}