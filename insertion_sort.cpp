#include <iostream>
#include <string>
using namespace std;

int main() {
    int size, ptr, temp;
    cout << "Enter the size of an array: ";
    cin >> size;
    int arr[size];
    cout << "Enter unsorted elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; 
    }

    for (int i = 1; i < size; i++) {  //~! start with position 1 
        temp = arr[i];                //~# store in temp to compare 
        ptr = i - 1;                  //~? compare to the left side of arr[i] 

        while (ptr >= 0 && temp < arr[ptr]) {    //~^ condition to check 
            arr[ptr + 1] = arr[ptr];             //~* condition is true shift element by +1
            ptr--;                               //~% decrement ptr to check rest element
        }

        arr[ptr + 1] = temp;                    //~# insert element of temp at proper place 
    }                                           //~% ptr + 1 because we have decrement the
                                                //~% ptr so we have to add +1 
    cout << "\nSorted elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
