#include <iostream>
#include <cstring>
using namespace std;
void copyString(char destination[], const char source[], int maxSize);
int main() {
    char source[100], destination[100];
    cout << "Enter a string: ";
    cin.getline(source, 100);
    
    copyString(destination, source, 100);
    cout << "Copied String: " << destination << endl;
    return 0;
}

void copyString(char destination[], const char source[], int maxSize) {
    int i = 0;
    while (source[i] != '\0' && i < maxSize - 1) {
        destination[i] = source[i];
        ++i;
    }
    destination[i] = '\0';
}

Output
Enter a string: Hello World
Copied String: Hello World
