#include <cstdint> // for std::uint8_t
#include <iostream>

int main()
{

  constexpr int maxAge{16};
  std::cout << "How old are you?" << std::endl;

  int age{};
  std::cin >> age;

  std::cout << "Allowed to drive a car in Texas: ";

  if (age >= maxAge)
      std::cout << "Yes";
  else
      std::cout << "No";

  std::cout << "\n";

  return 0;
}