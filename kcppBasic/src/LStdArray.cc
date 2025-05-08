/**
 * \author: Arkadiusz Bubak <arkadiusz@bubak.pl>
 * \date: 2025.05.08
 * \brief: std::array in C++
 * \version: v0.01
 */

#include <algorithm> // for sort, find
#include <array>
#include <iostream>

int main() {
  // Declare and initialize a std::array of integers with 5 elements
  std::array<int, 5> myArray = {10, 20, 30, 40, 50};

  // Access elements using index
  std::cout << "Accessing elements using index: ";
  for (size_t i = 0; i < myArray.size(); ++i) {
    std::cout << myArray[i] << " ";
  }
  std::cout << std::endl;

  // Use range-based for loop
  std::cout << "Using range-based for loop: ";
  for (int val : myArray) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Access front and back
  std::cout << "Front: " << myArray.front() << std::endl;
  std::cout << "Back: " << myArray.back() << std::endl;

  // Modify an element
  myArray[2] = 99;
  std::cout << "After modification: ";
  for (int val : myArray) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Sort the array
  std::sort(myArray.begin(), myArray.end());
  std::cout << "Sorted array: ";
  for (int val : myArray) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Find an element
  auto it = std::find(myArray.begin(), myArray.end(), 99);
  if (it != myArray.end()) {
    std::cout << "Found 99 at position: " << std::distance(myArray.begin(), it)
              << std::endl;
  } else {
    std::cout << "99 not found in the array." << std::endl;
  }

  // Fill array with a single value
  myArray.fill(7);
  std::cout << "Array after fill(7): ";
  for (int val : myArray) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  return 0;
}
