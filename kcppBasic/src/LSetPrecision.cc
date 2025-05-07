/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Demonstrating setprecision manipulator in C++
 * \details Shows different floating-point precision formatting options
 * modified from: https://www.cplusplus.com/reference/iomanip/setprecision/
 * v0.03 (2024.06.20)
 */

#include <iostream>
#include <iomanip>  // For setprecision, fixed, scientific
#include <cmath>    // For M_PI constant (standardized in cmath)
using namespace std;

int main() {
    // Using long double for maximum precision demonstration
    const long double pi = M_PI;  // Most precise Γòº├ç representation available

    // 1. Default output
    cout << "Default output:\t\t" << pi << endl;

    // 2. Fixed-point notation demonstrations
    cout << "\nFixed-point notation:" << endl;
    cout << fixed;  // Applies to all subsequent outputs
    cout << "Precision 5:\t\t" << setprecision(5) << pi << endl;
    cout << "Precision 9:\t\t" << setprecision(9) << pi << endl;

    // 3. Scientific notation demonstrations
    cout << "\nScientific notation:" << endl;
    cout << scientific;  // Change to scientific notation
    cout << "Precision 5:\t\t" << setprecision(5) << pi << endl;
    cout << "Precision 9:\t\t" << setprecision(9) << pi << endl;

    // 4. Resetting to default float notation
    cout << "\nDefault float notation:" << endl;
    cout.unsetf(ios_base::floatfield);  // Reset to default notation
    cout << "Auto-selected format:\t" << pi << endl;

    // 5. Precision limitations note
    cout << "\nNote about floating-point precision:" << endl;
    cout << "float\t\t6-7 significant digits" << endl;
    cout << "double\t\t15-16 significant digits" << endl;
    cout << "long double\t19-20 significant digits" << endl;

    return 0;
}
