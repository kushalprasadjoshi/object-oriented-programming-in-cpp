/*
Show multiple inheritance in which class Gamma inherits two classes Alpha and
Beta. In the program all the classes must have their dispaly functions. The
Gamma class inherits two classes so it must have two datas one from each.
Use constructors to initialize the objects.
*/

#include <iostream>

using namespace std;

class Alpha {
protected:
  int alpha;

public:
  Alpha(int alpha) { this->alpha = alpha; }
  void showAlpha() { cout << "The value of alpha is : " << alpha << endl; }
};

class Beta {
protected:
  int beta;

public:
  Beta(int beta) { this->beta = beta; }
  void showBeta() { cout << "The value of beta is : " << beta << endl; }
};

class Gamma : protected Alpha, protected Beta {
public:
  Gamma(int alpha, int beta) : Alpha(alpha), Beta(beta) {}

  void showGamma() {
    showAlpha();
    showBeta();
  }
};

int main(int argc, char const *argv[]) {
  Gamma gamma(2, 3);
  gamma.showGamma();

  return 0;
}
