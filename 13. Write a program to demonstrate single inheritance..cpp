#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPerson(string n, int a) { name = n; age = a; }
    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
    float marks;
public:
    void setStudent(string n, int a, float m) {
        setPerson(n, a);
        marks = m;
    }
    void display() {
        displayPerson();
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.setStudent("Rahul", 20, 88.5);
    s.display();
    return 0;
}

Output
Name : Rahul, Age : 20
Marks : 88.5