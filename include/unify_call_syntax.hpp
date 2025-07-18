/**
 * @file:	unify_call_syntax.hpp
 * @author:	Jacob Xie
 * @date:	2025/07/18 14:37:54 Friday
 * @brief:
 **/

#pragma once

#include <cmath>

struct Point
{
    template <typename Self>
    auto distance_from_origin(this Self&& self)
    {
        return std::sqrt(self.x * self.x + self.y * self.y);
    }

    double x, y;
};

struct Point_
{
    auto distance_from_origin()
    {
        return std::sqrt(x * x + y * y);
    }

    double x, y;
};
