/**
 * @file:	unify_call_syntax.cpp
 * @author:	Jacob Xie
 * @date:	2025/07/18 14:37:47 Friday
 * @brief:
 **/

#include "unify_call_syntax.hpp"

#include <iostream>

int main(int argc, char** argv)
{
    Point p{3, 4};
    std::cout << "Distance: " << p.distance_from_origin() << std::endl;

    const Point pp{4, 5};
    std::cout << "Distance: " << pp.distance_from_origin() << std::endl;

    // otherwise:

    Point_ p_{3, 4};
    std::cout << "Distance: " << p_.distance_from_origin() << std::endl;

    const Point_ pp_{4, 5};
    // the following code cannot be compiled, work as expected.
    // std::cout << "Distance: " << pp_.distance_from_origin() << std::endl;

    return 0;
}
