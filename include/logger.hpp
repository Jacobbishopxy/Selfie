/**
 * @file:	logger.hpp
 * @author:	Jacob Xie
 * @date:	2025/07/18 09:02:33 Friday
 * @brief:
 **/

#pragma once

#include <iostream>

struct Logger
{
    void modify()
    {
        std::cout << "Modified!" << std::endl;
    }

    void log(this auto&& self, std::string_view msg)
    {
        std::cout << msg << std::endl;
        // Only if non-const
        if constexpr (!std::is_const_v<std::remove_reference_t<decltype(self)>>)
        {
            self.modify();
        }
    }

    // works the same as above
    template <typename Self>
    void log_(this Self&& self, std::string_view msg)
    {
        std::cout << msg << "\n";
        if constexpr (!std::is_const_v<std::remove_reference_t<Self>>)
        {
            self.modify();
        }
    }
};
