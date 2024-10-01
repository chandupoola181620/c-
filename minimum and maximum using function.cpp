#include<iostream>
using namespace std;
void findMinMax(int arr[], int size, int &min, int &max) {
    min = max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
}
int main() {
    int arr[] = {3, 5, 1, 8, 2};
    int min, max;
    findMinMax(arr,5,min,max);
    cout << "Minimum: " << min << ", Maximum: " << max << endl;
    return 0;
}
