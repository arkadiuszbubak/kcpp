/**
 * \author: Arkadiusz Bubak <arkadiusz@bubak.pl>
 * \date: 2025.05.08
 * \brief: std::list in C++
 * \version: v0.01
 */

#include <iostream>
#include <list>

int main() {
  // Create a list of integers
  std::list<int> myList;

  // Insert elements at the end of the list
  myList.push_back(10);
  myList.push_back(20);
  myList.push_back(30);
  myList.push_back(40);

  std::cout << "List after push_back operations: ";
  for (int val : myList) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Insert an element at the front of the list
  myList.push_front(5);
  std::cout << "List after push_front(5): ";
  for (int val : myList) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Remove an element from the front
  myList.pop_front();
  std::cout << "List after pop_front(): ";
  for (int val : myList) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Remove an element from the back
  myList.pop_back();
  std::cout << "List after pop_back(): ";
  for (int val : myList) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Insert an element at a specific position using an iterator
  auto it = myList.begin();
  std::advance(it, 2);   // Move the iterator to the third element
  myList.insert(it, 25); // Insert 25 at this position

  std::cout << "List after inserting 25 at the third position: ";
  for (int val : myList) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Remove a specific element
  myList.remove(20);
  std::cout << "List after removing 20: ";
  for (int val : myList) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Reverse the list
  myList.reverse();
  std::cout << "List after reverse: ";
  for (int val : myList) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  // Sort the list
  myList.sort();
  std::cout << "List after sort: ";
  for (int val : myList) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  return 0;
}
