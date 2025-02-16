/*
Using a class write a program that receives input principle amount, time and
rate keeping rate 8% as default argument. Calculate the simple interest for
three customers.
*/

#include <iostream>

using namespace std;

class SimpleInterest {
  float principle, time, rate;

public:
  SimpleInterest(float principle, float time, float rate = 8) {
    this->principle = principle;
    this->time = time;
    this->rate = rate;
  }

  void output() {
    cout << "Simple interest of " << principle << " after " << time
         << " years and " << rate << " % rate is "
         << (principle * rate * time) / 100 << endl;
  }
};

int main(int argc, char const *argv[]) {
  SimpleInterest simpleInterest1(1000, 2);
  SimpleInterest simpleInterest2(1000, 2, 10);
  SimpleInterest simpleInterest3(1000, 2, 11);

  simpleInterest1.output();
  simpleInterest2.output();
  simpleInterest3.output();

  return 0;
}
