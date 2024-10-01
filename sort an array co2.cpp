#include <iostream>
#include <algorithm>
using namespace std;

void sortArray(int arr[], int size) {
    sort(arr, arr + size);
}

void sortArray(double arr[], int size) {
    sort(arr, arr + size);
}

int main() {
    int intArray[] = {5, 2, 9, 1, 5, 6};
    double doubleArray[] = {3.1, 2.4, 5.6, 1.2, 4.8};

    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    sortArray(intArray, intSize);
    sortArray(doubleArray, doubleSize);

    cout << "Sorted Integer Array: ";
    for (int i = 0; i < intSize; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    cout << "Sorted Double Array: ";
    for (int i = 0; i < doubleSize; i++) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    return 0;
}
