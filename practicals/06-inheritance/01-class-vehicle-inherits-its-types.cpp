/*
WAP to create a class vehicle that contains data as brand.
Read and display the brand of the vehicle.
Create another class that contains name of vehicle, color and year of
manifacture of vehicle. Derive all the information of class vehicle and display
the information.
*/

#include <iostream>

using namespace std;

class Vehicle {
protected:
  string brand;
};

class Car : private Vehicle {
  string name, color, yearOfManifacture;

public:
  void setDetails() {
    cout << "Enter brand, name, color and year of manifacture of vehicle: ";
    cin >> brand >> name >> color >> yearOfManifacture;
  }

  void getDetails() {
    cout << "The brand of vehicle is " << brand << endl
         << "The name of vehicle is " << name << endl
         << "The color of vehicle is " << color << endl
         << "The year of manifacture  of vehicle is " << yearOfManifacture
         << endl;
  }
};

int main() {
  Car car;
  car.setDetails();
  car.getDetails();

  return 0;
}
