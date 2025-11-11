#include <iostream>
#include <cctype>
using namespace std;
int countWords(const char str[]);
int main() {
    char sentence[200];
    cout << "Enter a sentence: ";
    cin.getline(sentence, 200);

    int wordCount = countWords(sentence);
    cout << "Number of words: " << wordCount << endl;
    return 0;
}

int countWords(const char str[]) {
    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) {
            if (!inWord) {
                ++count;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

Output
Enter a sentence: C++ is a programming language 
Number of words: 5
