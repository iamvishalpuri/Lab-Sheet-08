#include <iostream>
#include <cstring>
using namespace std;

void copyString(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char source[100], destination[100];
    cout << "Enter string: ";
    cin.getline(source, 100);
    copyString(destination, source);
    cout << "Copied: " << destination << endl;
    return 0;
}

Output
Enter string : Hello C++
Copied : Hello C++