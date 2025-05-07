/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.04.02
 * \brief Safe input handling in C++
 * v1.0 (Improved version)
 *
 * Fixes applied:
 * 1. Replaced dangerous char arrays with std::string
 * 2. Removed uninitialized pointer usage
 * 3. Added proper input validation
 * 4. Improved string comparison
 * 5. Added error handling
 * 6. Removed commented-out code
 * 7. Added bounds checking
 */

#include <iostream>
#include <limits>
#include <string>
using namespace std;

void clearInputBuffer() {
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main(int argc, char *argv[]) {
  // Check if command line argument was provided
  if (argc <= 1) {
    cerr << "Error: Missing argument. Usage: " << argv[0] << " [0|1|2]" << endl;
    return 1;
  }

  string option(argv[1]);

  // Option 0: Single character input
  if (option == "0") {
    char cVar0;
    cout << "Enter a single character: ";

    if (!(cin >> cVar0)) {
      cerr << "Error: Invalid character input!" << endl;
      clearInputBuffer();
      return 1;
    }
    cout << "cVar0: " << cVar0 << endl;

    // Comparison example with safe initialization
    char cVar01 = 'e'; // Properly initialized
    cout << "cVar01: " << cVar01 << endl;
  }
  // Option 1: String input with safe handling
  else if (option == "1") {
    string strVar1; // Using std::string instead of char array
    cout << "Enter a string (max 9 chars will be stored): ";

    if (!(cin >> strVar1)) {
      cerr << "Error: Invalid string input!" << endl;
      clearInputBuffer();
      return 1;
    }

    // Ensure we don't exceed original buffer size (9 chars + null terminator)
    if (strVar1.length() > 9) {
      strVar1 = strVar1.substr(0, 9);
      cout << "Warning: Input truncated to 9 characters" << endl;
    }
    cout << "strVar1: " << strVar1 << endl;
  }
  // Option 2: Safe string input without pointer issues
  else if (option == "2") {
    string strVar2; // Using std::string instead of raw pointer
    cout << "Enter a string: ";

    if (!getline(cin >> ws, strVar2)) { // ws to skip leading whitespace
      cerr << "Error: Invalid string input!" << endl;
      clearInputBuffer();
      return 1;
    }
    cout << "strVar2: " << strVar2 << endl;
  } else {
    cerr << "Error: Invalid option. Use 0, 1, or 2" << endl;
    return 1;
  }

  return 0;
}
