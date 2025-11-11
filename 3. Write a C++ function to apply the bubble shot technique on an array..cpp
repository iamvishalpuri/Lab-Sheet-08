#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size);
int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int numbers[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) cin >> numbers[i];
    
    bubbleSort(numbers, size);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) cout << numbers[i] << " ";
    cout << endl;
    return 0;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

Output
Enter array size: 5
Enter 5 elements:
64 34 25 12 22
Sorted Array: 12 22 25 34 64 
