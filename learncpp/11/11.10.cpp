#include <iostream>

template <int T>
constexpr int factorial()
{
    static_assert(T >= 0);

    int accum{1};
    for (int i {2}; i <= T; ++i)
    {
        accum *= i;
    }
    return accum;
}



int main() {
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

    factorial<-3>(); // should fail to compile

    return 0;
}