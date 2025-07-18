/**
 * @file:	logger.cpp
 * @author:	Jacob Xie
 * @date:	2025/07/18 09:37:59 Friday
 * @brief:
 **/

#include "logger.hpp"

int main(int argc, char** argv)
{
    Logger logger;
    logger.log("Hello, Logger");

    const Logger const_logger;
    const_logger.log("Hello, Const Logger");

    return 0;
}
