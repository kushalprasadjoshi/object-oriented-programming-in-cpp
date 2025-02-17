# Lab 08: Operator Overloading

## Operator Overloading
- Operator overloading is a form of compile time polymorphism.
- It lets you give special meaning to existing operators without altering their original behaviour.

**Example:** You can concatenate two strings using operator overloading.

### Operator Functions
- Operator functions have special names (e.g. operator +).
- They are called when the corresponding operator is used.

---

## Experiment 1
```c++
/*
Experiment 1:
Overload '+' operator to concatenate two strings.
*/

#include <iostream>

using namespace std;

class String {
  string myString;

public:
  String(string myString) : myString(myString) {}
  void display() { cout << myString; }

  String operator+(String stringObject) {
    return String(myString + " " + stringObject.myString);
  }
};

int main(int argc, char const *argv[]) {
  String firstName("Kushal"), middleName("Prasad"), lastName("Joshi");

  String fullName = firstName + middleName + lastName;
  fullName.display();

  return 0;
}
```

**Output:**
```output
Kushal Prasad Joshi
```

---

## Experiment 2
```c++
/*
Write a class Time with three integer attribute hour, minute and second.
Include following responsibiliteis in class:
1. Default and parameterized constructors
2. Display method to display hour, minute and second in time format.
3. Appopirate operator to overload to realize addition of two time objects.
*/

#include <iostream>

using namespace std;

class Time {
  int hour, minute, second;

public:
  // Same constructor as default and parameterized
  Time(int hour = 0, int minute = 0, int second = 0)
      : hour(hour), minute(minute), second(second) {}

  void display() { cout << hour << ":" << minute << ":" << second; }

  Time operator+(Time time) {
    int totalSeconds = hour * 3600 + minute * 60 + second;
    totalSeconds += time.hour * 3600 + time.minute * 60 + time.second;

    return Time(totalSeconds / 3600, (totalSeconds % 3600) / 60,
                totalSeconds % 60);
  }
};

int main(int argc, char const *argv[]) {
  Time time1(2, 39, 48), time2(2, 53, 48);
  Time time = time1 + time2;
  time.display();
  return 0;
}
```

**Output:**
```output
5:33:36
```

---
