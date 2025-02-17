# Lab 11: File Handling

## File Handling
File handling in C++ allows you to create, read, write, and append data to files. It is essential for storing persistent data and for performing input/output operations with files. The fstream library in C++ provides the necessary classes and functions to work with files. The main classes used for file handling are:

- `ifstream`: Stream class to read from files.
- `ofstream`: Stream class to write to files.
- `fstream`: Stream class to both read and write from/to files.

Using these classes, you can open files in different modes such as read, write, and append. Proper error handling is crucial to ensure that file operations are successful and to handle cases where files cannot be opened or accessed.

### Syntax of Operating Files

To work with files in C++, you need to include the `<fstream>` header. Here are the basic steps and syntax for file operations:

1. **Include the fstream library:**
    ```cpp
    #include <fstream>
    ```

2. **Create file stream objects:**
    ```cpp
    std::ifstream inFile;  // For reading from a file
    std::ofstream outFile; // For writing to a file
    std::fstream file;     // For both reading and writing
    ```

3. **Open a file:**
    ```cpp
    inFile.open("filename.txt");           // Open a file for reading
    outFile.open("filename.txt");          // Open a file for writing
    file.open("filename.txt", std::ios::in | std::ios::out); // Open a file for both reading and writing
    ```

4. **Check if the file is open:**
    ```cpp
    if (!inFile.is_open()) {
         std::cerr << "Unable to open the file for reading.";
    }
    ```

5. **Read from a file:**
    ```cpp
    std::string line;
    while (std::getline(inFile, line)) {
         std::cout << line << std::endl;
    }
    ```

6. **Write to a file:**
    ```cpp
    outFile << "This is a line of text." << std::endl;
    ```

7. **Close the file:**
    ```cpp
    inFile.close();
    outFile.close();
    file.close();
    ```

8. **File modes:**
    - `std::ios::in` : Open for reading
    - `std::ios::out` : Open for writing
    - `std::ios::app` : Append to the end of the file
    - `std::ios::trunc` : Truncate the file if it exists
    - `std::ios::binary` : Open in binary mode

By following these steps, you can perform basic file operations in C++.

---

## Experiment 1
```c++
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
```

**Output:**
```output
Enter a string: I am Kushal Prasad Joshi.
Enter another string: I am from Nepal.
I am Kushal Prasad Joshi.
I am from Nepal.
```

---

## Experiment 2
```c++
/*
Design a class student with private data members roll number, name and total
marks. Use constructor to initialize data. Overload '>' operator to compare two
Student objects based on their total marks. Create an array of Student and find
the Student with highest marks. Display the information of topper studemt.
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float totalMarks;

public:
    Student(int r, string n, float m) : rollNumber(r), name(n), totalMarks(m) {}

    bool operator>(const Student& other) const {
        return this->totalMarks > other.totalMarks;
    }

    void display() const {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Student students[] = {
        Student(1, "Alice", 85.5),
        Student(2, "Bob", 90.0),
        Student(3, "Charlie", 88.0)
    };

    Student topper = students[0];
    for (int i = 1; i < 3; ++i) {
        if (students[i] > topper) {
            topper = students[i];
        }
    }

    cout << "Topper Student Information:" << endl;
    topper.display();

    return 0;
}
```

**Output:**
```output
Topper Student Information:
Roll Number: 2
Name: Bob
Total Marks: 90
```

---
