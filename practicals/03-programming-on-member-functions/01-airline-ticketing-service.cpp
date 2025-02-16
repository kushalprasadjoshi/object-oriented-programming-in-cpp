/*
Experiment 1:
Create a class that captures and display the airline tickets.
It should contain departure and arrival city, the flight number and seat
argument. The seat arrangement must contain the row and the seat number (like
12F). Display tickets for n number of passengers.
*/

#include <iostream>

#define N 2

using namespace std;

class ATS {
private:
  string name, depCty, arivlCty, seatNo;
  int flightNo;

public:
  void setDetails() { cin >> name >> depCty >> arivlCty >> flightNo >> seatNo; }

  void getDetails() {
    cout << name << " from " << depCty << " to " << arivlCty << " on flight "
         << flightNo << " on seat " << seatNo << endl;
  }
};

int main(int argc, char const *argv[]) {
  ATS customer[N];

  // Set details for customers
  cout << "Enter name, departure city, arrival city, flight number and seat "
          "number of customer: "
       << endl;
  for (int i = 0; i < N; i++) {
    cout << "Customer" << i + 1 << " :  ";
    customer[i].setDetails();
  }

  cout << endl << endl; // For convinence output

  // Get details for customers
  cout << "The details of your customers is as follows: " << endl;
  for (int i = 0; i < N; i++) {
    cout << "Customer" << i + 1 << " :  ";
    customer[i].getDetails();
  }

  return 0;
}
