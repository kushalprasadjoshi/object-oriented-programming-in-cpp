/*
WAP to input any string from user. Write that string in a file. Write another
input to the same file. Read the whole written string from the file and display
it in console
*/

#include <fstream>
#include <iostream>

using namespace std;

void saveToFile(string myString) {
  ofstream file;
  file.open("file.txt");
  if (!file) {
    cerr << "Unable to open the file for writing.";
    return;
  }
  file << myString << endl;
  file.close();
}

void appenToFile(string myString) {
  fstream file;
  file.open("file.txt", ios::app);
  if (!file) {
    cerr << "Unable to open the file for writing.";
    return;
  }
  file << myString << endl;
  file.close();
}

string input(string inputString) {
  string myString;
  cout << inputString;
  getline(cin, myString);
  return myString;
}

void readFromFile() {
  string myString;
  ifstream file;
  file.open("file.txt");
  if (!file) {
    cerr << "Unable to open the file for reading.";
    return;
  }
  while (getline(file, myString)) {
    cout << myString << endl;
  }

  file.close();
}

int main(int argc, char const *argv[]) {
  string myString = input("Enter a string: ");
  saveToFile(myString);

  string anotherString = input("Enter another string: ");
  appenToFile(anotherString);

  readFromFile();

  return 0;
}
