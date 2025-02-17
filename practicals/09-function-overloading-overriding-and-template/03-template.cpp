/*
Write a C++ program to find the square of a number using template.
*/

#include <iostream>

using namespace std;

template <typename t>

t getSquare(t num) {
  return num * num;
}

int main(int argc, char const *argv[]) {
  cout << "The square of 2 is " << getSquare<int>(2);

  return 0;
}
