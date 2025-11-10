#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNo;
    float marks;
public:
    void input() {
        cout << "Enter name: "; 
        getline(cin, name);
        cout << "Enter roll no: ";
        cin >> rollNo;
        cout << "Enter marks: "; 
        cin >> marks;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}

Output
Enter name : Amit Kumar
Enter roll no : 101
Enter marks : 95.5
Name : Amit Kumar
Roll No : 101
Marks : 95.5