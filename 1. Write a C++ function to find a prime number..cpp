#include <iostream>
using namespace std;

bool isPrime(int number);

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative number.\n";
        return 1;
    }
    
    if (isPrime(num))
        cout << num << " is a Prime number.\n";
    else
        cout << num << " is Not a Prime number.\n";

    return 0;
}


bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) return false;
    }
    return true;
}

Output
Enter a positive integer: 17
17 is a Prime number.
