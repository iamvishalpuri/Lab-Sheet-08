#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() {
    int n, a[100];
    cout << "Enter size: "; 
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    bubbleSort(a, n);
    cout << "Sorted: ";
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

Output
Enter size : 5
Enter elements :
64 34 25 12 22
Sorted : 12 22 25 34 64