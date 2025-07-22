/**
 * @file:	crtp.hpp
 * @author:	Jacob Xie
 * @date:	2025/07/17 09:20:28 Thursday
 * @brief:
 **/

#pragma once

#include <iostream>

struct Base
{
    template <typename Self>
    void foo(this Self&& self)
    {
        std::cout << "Base.foo calling derived..." << std::endl;
        self.impl();
    }

    // alternative
    void bar(this auto&& self)
    {
        std::cout << "Base.bar calling derived..." << std::endl;
        self.impl();
    }
};

template <typename T>
concept DerivedFromBase = std::is_base_of_v<Base, std::remove_cvref_t<T>>;

struct Derived1 : Base
{
    void impl();
};

struct Derived2 : Base
{
    void impl();
};
