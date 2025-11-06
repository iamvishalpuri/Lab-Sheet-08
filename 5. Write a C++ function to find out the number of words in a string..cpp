#include <iostream>
using namespace std;

int countWords(char str[]) {
    int words = 0, i = 0;
    bool inWord = false;
    while (str[i] != '\0') {
        if (str[i] != ' ' && !inWord) {
            inWord = true;
            words++;
        }
        else if (str[i] == ' ') {
            inWord = false;
        }
        i++;
    }
    return words;
}

int main() {
    char sentence[200];
    cout << "Enter sentence: ";
    cin.getline(sentence, 200);
    cout << "Words: " << countWords(sentence) << endl;
    return 0;
}

Output
Enter sentence : This is C++ lab
Words : 4