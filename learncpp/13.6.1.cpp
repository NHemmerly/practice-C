#include <iostream>
#include <string>

enum class Animal {
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

constexpr std::string_view getAnimalName(Animal animal)
{
    switch (animal){
    case Animal::pig:     return "pig";
    case Animal::goat:    return "goat";
    case Animal::chicken: return "chicken";
    case Animal::cat:     return "cat";
    case Animal::dog:     return "dog";
    case Animal::duck:    return "duck";
    default:              return "???";
    }
}

void printNumberOfLegs(Animal animal)
{

    std::cout << "A " << getAnimalName(animal) << " has ";
    switch (animal){
    case Animal::pig:     
    case Animal::goat:    
    case Animal::dog:     
    case Animal::cat:
        std::cout << 4;
        break; 

    case Animal::chicken:
    case Animal::duck:
        std::cout << 2;
        break;

    default:              std::cout << "Invalid animal provided!" << std::endl;
    }
    std::cout << " legs." << std::endl;
}


int main()
{
    printNumberOfLegs(Animal::cat);
    printNumberOfLegs(Animal::chicken);
}