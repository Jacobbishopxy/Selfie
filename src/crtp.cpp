/**
 * @file:	crtp.cpp
 * @author:	Jacob Xie
 * @date:	2025/07/17 09:15:18 Thursday
 * @brief:
 **/

#include "crtp.hpp"

void Derived1::impl()
{
    std::cout << "D1 impl!" << std::endl;
}

void Derived2::impl()
{
    std::cout << "D2 impl!" << std::endl;
}

void doImpl(DerivedFromBase auto&& d)
{
    std::forward<decltype(d)>(d).foo();
    std::forward<decltype(d)>(d).bar();
}

int main(int argc, char** argv)
{
    Derived1 d1;
    doImpl(d1);

    Derived2 d2;
    doImpl(d2);

    return 0;
}
