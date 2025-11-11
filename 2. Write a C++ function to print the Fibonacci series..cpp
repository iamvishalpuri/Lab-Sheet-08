#include <iostream>
using namespace std;
void printFibonacci(int terms);
int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive number.\n";
        return 1;
    }
    printFibonacci(n);
    return 0;
}
void printFibonacci(int terms) {
    long long first = 0, second = 1, next;
    cout << "Fibonacci Series: ";

    if (terms >= 1) cout << first;
    if (terms >= 2) cout << ", " << second;

    for (int i = 3; i <= terms; ++i) {
        next = first + second;
        cout << ", " << next;
        first = second;
        second = next;
    }
    cout << endl;
}
Output
Enter number of terms: 8
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13
