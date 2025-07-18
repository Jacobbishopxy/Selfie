# Selfie

## Prerequisites

update to CMake 3.28+ and GCC 14+, [ref](https://jacobbishopxy.github.io/docs/2025-7-7-ubuntu22-cmake328-gcc14/)

## Cases

- [simplified CRTP](./include/crtp.hpp)
- [perfect forwarding](./include/logger.hpp)
-

## Notes

- add `.clangd` in project root:

    ```txt
    CompileFlags:
      Add: [-std=c++23]
    ```
