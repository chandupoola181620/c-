#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void printArray(double arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void printArray(char arr[], int size) {
    for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int intArr[] = {1, 2, 3, 4};
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4};
    char charArr[] = {'a', 'b', 'c', 'd'};

    printArray(intArr, 4);
    printArray(doubleArr, 4);
    printArray(charArr, 4);

    return 0;
}

