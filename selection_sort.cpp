#include <iostream>

using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int Index = i;
        for (int j = i + 1; j < size; j++)  {
            if (arr[j] < arr[Index]) {
                Index = j;
            }
        }
        swap(arr[i], arr[Index]);
    }
}
// main function
int main() { 
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, size);

    cout << "\nSorted elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
