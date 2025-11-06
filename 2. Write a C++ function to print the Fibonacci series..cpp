#include <iostream>
using namespace std;

void Fibonacci(int terms) {
    int a = 0, b = 1, c;
    cout << "Fibonacci: ";
    for (int i = 0; i < terms; i++) {
        cout << a << " ";
        c = a + b;
        a = b; 
        b = c;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter terms: ";
    cin >> n;
    Fibonacci(n);
    return 0;
}

Output
Enter terms : 8
Fibonacci : 0 1 1 2 3 5 8 13