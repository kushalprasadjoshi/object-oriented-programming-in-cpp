/*
Experiment 2:
Define a class Point that stores the x and y coordinates of a point.
The class uses parameterized constructor for initializing the class objects.
Display the point in the form as <| Point P1 = (x, y) |>
*/

#include <iostream>

using namespace std;

class Coordinates {
private:
  int x, y;

public:
  Coordinates(int x, int y) {
    this->x = x;
    this->y = y;
  }
  ~Coordinates() { cout << "Point P1 = ( " << x << ", " << y << ")" << endl; }
};

int main(int argc, char const *argv[]) {
  int x, y;
  cout << "Enter the value of x and y coordinates: ";
  cin >> x >> y;

  Coordinates coordinate = Coordinates(x, y);

  return 0;
}
