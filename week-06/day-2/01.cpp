#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
    ~Student() {
        cout << "Student instance removed.";
    }
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21
    Student s1;
    s1.name = "John";
    s1.age = 21;
  return 0;
}

