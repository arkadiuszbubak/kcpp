#include <iostream>

int main() {
#ifdef DEBUG
    std::cout << "Debug mode is enabled!" << std::endl;
#else
    std::cout << "Debug mode is disabled." << std::endl;
#endif

    return 0;
}

