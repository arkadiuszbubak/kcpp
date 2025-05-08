/**
 * \author: Arkadiusz Bubak <arkadiusz@bubak.pl>
 * \date: 2025.05.08
 * \brief: std::list and std::vector in C++
 * \version: v0.01
 */

#include <iostream>
#include <list>
#include <vector>

/* Use std::list if you need frequent insertions and deletions
 * at the front or middle of the collection.
 * Use std::vector if you need fast access to elements by index
 * and your collection size changes mostly at the back. */

int main() {

  /* List example */
  std::list<int> myList;

  // Inserting elements
  myList.push_back(10);
  myList.push_front(5);
  myList.push_back(20);

  // Accessing elements by index - NOT such functionality
  // std::cout << "Element at index 0: " << myList[0] << std::endl;

  // Iterating through list
  for (int val : myList) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Removing elements
  myList.pop_back();
  myList.pop_front();

  // Iterating after removal
  for (int val : myList) {
    std::cout << val << " ";
  }

  /* Vector example */

  std::vector<int> myVector;

  // Inserting elements
  myVector.push_back(10);
  myVector.push_back(20);
  myVector.push_back(30);

  // Accessing elements by index
  std::cout << "Element at index 0: " << myVector[0] << std::endl;

  // Iterating through vector
  for (int val : myVector) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Removing last element
  myVector.pop_back();
  // myVector.pop_front();   // No such functionality

  // Iterating after removal
  for (int val : myVector) {
    std::cout << val << " ";
  }

  return 0;
}
