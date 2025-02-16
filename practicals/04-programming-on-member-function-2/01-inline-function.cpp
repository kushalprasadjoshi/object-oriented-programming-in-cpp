/*
Experiment 1:
Assume that a customer will get 10% discount for a shirt.
Use inline function to display the net payment to the shopkeeper by the
customer.
*/

#include <iostream>

using namespace std;

inline void netPayment(float netCost) { cout << "Total cost = " << netCost; }

int main(int argc, char const *argv[]) {
  int costOfShirt = 1500;
  netPayment(costOfShirt - 10.0f / 100 * costOfShirt);

  return 0;
}
