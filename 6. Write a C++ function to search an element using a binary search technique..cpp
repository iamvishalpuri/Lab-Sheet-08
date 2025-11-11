#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int target);
int main() {
    int size, key;
    cout << "Enter sorted array size: ";
    cin >> size;

    int sortedArray[size];
    cout << "Enter " << size << " sorted elements:\n";
    for (int i = 0; i < size; ++i) cin >> sortedArray[i];
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(sortedArray, size, key);
    if (result != -1)
        cout << key << " found at index " << result << endl;
    else
        cout << key << " not found.\n";
    return 0;
}

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

Output
Enter sorted array size: 6
Enter 6 sorted elements:
10 20 30 40 50 60
Enter element to search: 40
40 found at index 3
