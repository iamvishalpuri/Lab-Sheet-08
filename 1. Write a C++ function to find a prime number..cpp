#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num < 2) 
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return true;
}

int main() {
    int n;
    cout << "Enter number: "; cin >> n;
    if (isPrime(n))
        cout << n << " is Prime";
    else
        cout << n << " is Not Prime";
    return 0;
}

Output
Enter number : 17
17 is Prime