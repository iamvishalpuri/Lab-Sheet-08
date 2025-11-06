#include <iostream>
using namespace std;

void swapNumbers(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before: a=" << a << ", b=" << b << endl;
    swapNumbers(a, b);
    cout << "After: a=" << a << ", b=" << b << endl;
    return 0;
}

Output
Enter two numbers : 10 20
Before : a = 10, b = 20
After : a = 20, b = 10