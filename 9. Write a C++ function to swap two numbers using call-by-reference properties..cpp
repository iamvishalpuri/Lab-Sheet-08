#include <iostream>
using namespace std;
void swapByReference(int &a, int &b);
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    
    swapByReference(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


Output
Enter two numbers: 10 20
Before swap: x = 10, y = 20
After swap: x = 20, y = 10
