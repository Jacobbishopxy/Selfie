/**
 * @file:	recursive_lambda.hpp
 * @author:	Jacob Xie
 * @date:	2025/07/18 14:55:30 Friday
 * @brief:
 **/

#pragma once

inline auto factorial = [](this auto self, int n) -> int
{
    return (n <= 1) ? 1 : n * self(n - 1);
};
