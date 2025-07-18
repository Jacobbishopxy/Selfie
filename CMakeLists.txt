# @file:	CMakeLists.txt
# @author:	Jacob Xie
# @date:	2025/07/17 09:14:04 Thursday
# @brief:

cmake_minimum_required(VERSION 3.20)
project(Selfie LANGUAGES CXX)

# Require C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# simplified CRTP
add_executable(crtp src/crtp.cpp)
target_include_directories(crtp PUBLIC include)

# perfect forwarding
add_executable(logger src/logger.cpp)
target_include_directories(logger PUBLIC include)

# eliminate overloads
add_executable(eliminate_overloads src/eliminate_overloads.cpp)
target_include_directories(eliminate_overloads PUBLIC include)

# SFINAE friendly
add_executable(sfinae_friendly src/sfinae_friendly.cpp)
target_include_directories(sfinae_friendly PUBLIC include)

# unified call syntax
add_executable(unify_call_syntax src/unify_call_syntax.cpp)
target_include_directories(unify_call_syntax PUBLIC include)

# recursive lambda
add_executable(recursive_lambda src/recursive_lambda.cpp)
target_include_directories(recursive_lambda PUBLIC include)
