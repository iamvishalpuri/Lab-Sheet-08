#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key) 
            left = mid + 1;
        else 
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n, arr[100], key;
    cout << "Enter size: "; 
    cin >> n;
    cout << "Enter sorted array:\n";
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    cout << "Search: "; 
    cin >> key;
    int pos = binarySearch(arr, n, key);
    if (pos != -1) 
        cout << "Found at index " << pos << endl;
    else 
        cout << "Not found\n";
    return 0;
}

Output
Enter size : 5
Enter sorted array :
10 20 30 40 50
Search : 30
Found at index 2
