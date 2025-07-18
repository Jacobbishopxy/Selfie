/**
 * @file:	sfinae_friendly.cpp
 * @author:	Jacob Xie
 * @date:	2025/07/18 13:37:49 Friday
 * @brief:
 **/

#include "sfinae_friendly.hpp"

int main(int argc, char** argv)
{
    SF sf;
    sf.modify();

    const SF sf_fail;
    // the following code cannot be compiled, work as expected.
    // sf_fail.modify();

    return 0;
}
