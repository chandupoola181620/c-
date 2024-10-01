#include <iostream>
#include <algorithm>

void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}

void sortArray(double arr[], int size) {
    std::sort(arr, arr + size);
}

int main() {
    int intArr[] = {5, 2, 8, 1, 3};
    double doubleArr[] = {5.5, 2.2, 8.8, 1.1, 3.3};

    sortArray(intArr, 5);
    sortArray(doubleArr, 5);

    std::cout << "Sorted Integer Array: ";
    for (int i ,intArr) std::cout << i << " ";
    std::cout << "\nSorted Double Array: ";
    for (double d : doubleArr) std::cout << d << " ";

    return 0;
}

