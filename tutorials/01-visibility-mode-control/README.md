# Assignment 01: Visibility Mode Control

## Visibility Mode Control
Visibility mode control in C++ refers to the access specifiers used to define the accessibility of class members. The three primary access specifiers are:

1. **Public**: Members declared as public are accessible from outside the class.
2. **Protected**: Members declared as protected are accessible within the class and by derived class instances.
3. **Private**: Members declared as private are only accessible within the class itself.

These access specifiers help in encapsulating the data and functions, ensuring that the internal implementation details of a class are hidden from the outside world.

---

## Visibility Mode Control in Inheritance

When a class is derived from another class, the visibility mode control determines how the base class members are inherited by the derived class. The three visibility modes in inheritance are:

1. **Public Inheritance**: 
    - Public members of the base class remain public in the derived class.
    - Protected members of the base class remain protected in the derived class.
    - Private members of the base class are not accessible directly in the derived class.

2. **Protected Inheritance**:
    - Public members of the base class become protected in the derived class.
    - Protected members of the base class remain protected in the derived class.
    - Private members of the base class are not accessible directly in the derived class.

3. **Private Inheritance**:
    - Public members of the base class become private in the derived class.
    - Protected members of the base class become private in the derived class.
    - Private members of the base class are not accessible directly in the derived class.

These visibility modes help in controlling the access level of the inherited members and play a crucial role in the design of class hierarchies.

---

## 1. Public to Public
```c++
// The visibility mode: public -> public = public

#include <iostream>

using namespace std;

class A {
public:
  void displayA() { cout << "I am class A" << endl; }
};

class B : public A {
public:
  void displayB() { cout << "I am class B" << endl; }
};

int main() {
  B b;

  b.displayA();
  b.displayB();

  return 0;
}
```

**Output:**
```output
I am class A
I am class B
```

---

## 2. Protected to Public
```c++
// The visibility mode: protected -> public = protected

#include <iostream>

using namespace std;

class A {
protected:
  void displayA() { cout << "I am class A" << endl; }
};

class B : public A {
public:
  void displayB() { cout << "I am class B" << endl; }
};

int main() {
  B b;

  //   b.displayA(); --> ERROR! Since the function is protected
  b.displayB();

  return 0;
}
```

**Output:**
```output
I am class B
```

---

## 3. Private to Public
```c++
// The visibility mode: private -> public = not inherited

#include <iostream>

using namespace std;

class A {
private:
  void displayA() { cout << "I am class A" << endl; }
};

class B : public A {
public:
  void displayB() { cout << "I am class B" << endl; }
};

int main() {
  B b;

  //   b.displayA(); --> ERROR! Since the function isn't inherited
  b.displayB();

  return 0;
}
```

**Output:**
```output
I am class B
```

---

## 4. Public to Protected
```c++
// The visibility mode: public -> protected = protected

#include <iostream>

using namespace std;

class A {
public:
  void displayA() { cout << "I am class A" << endl; }
};

class B : protected A {
public:
  void displayB() { cout << "I am class B" << endl; }
};

int main() {
  B b;

  //   b.displayA(); --> ERROR! Since the function is protected
  b.displayB();

  return 0;
}
```

**Output:**
```output
I am class B
```

---

## 5. Protected to Protected
```c++
// The visibility mode: protected -> protected = protected

#include <iostream>

using namespace std;

class A {
protected:
  void displayA() { cout << "I am class A" << endl; }
};

class B : protected A {
public:
  void displayB() { cout << "I am class B" << endl; }
};

int main() {
  B b;

  //   b.displayA(); --> ERROR! Since the function is protected
  b.displayB();

  return 0;
}
```

**Output:**
```output
I am class B
```

---

## 6. Private to Protected
```c++
// The visibility mode: private -> protected = not inherited

#include <iostream>

using namespace std;

class A {
private:
  void displayA() { cout << "I am class A" << endl; }
};

class B : protected A {
public:
  void displayB() { cout << "I am class B" << endl; }
};

int main() {
  B b;

  //   b.displayA(); --> ERROR! Since the function isn't inherited
  b.displayB();

  return 0;
}
```

**Output:**
```output
I am class B
```

---

## 7. Public to Private
```c++
// The visibility mode: public -> private = private

#include <iostream>

using namespace std;

class A {
public:
  void displayA() { cout << "I am class A" << endl; }
};

class B : private A {
public:
  void displayB() {
    displayA(); // Private functions can be used inside class
    cout << "I am class B" << endl;
  }
};

int main() {
  B b;

  b.displayB();

  return 0;
}
```

**Output:**
```output
I am class A
I am class B
```

---

## 8. Protected to Private
```c++
// The visibility mode: protected -> private = private

#include <iostream>

using namespace std;

class A {
protected:
  void displayA() { cout << "I am class A" << endl; }
};

class B : private A {
public:
  void displayB() {
    displayA(); // Private functions can be used inside class
    cout << "I am class B" << endl;
  }
};

int main() {
  B b;

  b.displayB();

  return 0;
}
```

**Output:**
```output
I am class A
I am class B
```

---

## 9. Private to Private
```c++
// The visibility mode: private -> private = not inherited

#include <iostream>

using namespace std;

class A {
private:
  void displayA() { cout << "I am class A" << endl; }
};

class B : private A {
public:
  void displayB() {
    // displayA(); --> ERROR! Private functions are not inherited
    cout << "I am class B" << endl;
  }
};

int main() {
  B b;

  b.displayB();

  return 0;
}
```

**Output:**
```output
I am class B
```

---
