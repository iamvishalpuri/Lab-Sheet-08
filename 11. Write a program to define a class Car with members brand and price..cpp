#include <iostream>
#include <string>
using namespace std;

class Car {
    string brand;
    float price;
public:
    void setData(string b, float p) {
        brand = b; price = p;
    }
    void display() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }
};

int main() {
    Car c1, c2;
    c1.setData("Toyota", 2500000);
    c2.setData("Honda", 1800000);
    c1.display();
    c2.display();
    return 0;
}

Output
Brand : Toyota, Price : 2500000
Brand : Honda, Price : 1800000