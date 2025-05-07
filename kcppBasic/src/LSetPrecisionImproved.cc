/**
 * @author: Arkadiusz Bubak arkadiusz@bubak.pl
 * @date 2019.02.10
 * @brief Demonstrating setprecision manipulator in C++
 * @details Shows different floating-point precision formatting options
 * modified from: https://www.cplusplus.com/reference/iomanip/setprecision/
 * v0.03 (2024.06.20)
 */

#include <iostream>
#include <iomanip>   // For setprecision, fixed, scientific
#include <cmath>     // For M_PI constant (standardized in cmath)
#include <limits>    // For numeric_limits
#ifdef __cpp_lib_numbers
#include <numbers>   // For std::numbers::pi (C++20)
#endif

int main() {
    // Using long double for maximum precision demonstration
#ifdef __cpp_lib_numbers
    const long double pi = std::numbers::pi; // Most precise representation available (C++20)
#else
    const long double pi = M_PI;         // Most precise representation available (pre-C++20)
#endif

    // 1. Default output
    std::cout << "Default output:\t\t" << pi << " (default precision: "
              << std::cout.precision() << ")" << std::endl;

    // 2. Fixed-point notation demonstrations
    std::cout << "\nFixed-point notation:" << std::endl;
    std::cout << std::fixed
              << "Precision 5:\t\t" << std::setprecision(5) << pi << std::endl
              << "Precision 9:\t\t" << std::setprecision(9) << pi << std::endl;

    // 3. Scientific notation demonstrations
    std::cout << "\nScientific notation:" << std::endl;
    std::cout << std::scientific
              << "Precision 5:\t\t" << std::setprecision(5) << pi << std::endl
              << "Precision 9:\t\t" << std::setprecision(9) << pi << std::endl;

    // 4. Resetting to default float notation
    std::cout << "\nDefault float notation:" << std::endl;
    std::cout.unsetf(std::ios_base::floatfield); // Reset to default notation
    std::cout << "Auto-selected format:\t" << pi << std::endl;

    // 5. Precision limitations note
    std::cout << "\nNote about floating-point precision:" << std::endl;
    std::cout << "float\t\t" << std::numeric_limits<float>::digits10 << " significant digits" << std::endl
              << "double\t\t" << std::numeric_limits<double>::digits10 << " significant digits" << std::endl
              << "long double\t" << std::numeric_limits<long double>::digits10 << " significant digits" << std::endl;

    return 0;
}
