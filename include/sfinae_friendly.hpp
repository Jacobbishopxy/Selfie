/**
 * @file:	sfinae_friendly.hpp
 * @author:	Jacob Xie
 * @date:	2025/07/18 13:36:03 Friday
 * @brief:
 **/

#pragma once

#include <iostream>
#include <type_traits>

struct SF
{
    template <typename Self>
        requires(!std::is_const_v<std::remove_reference_t<Self>>)
    void modify(this Self&& self)
    {
        std::cout << "Modifying (non-const)" << std::endl;
    }
};
