/**
 * @file:	eliminate_overloads.hpp
 * @author:	Jacob Xie
 * @date:	2025/07/18 13:17:34 Friday
 * @brief:
 **/

#pragma once

#include <utility>

class EO
{
public:
    template <typename Self>
    auto&& get(this Self&& self)
    {
        return std::forward<Self>(self).value;
    }

private:
    int value = 42;
};
