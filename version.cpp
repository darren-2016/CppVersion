/* Report the C++ Standard that is being used. */

#include <iostream>

int main() {
    
    std::cout << __cplusplus << std::endl;

    #if __cplusplus == 201703L
        std::cout << "C++17" << std::endl;
    #elif __cplusplus == 201402L
        std::cout << "C++14" << std::endl;
    #elif __cplusplus == 201103L
        std::cout << "C++11" << std::endl;
    #else
        std::cout << "C++" << std::endl;
    #endif
    return 0;
}